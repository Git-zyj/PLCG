/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134033
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
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) max(((short)4095), (((/* implicit */short) arr_5 [i_1] [i_0] [3] [i_0]))))), (min((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_1]))))), (max((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) arr_2 [i_1] [i_0]))))), (min((((/* implicit */unsigned long long int) (_Bool)0)), (10767241692551420965ULL)))))));
                    var_14 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((min((var_5), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)0))))))), (min((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_7)), (var_1))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) min((min((max((6241103452563376176LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-6447)), (2379690402U)))))), (min((((/* implicit */long long int) min(((signed char)-12), ((signed char)-12)))), (min((var_6), (((/* implicit */long long int) 1915276894U))))))));
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((min((var_10), (((/* implicit */int) var_11)))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_3))))))), (min((min((((/* implicit */unsigned int) var_12)), (var_0))), (max((((/* implicit */unsigned int) var_11)), (var_8)))))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) min((max((max((7555749142647403666ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) min((-182719426), (((/* implicit */int) (unsigned short)36966))))))), (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (signed char)-12)), (var_6))), (((/* implicit */long long int) min((var_2), (var_4))))))))))));
}
