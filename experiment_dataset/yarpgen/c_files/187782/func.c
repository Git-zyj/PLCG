/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187782
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
    var_19 = ((/* implicit */unsigned char) ((unsigned short) var_3));
    var_20 = ((/* implicit */int) max((((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 1280036391U)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)12509)))))), ((short)-30662)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((var_3) + (((/* implicit */int) (unsigned short)12513)))))) || (((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) % (1097176463365407534LL)))))))));
                    var_22 |= ((/* implicit */unsigned long long int) ((signed char) (unsigned short)12526));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53026)) ? (((/* implicit */int) (unsigned short)53026)) : (-1615445323)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    var_24 += ((/* implicit */unsigned short) ((_Bool) var_14));
                    var_25 = ((/* implicit */unsigned long long int) (unsigned short)12526);
                }
            } 
        } 
        arr_14 [(signed char)6] |= ((/* implicit */unsigned int) var_3);
        var_26 ^= ((/* implicit */int) arr_1 [(short)8]);
        var_27 = (-(((/* implicit */int) arr_8 [i_3] [i_3])));
        var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_7 [i_3] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) & (arr_4 [i_3] [i_3] [i_3]))))));
    }
    var_29 = ((/* implicit */unsigned int) var_17);
}
