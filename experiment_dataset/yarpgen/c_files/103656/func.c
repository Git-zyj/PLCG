/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103656
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
    var_17 = ((/* implicit */unsigned int) ((((var_16) | (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))) << (((((((/* implicit */int) min((var_5), (var_15)))) | (((((/* implicit */int) (unsigned char)63)) & (((/* implicit */int) (short)12)))))) - (13)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                var_18 = var_4;
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */long long int) min(((-(((/* implicit */int) arr_11 [i_4] [7ULL] [11LL] [i_2] [11LL] [i_1] [i_0])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))), (max((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)0)), (var_4)))), (arr_9 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2]))))))));
                            var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(4294967286U)))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (((arr_8 [i_4] [i_3] [i_2] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_16)))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_3 + 1] [(unsigned short)9] [i_2 + 1])) << (((/* implicit */int) var_2))));
                        }
                    } 
                } 
            }
            arr_12 [i_0] [7ULL] = ((/* implicit */long long int) (-((~(((/* implicit */int) var_14))))));
        }
        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */int) var_13);
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_10 [i_0] [4LL] [i_0] [i_5])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_0])) : (((/* implicit */int) var_3))))));
        }
        arr_16 [i_0] = ((/* implicit */unsigned short) (~(max((min((((/* implicit */unsigned long long int) var_15)), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_24 |= ((/* implicit */int) 4294967295U);
        var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (4294967286U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_16)))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)8191)))) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_10 [i_6] [(signed char)17] [i_6] [i_6]))))))))))));
        var_26 = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) (unsigned short)0)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
        var_27 = ((/* implicit */unsigned int) arr_11 [i_6] [i_6] [i_6] [i_6] [(signed char)15] [(signed char)15] [i_6]);
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
    }
}
