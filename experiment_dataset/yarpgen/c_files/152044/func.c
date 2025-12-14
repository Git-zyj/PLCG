/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152044
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 - 1])) < (max((var_16), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) var_13))))))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */int) min(((_Bool)1), ((_Bool)1)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((-551643279) * ((-(((/* implicit */int) (_Bool)1))))));
    var_19 += ((/* implicit */unsigned int) min((max((max((var_16), (var_16))), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) var_11))))))), (((/* implicit */long long int) ((int) max((var_14), (var_14)))))));
}
