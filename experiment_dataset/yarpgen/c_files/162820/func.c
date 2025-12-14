/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162820
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_14 [i_2] [i_2] &= ((/* implicit */short) arr_7 [i_0] [i_0] [i_0]);
                        var_20 &= ((/* implicit */short) var_5);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (short i_5 = 2; i_5 < 22; i_5 += 4) 
            {
                {
                    var_21 -= ((/* implicit */unsigned short) max((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) | (var_5))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128))))))), (((/* implicit */unsigned int) max((((short) arr_2 [i_0 + 1] [i_0 + 1])), (((/* implicit */short) (unsigned char)130)))))));
                    var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) (short)(-32767 - 1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_5 + 2] [i_5] [i_5 + 2] [(_Bool)1])) < ((+(((/* implicit */int) arr_9 [i_5])))))))) : (var_8)));
                }
            } 
        } 
    }
    var_23 &= ((/* implicit */short) var_12);
}
