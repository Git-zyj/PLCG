/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101726
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (var_14)));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_13))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((long long int) arr_3 [i_0] [(signed char)10])))));
                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) var_7))))) && (arr_1 [i_0])))), (((((/* implicit */_Bool) max((var_0), (var_9)))) ? (((/* implicit */long long int) arr_5 [i_1 + 3] [i_1 - 1])) : (-120503156756960282LL)))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((min((((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (var_11)))))) + (((arr_0 [i_1] [i_0]) - (max((arr_0 [i_0] [(signed char)4]), (((/* implicit */unsigned long long int) 9223372036854775789LL)))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [i_1] [9U] [5])), (((((/* implicit */_Bool) var_1)) ? ((~(9223372036854775789LL))) : (((/* implicit */long long int) arr_9 [i_1] [i_1] [(_Bool)1] [i_3 - 1]))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_0]), (1897448822))))))))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [(_Bool)0])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned char) 68156472))) : (arr_5 [i_0] [i_1])))) > (max((((/* implicit */long long int) arr_7 [10] [i_1] [i_3 + 4] [i_1 + 3])), (max((((/* implicit */long long int) (signed char)-35)), (arr_3 [i_3] [(signed char)0]))))))))));
                                var_24 = (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (2942375707217919039ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [4] [i_1] [i_1] [i_0])))))) || (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1]))))));
                                var_25 = max((arr_0 [i_4] [i_4]), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_10 [i_0] [(short)0] [i_2])), ((~(arr_4 [i_1])))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_3 [i_1] [i_1]))), (((/* implicit */long long int) arr_10 [i_0] [i_1 + 1] [i_1]))));
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) -9223372036854775806LL))));
                                var_28 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((((var_15) + (9223372036854775807LL))) << (((((((/* implicit */int) var_0)) + (18877))) - (55))))) : (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), (arr_8 [i_1])))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_29 = ((arr_6 [i_1] [i_3 + 2] [i_2]) ? (((/* implicit */int) arr_6 [i_1] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) arr_6 [i_1] [i_3 + 1] [i_3 + 4])));
                                var_30 = (~(((/* implicit */int) arr_12 [i_3 + 2] [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 1] [i_0])));
                            }
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [(unsigned char)13])) ? (max((((/* implicit */unsigned long long int) 1654305102)), (0ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) arr_7 [i_1] [(_Bool)1] [i_1] [i_1])), (arr_11 [i_0] [i_0] [i_1] [i_3])))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */unsigned short) (+(((unsigned int) ((arr_19 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1 + 3]) - (((/* implicit */int) (short)19902)))))));
            }
        } 
    } 
    var_33 = ((/* implicit */short) max((var_33), (var_9)));
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1571)) ? (12230579630470951663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))));
}
