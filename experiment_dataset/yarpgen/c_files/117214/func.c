/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117214
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    var_15 = arr_7 [i_1];
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) arr_12 [i_1] [i_1]);
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (min((arr_13 [i_3 + 1] [i_1] [i_2] [i_1] [i_2 - 2]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_2 + 3])) + (((/* implicit */int) (_Bool)1)))))));
                                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_7) : (((/* implicit */int) (_Bool)1))))), (arr_11 [i_0] [i_0] [i_0] [i_0] [(short)9]))))));
                                arr_16 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) max((-1626782594), (((/* implicit */int) (_Bool)1))))), (arr_12 [i_1] [i_1])));
                                arr_17 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_0]);
                            }
                        } 
                    } 
                    var_18 = (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 2])) ? (arr_10 [i_2 + 2] [i_2 + 2] [i_2] [(signed char)5]) : (arr_10 [i_2 + 3] [(signed char)2] [i_2] [5ULL])))) : (max((arr_13 [i_0] [i_1] [i_1] [i_2 + 3] [1]), (arr_13 [i_0] [i_1] [i_1] [i_2 + 1] [i_0]))));
                    var_19 += var_10;
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_5)) : (296370581U)))) ? ((+(var_11))) : (max((((/* implicit */unsigned long long int) var_2)), (var_4)))))));
}
