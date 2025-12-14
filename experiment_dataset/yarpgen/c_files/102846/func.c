/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102846
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))) - ((-(var_8)))));
                                var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_4] [i_1] [i_0])))))))), (((((/* implicit */long long int) var_9)) + (arr_1 [i_0])))));
                                var_15 = ((min((arr_6 [i_0] [i_0] [i_2] [i_4]), (arr_6 [i_0] [i_0] [i_3] [i_4]))) ^ (((/* implicit */unsigned long long int) min((-1313720199), (((/* implicit */int) ((((/* implicit */unsigned long long int) -1313720199)) < (9111771892733739227ULL))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_8))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_0)) ? (min((-1313720199), (-1313720192))) : (((/* implicit */int) min((var_6), (var_6)))))));
}
