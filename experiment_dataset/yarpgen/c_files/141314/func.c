/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141314
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
    var_14 = ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (signed char)41)));
    var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (unsigned short)18822)) : (((/* implicit */int) (signed char)-42))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-33)), ((unsigned char)44))))) : (min((((/* implicit */unsigned long long int) var_8)), (6943024764379352856ULL)))))));
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            arr_10 [i_2] [i_1] [i_2] [(unsigned short)18] [(short)0] |= ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) + (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (signed char)20)));
                            var_17 = ((/* implicit */unsigned long long int) arr_9 [i_1] [20LL] [(_Bool)0]);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-33)) ? (arr_1 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-56)))))) ? (((/* implicit */int) arr_4 [i_1] [i_3 + 2] [i_3 - 1] [i_3 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [17] [9] [i_2 + 4])))))));
                            var_19 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_2 - 2] [i_3 - 1] [i_4]);
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_3] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [(short)12] [0LL] [i_3 - 1]))) : (3653406114U)));
                        }
                        for (int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            arr_13 [i_5] [i_1] [i_0] = ((/* implicit */unsigned short) ((int) (unsigned char)86));
                            arr_14 [i_1] [i_1] [i_2] [i_3] [i_3 + 1] [6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-48)) ? (11503719309330198774ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_15 [i_1] [i_1] [i_1] [6U] [(unsigned short)7] [i_5] = ((/* implicit */unsigned char) arr_4 [i_1] [(short)19] [(signed char)1] [i_5]);
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_11 [i_0]))));
                            var_22 |= ((((/* implicit */_Bool) ((signed char) 4175435427277855772LL))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [(unsigned short)19] [i_2] [i_3] [i_5])));
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            arr_18 [(short)12] [(unsigned short)6] [(unsigned char)21] [i_3] [i_1] [i_6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (short)-26830)) : (((/* implicit */int) arr_11 [i_1]))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_2 [i_2 + 4] [i_2 + 3]))));
                        }
                        arr_19 [i_3] [i_1] [i_1] [i_3 + 2] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (4198725827U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56)))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1] [i_1] [16U] [(unsigned char)15] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_3 + 1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)56))))) : (16216950426094113085ULL)));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (4480900695774893379LL))))) : (((((/* implicit */_Bool) 11503719309330198780ULL)) ? (11503719309330198763ULL) : (0ULL))))))));
    }
}
