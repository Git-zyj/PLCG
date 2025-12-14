/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120757
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_1 - 2] [i_1] [i_2 + 1] [i_3 - 1] = ((/* implicit */int) arr_2 [i_0 + 1] [i_1]);
                        var_20 = ((/* implicit */short) ((arr_9 [i_0 + 1] [i_1 - 1]) ? (((/* implicit */int) (unsigned char)88)) : (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2] [i_2]))))));
                        var_21 *= ((/* implicit */int) var_6);
                        var_22 = ((((/* implicit */int) (unsigned char)88)) & (975085343));
                        var_23 = ((/* implicit */_Bool) ((unsigned char) var_2));
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((-8919763298428133925LL) | (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_2 [i_0] [(signed char)12]))))))))));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((short) arr_8 [i_0 + 1] [i_0 + 1] [i_1 - 4] [0])))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) var_15)))));
                            var_27 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)116)) ^ (((/* implicit */int) arr_7 [i_0] [i_0] [14] [i_5] [14]))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */int) (unsigned char)95)) <= (var_4))));
                            arr_19 [i_0 + 1] [i_0 + 1] [i_4 - 1] [i_5] [i_6 + 1] [i_1] [i_6 + 1] = ((/* implicit */_Bool) (-(((((arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1]) + (2147483647))) << (((((/* implicit */int) (unsigned short)13113)) - (13113)))))));
                        }
                    } 
                } 
                var_28 *= ((/* implicit */unsigned char) var_3);
            }
        }
        var_29 -= ((/* implicit */short) ((((/* implicit */int) var_6)) << ((((-(((/* implicit */int) (unsigned char)255)))) + (264)))));
        arr_20 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [(signed char)8] [i_0 - 1] [(signed char)8])) : (((/* implicit */int) var_6))));
        var_30 = ((/* implicit */long long int) (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)88))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_7 = 2; i_7 < 17; i_7 += 1) 
    {
        for (signed char i_8 = 2; i_8 < 15; i_8 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) min((var_8), (((/* implicit */unsigned char) var_7)))))) ? (((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_13)) + (115))))))) : (((/* implicit */int) arr_26 [i_7 + 1] [i_7 - 2] [i_8]))));
                    var_32 += ((/* implicit */long long int) (-((+(((/* implicit */int) (short)-7549))))));
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_9 + 2] [i_9 + 2] [(unsigned short)2])) & (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)46)))) ^ (-1084292918))))))));
                }
                var_34 ^= ((/* implicit */long long int) (-(((((/* implicit */int) ((unsigned char) 536870904ULL))) | (((/* implicit */int) min(((unsigned char)63), ((unsigned char)167))))))));
            }
        } 
    } 
}
