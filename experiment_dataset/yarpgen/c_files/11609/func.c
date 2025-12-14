/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11609
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
    var_20 = ((/* implicit */unsigned char) max((min((min((var_19), (((/* implicit */unsigned long long int) (unsigned char)207)))), (min((var_5), (((/* implicit */unsigned long long int) (unsigned char)39)))))), (((/* implicit */unsigned long long int) max((max((var_15), (((/* implicit */unsigned int) (unsigned char)207)))), (((/* implicit */unsigned int) min((((/* implicit */int) var_18)), (var_12)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((max((max((((/* implicit */unsigned long long int) (unsigned short)8115)), (var_8))), (((/* implicit */unsigned long long int) max((arr_0 [i_1]), ((unsigned short)65517)))))), (((/* implicit */unsigned long long int) max((max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_1 [(signed char)2])))), (min((arr_2 [i_1] [1] [(unsigned short)10]), (((/* implicit */long long int) (unsigned short)40376)))))))));
                arr_4 [i_0] [(unsigned short)2] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max(((_Bool)1), (arr_3 [(unsigned short)11] [1LL])))), (max((var_5), (var_19))))), (min((((/* implicit */unsigned long long int) min((arr_2 [i_0] [3ULL] [i_0 - 2]), (((/* implicit */long long int) arr_0 [i_0]))))), (max((var_9), (((/* implicit */unsigned long long int) var_13))))))));
                arr_5 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max((max((arr_1 [i_1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1])))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)57431))))))), (max((max((((/* implicit */long long int) (unsigned short)57414)), (var_1))), (max((((/* implicit */long long int) (unsigned short)6091)), (arr_2 [i_1] [6] [6])))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((min((max((((/* implicit */unsigned long long int) arr_3 [3LL] [i_1])), (var_9))), (max((var_6), (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_3 [i_1 - 1] [i_1 - 1])), (arr_2 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) max(((unsigned short)59435), (((/* implicit */unsigned short) var_3)))))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) min((max((max((((/* implicit */unsigned long long int) var_18)), (var_6))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (var_12)))))), (min((max((var_9), (((/* implicit */unsigned long long int) (unsigned short)19702)))), (((/* implicit */unsigned long long int) max((var_2), (2294148289U))))))));
}
