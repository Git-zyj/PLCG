/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140278
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
    var_14 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                    arr_9 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((4278190080U) * (((/* implicit */unsigned int) -86840035))))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 1] [i_1 + 1] [i_1])) ^ (var_4)))));
                    var_16 = ((/* implicit */short) min((((arr_1 [i_1 + 2] [i_1 + 1]) / (arr_1 [i_1 + 2] [i_1 + 1]))), (((arr_1 [i_1 + 2] [i_1 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22132)))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) (_Bool)1)));
                    arr_12 [i_0] [i_1] [8LL] = ((/* implicit */unsigned short) ((long long int) arr_4 [i_1 - 1] [i_1]));
                    var_18 = (+(((/* implicit */int) (unsigned short)65524)));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                arr_18 [(short)19] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [i_1 - 1])) != (arr_8 [i_0] [i_1] [i_1] [i_0])));
                                arr_19 [i_1] [i_1] [i_3] [i_4] [i_5] [i_4] = ((arr_3 [i_0] [i_0]) | (arr_3 [i_3] [i_1 + 1]));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [(short)12] [(short)20] [i_0] [(short)12])) + (arr_14 [i_0] [6U] [i_0] [i_0] [8] [i_0]))))))));
                var_20 *= ((/* implicit */long long int) ((arr_17 [i_0] [i_1 - 1] [i_1] [6LL] [i_1 - 1] [i_1 - 1]) && (((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_0])))));
                arr_20 [i_1] [5ULL] [i_1] = ((/* implicit */long long int) (~((+(-86840053)))));
                arr_21 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65526)) || (((/* implicit */_Bool) (unsigned short)12)))) || (((/* implicit */_Bool) ((unsigned long long int) -86840035)))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
    var_22 = ((/* implicit */unsigned long long int) var_5);
}
