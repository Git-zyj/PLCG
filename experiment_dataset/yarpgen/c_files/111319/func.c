/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111319
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
    var_13 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((((/* implicit */short) var_0)), (var_10)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (var_6)));
    var_14 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((((((/* implicit */int) (unsigned char)2)) * (((/* implicit */int) (unsigned char)20)))) - (22)))));
                    var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [12ULL] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_6 [i_0] [(unsigned char)9] [i_2 + 1])) : (((/* implicit */int) arr_6 [5U] [5U] [i_2 + 1]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_17 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)253))));
            var_18 ^= ((/* implicit */long long int) (_Bool)1);
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_19 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_3] [i_5] [(unsigned char)2]))));
                        var_20 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 709200117)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)20))))) ? (((/* implicit */int) (unsigned char)250)) : (-111503478));
                        arr_16 [i_0] [(short)6] [i_3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_4] [i_4] [i_5] [i_3] [i_0]))));
                        var_21 -= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_6 [i_0] [i_3] [i_4])))) - (((((/* implicit */int) var_11)) - (((/* implicit */int) var_4))))));
                    }
                } 
            } 
            var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32753)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)0))));
        }
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_4))));
}
