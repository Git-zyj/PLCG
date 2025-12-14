/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130717
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
    var_13 = ((/* implicit */int) (-((-(min((var_3), (((/* implicit */unsigned long long int) var_11))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */int) ((short) min((max((((/* implicit */unsigned long long int) arr_5 [i_1] [8U] [i_2])), (var_3))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_0])), (arr_3 [i_2])))))));
                    var_15 = ((/* implicit */unsigned char) (((-(arr_3 [i_0 - 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_0 - 1]))))));
                    var_16 = ((/* implicit */unsigned int) ((int) (+(((((/* implicit */int) arr_4 [i_2])) / (var_0))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(var_0)))) ^ (min((min((var_3), (var_3))), (((/* implicit */unsigned long long int) var_9))))));
}
