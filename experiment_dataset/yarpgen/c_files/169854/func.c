/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169854
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) -1501733262))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_3] [i_1] [i_4] = ((unsigned long long int) arr_13 [i_0] [i_0] [i_0]);
                                arr_15 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((66977792) | (66977792)))) || (((/* implicit */_Bool) max((max((arr_1 [i_1] [12]), (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))), (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) arr_6 [i_0])))))))));
                                arr_16 [i_4] = ((/* implicit */int) max(((((-(var_2))) * (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))))), (((unsigned long long int) ((int) var_2)))));
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) | (var_11)))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0])) != (var_10))))) : (max((arr_0 [i_4]), (var_8))))) : (((12710782691833407937ULL) & (var_11))));
                            }
                        } 
                    } 
                    arr_17 [i_0] = min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), ((-(18016449593121570033ULL))));
                    arr_18 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) ((max((arr_0 [i_0]), (arr_0 [i_2]))) * (((((/* implicit */_Bool) -1112751136)) ? (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_2] [i_2] [i_0])) : (arr_0 [i_1])))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))), (arr_5 [i_2] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    var_17 = var_9;
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_0))))))) == (-66977792)));
}
