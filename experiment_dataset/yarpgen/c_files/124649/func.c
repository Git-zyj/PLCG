/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124649
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) min((arr_0 [i_0]), (var_6)))), (min((((/* implicit */long long int) arr_3 [i_0])), (var_9))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned short) arr_0 [i_1])), (var_4))), (min((((/* implicit */unsigned short) (unsigned char)211)), ((unsigned short)30168))))))));
                var_13 = min((min((min((arr_2 [i_0]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (0U)))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned short) (short)22477)), ((unsigned short)26100))), (((/* implicit */unsigned short) min((var_10), (arr_0 [i_1]))))))));
                arr_5 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)207)), (5600682960940949187LL)));
                arr_6 [i_0] |= ((/* implicit */short) min((min((min((((/* implicit */long long int) (unsigned short)4088)), (arr_1 [i_0] [i_1]))), (min((((/* implicit */long long int) (unsigned char)190)), (35184372088831LL))))), (min((min((899253127443482097LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) min(((short)-1), ((short)-15252))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((min((((/* implicit */long long int) min(((unsigned short)52913), (var_3)))), (min((((/* implicit */long long int) (short)127)), (-5600682960940949187LL))))), (min((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) var_3))))), (min((5600682960940949187LL), (((/* implicit */long long int) var_7)))))))))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((min((((/* implicit */unsigned int) min((var_5), (var_4)))), (min((((/* implicit */unsigned int) var_2)), (4294967295U))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) min(((short)(-32767 - 1)), (((/* implicit */short) var_2))))), (min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)2040)))))))))));
}
