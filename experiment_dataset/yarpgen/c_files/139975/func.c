/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139975
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
    var_10 = ((/* implicit */unsigned short) max((max((max((((/* implicit */unsigned long long int) var_5)), (var_9))), (((/* implicit */unsigned long long int) max((var_3), (var_6)))))), (max((((/* implicit */unsigned long long int) max(((signed char)-76), ((signed char)66)))), (max((((/* implicit */unsigned long long int) var_4)), (2ULL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned short) max((arr_0 [i_1] [i_0]), (arr_1 [i_0])))), (max((((/* implicit */unsigned short) (short)-29244)), ((unsigned short)0)))))), (max((((/* implicit */long long int) max(((signed char)127), (((/* implicit */signed char) var_1))))), (max((arr_4 [i_0]), (((/* implicit */long long int) var_3))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) max(((short)-29244), (((/* implicit */short) arr_0 [i_0] [i_0]))))), (max((var_4), (((/* implicit */int) var_3))))))), (max((((/* implicit */unsigned int) max((((/* implicit */short) arr_5 [i_0])), ((short)127)))), (max((((/* implicit */unsigned int) (unsigned short)65535)), (var_7)))))));
                var_11 = ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) (short)-29244)), (var_9))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) arr_2 [i_1]))))))), (((/* implicit */unsigned long long int) max((max((arr_3 [i_0] [i_0]), (var_0))), (max((((/* implicit */int) arr_5 [i_1])), (arr_3 [i_0] [i_0]))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */int) max((arr_1 [i_1]), (var_3)))), (max((2147483647), (var_2))))), (max((((/* implicit */int) max(((signed char)(-127 - 1)), (var_3)))), (max((((/* implicit */int) arr_0 [i_0] [i_1])), (var_4)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((max((((/* implicit */int) (signed char)127)), (var_5))), (max((var_4), (((/* implicit */int) (signed char)-28))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_8)))), (max((((/* implicit */unsigned long long int) var_1)), (var_9)))))));
    var_13 ^= ((/* implicit */signed char) max((max((max((var_9), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_8)))))), (max((max((((/* implicit */unsigned long long int) var_7)), (var_9))), (((/* implicit */unsigned long long int) max((var_4), (var_5))))))));
}
