/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122041
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) min((var_16), (((/* implicit */short) var_1))))), (max((((/* implicit */unsigned long long int) (signed char)7)), (var_15))))), (((/* implicit */unsigned long long int) min((min((var_8), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned short) (short)29850)))))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((min((arr_4 [i_2] [i_1] [i_0]), (((/* implicit */long long int) arr_6 [i_0] [6LL] [i_2] [i_2])))), (((/* implicit */long long int) min((((/* implicit */short) arr_7 [i_0])), ((short)-29850))))))), (min((min((((/* implicit */unsigned long long int) var_1)), (var_15))), (((/* implicit */unsigned long long int) max(((short)-28691), ((short)-29850)))))))))));
                    var_20 = min((min((min((((/* implicit */short) (signed char)20)), ((short)29850))), (max((((/* implicit */short) (_Bool)0)), ((short)-29850))))), (((/* implicit */short) (signed char)58)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((max(((short)-1), (var_3))), (min((var_16), ((short)-31799)))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-4708167031213727672LL)))), (max((var_15), (((/* implicit */unsigned long long int) var_13)))))))))));
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-29855)), (1349331045)))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_0)))), (max((2021443292393712525ULL), (((/* implicit */unsigned long long int) var_10))))))));
}
