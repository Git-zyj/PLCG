/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139316
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_8)))) ? (var_4) : (((((/* implicit */unsigned int) var_8)) ^ (var_5)))))) ? (var_4) : (((/* implicit */unsigned int) var_3))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) min((var_13), ((+(((/* implicit */int) var_10))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((((var_2) << (((((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_2] [i_4 - 4] [i_4] [i_4])) + (28670))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1])) >> (((((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_1] [i_4 - 2] [i_4] [i_4])) + (28631))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] = ((/* implicit */int) ((((unsigned long long int) var_1)) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (var_8) : ((+(((/* implicit */int) var_11)))))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_1] [i_1] [i_0]))) : (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) var_3)) : (var_1)))));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) max((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) var_10))))))), ((+(((unsigned int) arr_4 [i_2] [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 3; i_5 < 10; i_5 += 2) 
    {
        var_16 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_5]))) > (2540362251525580421ULL)));
        arr_15 [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((4943431579372646968ULL) < (((/* implicit */unsigned long long int) 453355901))))), (((-2147483647) | (-458079917)))))), ((+(((((/* implicit */_Bool) 453355901)) ? (5771098962133984736ULL) : (((/* implicit */unsigned long long int) -453355876))))))));
    }
}
