/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13506
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
    for (int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((((/* implicit */int) min((((/* implicit */short) ((arr_3 [i_0] [i_0 - 3]) >= (arr_3 [i_0 - 3] [i_1])))), (arr_0 [i_0 + 1])))) + (2147483647))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (max((var_3), (0ULL))))) - (11088550382180585523ULL))))))));
                    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_2]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) (unsigned short)50225)))) : (((/* implicit */int) ((arr_3 [i_0] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))))));
                            arr_14 [i_0] [i_0 - 2] [i_0] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */int) (unsigned char)246)) % (((/* implicit */int) (unsigned short)50252)));
                            var_18 = ((/* implicit */long long int) (~(((((((/* implicit */int) var_12)) + (2147483647))) << (((((((/* implicit */int) var_2)) + (27))) - (16)))))));
                            var_19 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0 - 2]))));
                            var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [(signed char)19] [i_0]))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1749008944)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15310))) : (1073709056U))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) == ((-(var_8)))));
                            arr_18 [6U] [i_3] [i_0] [i_0] [i_5] [i_5] [i_3] = (((~(((/* implicit */int) arr_11 [i_0])))) ^ (arr_13 [i_0] [i_0 + 1] [i_0] [15LL] [i_0] [i_0]));
                            var_22 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1] [i_0 - 2]))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_12 [i_0] [12ULL] [i_2] [i_3] [i_6 + 2] [i_6]))));
                            arr_21 [i_6 + 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) (signed char)0)) < (((/* implicit */int) (_Bool)0)))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((885036885) * (((/* implicit */int) (unsigned char)0))))));
                            arr_22 [(unsigned short)19] [(unsigned short)19] [i_2] [i_0] [i_6] = ((/* implicit */signed char) ((((var_8) + (2147483647))) << (((((/* implicit */int) arr_4 [i_0 - 3] [i_6 + 2])) - (1)))));
                        }
                        arr_23 [i_0 - 3] [i_1] [i_0] [i_3] = ((var_11) % (((/* implicit */int) var_10)));
                    }
                }
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_7]))))) ? (((((/* implicit */int) arr_11 [i_7])) << (((var_11) - (2131026925))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_1]))))));
                    var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_0 - 2] [6U] [i_1] [i_7])) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) arr_10 [i_7] [i_1] [i_1] [i_0])))) << (((((/* implicit */int) var_14)) - (161)))));
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 - 3]))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3]))) : (arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 2]))))))));
                }
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    var_28 ^= ((/* implicit */unsigned int) (((-((+(arr_20 [i_8] [i_8] [i_8] [i_8] [i_1] [i_1] [i_0]))))) == (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [(_Bool)1] [i_0]))));
                    arr_28 [i_8] &= ((/* implicit */signed char) ((((((arr_16 [i_0] [i_1] [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) << (((((/* implicit */int) arr_9 [i_0] [i_1] [i_8] [i_1])) + (95))))) % (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-41)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (var_3)))))))));
                }
                arr_29 [(unsigned short)10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((9079250810054798108ULL) - (((/* implicit */unsigned long long int) -1749008926))))) ? ((+(((/* implicit */int) (unsigned char)123)))) : (((/* implicit */int) (short)15606))));
                var_29 = ((/* implicit */unsigned int) arr_26 [(signed char)7] [i_0] [(unsigned short)15] [i_1]);
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (var_11))) & (((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_10))))))) ? (((1726976797) ^ (((/* implicit */int) (short)-15652)))) : (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */int) var_10))))));
}
