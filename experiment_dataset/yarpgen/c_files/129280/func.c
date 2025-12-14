/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129280
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
    var_13 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */int) (unsigned short)27287))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))))), (((((/* implicit */unsigned int) min((arr_0 [i_0]), (((/* implicit */int) var_2))))) ^ (min((var_8), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (((+(arr_5 [i_1]))) + (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) var_0)))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((unsigned long long int) var_9)) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned char) arr_1 [i_1] [i_1])), (var_1))), (((/* implicit */unsigned char) arr_1 [i_1] [i_1]))))))));
        var_17 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_11)) : (arr_0 [i_1])))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 7; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((long long int) (((!(((/* implicit */_Bool) arr_0 [i_1])))) && (((/* implicit */_Bool) ((unsigned int) var_1))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned short) (signed char)-25);
                                var_20 = ((/* implicit */long long int) min((var_20), (((long long int) arr_3 [i_1]))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((signed char) arr_15 [i_1] [i_1] [i_1] [i_3])))));
                                var_22 &= ((/* implicit */int) arr_16 [i_1] [i_2] [i_3] [5ULL]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) ((1318177511) != (((/* implicit */int) var_0))));
}
