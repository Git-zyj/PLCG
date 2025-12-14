/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106823
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) (unsigned short)42209))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (+(max((((/* implicit */int) max((var_9), (((/* implicit */short) arr_5 [i_4]))))), (((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (2147483630))))))))));
                                arr_11 [i_1] [i_1] [(signed char)8] [i_1] [i_1] [i_1] [i_1] = ((short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))));
                                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42209)) ? (((unsigned long long int) arr_0 [i_4] [i_3])) : (((/* implicit */unsigned long long int) min(((-(8070450532247928832LL))), (((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */int) var_4))))))))));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) (short)-13399))))))) ? (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_3] [i_4])))), (((((/* implicit */_Bool) arr_8 [i_4] [(_Bool)1] [i_1] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [6LL] [i_3])) : (((/* implicit */int) var_4))))))) : ((((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_4 [i_0] [i_0] [i_2] [i_2]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        arr_16 [i_0] [i_0 + 1] [i_0 + 3] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0 + 1])) * (((/* implicit */int) arr_5 [i_0 + 1]))))) - (((unsigned long long int) var_7))));
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)126)), ((unsigned char)220)))) ? (((var_1) - (((arr_7 [i_0] [i_0 + 3] [(_Bool)1]) - (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 1])) < (((/* implicit */int) arr_3 [i_0 + 2] [i_5])))))));
                        var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(6851371321086708171ULL))), (11042050112810525990ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (134217727ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (134217727ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-13401)) ^ (((/* implicit */int) (unsigned short)40665)))))));
                        var_16 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_14 [2ULL])))) ? (((/* implicit */int) min((arr_14 [(signed char)6]), (arr_14 [8U])))) : (min((var_1), (((/* implicit */int) arr_14 [(signed char)6]))))));
                    }
                    var_17 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)136)), (max((6271903867615052127ULL), (12174840206094499479ULL)))));
                    var_18 += ((/* implicit */unsigned long long int) var_7);
                    var_19 |= ((/* implicit */signed char) arr_12 [12ULL] [i_1] [12ULL]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_4);
}
