/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117461
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((signed char) (+(1793658860742371542ULL))));
                                var_16 = ((/* implicit */unsigned long long int) arr_5 [11] [i_3 - 1] [i_4]);
                                arr_18 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3 + 3] [12ULL] = max((max(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) (-(arr_17 [i_0] [i_1] [i_2] [i_3] [i_4])))))), (((unsigned long long int) min((var_12), (((/* implicit */unsigned int) (unsigned short)34287))))));
                                arr_19 [i_0] [i_1 + 1] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) (-(arr_6 [i_0] [i_1])));
                            }
                        } 
                    } 
                    arr_20 [i_2] [i_1 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [(signed char)11] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_1] [9ULL]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_11 [i_2] [12] [i_1 - 1] [i_1 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7059)))))))))) : (((long long int) arr_0 [i_2]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_14);
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-8)) ? (2317355917U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) : (5502549439281057770ULL)))));
}
