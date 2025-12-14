/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105801
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_6))))))), (min((((long long int) arr_2 [i_0] [20LL])), (max((((/* implicit */long long int) arr_2 [(_Bool)1] [(_Bool)1])), (arr_3 [i_0] [i_1 + 2] [i_1])))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-813370539163089285LL) : (arr_4 [i_0] [i_1 + 1] [(short)7] [(short)3])))))) ? ((+(((/* implicit */int) (signed char)-5)))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_4])), (((((/* implicit */_Bool) (signed char)5)) ? (arr_7 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */long long int) arr_9 [i_0] [i_0] [(unsigned short)6] [i_2] [i_3] [(unsigned char)12] [0])) : (-2893340173773102809LL)))));
                            arr_12 [i_0] [i_0] [(_Bool)1] [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) max((var_0), (arr_8 [i_4] [i_0] [i_2 - 1] [i_4])))), ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_2] [i_0])) : (((/* implicit */int) var_7)))))))));
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1 + 1] [i_3]))))) ? (arr_10 [i_4] [i_2] [i_2]) : (((/* implicit */int) ((unsigned short) arr_6 [(signed char)12] [i_1 - 1] [i_2 - 1])))));
                            arr_13 [i_4] [i_0] [i_2 - 1] [i_1] [i_0] [i_0] = (~(((/* implicit */int) (_Bool)1)));
                        }
                        for (short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1] [0ULL])) ? (arr_3 [i_2 - 1] [i_2 - 1] [(short)9]) : (arr_3 [i_2 - 1] [i_2 - 1] [13])))))))));
                            var_14 -= (((_Bool)1) ? (5539820131541017120ULL) : (((/* implicit */unsigned long long int) -2893340173773102809LL)));
                        }
                        for (short i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            var_15 -= ((/* implicit */int) arr_2 [i_6] [i_6]);
                            arr_18 [i_0] [5] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_6] [i_2])) : (arr_9 [i_6] [i_6] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [(signed char)1] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (arr_10 [i_3] [1] [i_0])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (arr_9 [(unsigned short)9] [i_6] [i_3] [i_2] [(unsigned short)9] [i_0] [i_0]) : (arr_5 [i_2] [i_0] [i_2]))), (((/* implicit */int) ((var_9) == (arr_4 [7LL] [i_1] [i_1] [i_1])))))))));
                        }
                        var_16 *= ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) (+(18446744073709551615ULL)))))));
                        var_17 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((_Bool) var_7)) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [(unsigned char)18] [(unsigned char)18])) ? (-813370539163089285LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (arr_4 [i_3] [i_2] [i_1 - 1] [i_0]))))));
                    }
                }
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) (unsigned char)250)))) : ((-(((/* implicit */int) var_2))))));
}
