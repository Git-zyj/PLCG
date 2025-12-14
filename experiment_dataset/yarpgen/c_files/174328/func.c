/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174328
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
    var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) 24576U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9452769125447440694ULL))), (((/* implicit */unsigned long long int) -1959833317))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_14 *= ((/* implicit */signed char) arr_3 [i_0] [i_1] [i_0]);
                            arr_9 [(short)22] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])))) ? (((var_6) / (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) 1959833317))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [21] [4LL] [i_0])) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3] [3LL])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6220664314163719671LL)) ? (arr_8 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) -6220664314163719674LL)))))))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2] [i_1] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) -40117402))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_0] [19ULL] = ((/* implicit */unsigned short) arr_14 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1]);
                            var_16 = ((/* implicit */short) var_4);
                            var_17 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((var_4) + (9223372036854775807LL))) >> ((((((!(((/* implicit */_Bool) 18223852809735796859ULL)))) ? (((/* implicit */unsigned long long int) (+(arr_14 [i_0] [i_0] [14U] [i_1])))) : (((((/* implicit */_Bool) arr_13 [0U] [0U])) ? (arr_8 [i_0] [15] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) - (4680741450116136180ULL)))))) : (((/* implicit */unsigned short) ((((var_4) + (9223372036854775807LL))) >> ((((((((!(((/* implicit */_Bool) 18223852809735796859ULL)))) ? (((/* implicit */unsigned long long int) (+(arr_14 [i_0] [i_0] [14U] [i_1])))) : (((((/* implicit */_Bool) arr_13 [0U] [0U])) ? (arr_8 [i_0] [15] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) - (4680741450116136180ULL))) - (14902969811694688916ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 ^= ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_9)) ? (var_1) : (1959833316))), (((/* implicit */int) ((((/* implicit */_Bool) -1959833317)) || (((/* implicit */_Bool) -4056864825660224071LL))))))), (1056853649)));
    var_19 = ((/* implicit */unsigned long long int) var_4);
    var_20 = ((/* implicit */_Bool) var_7);
}
