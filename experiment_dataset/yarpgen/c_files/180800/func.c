/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180800
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) min((min((max((var_10), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min((var_0), ((_Bool)0)))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_13)), (var_1))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (2769237215U)))))))));
                arr_5 [i_1] = ((/* implicit */short) max((((/* implicit */long long int) min(((short)31428), (min((((/* implicit */short) (_Bool)1)), ((short)8948)))))), (max((min((((/* implicit */long long int) (unsigned char)28)), (arr_2 [i_0 - 1]))), (min((arr_0 [i_0]), (var_12)))))));
                arr_6 [12ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((max((max((var_1), (((/* implicit */long long int) (unsigned char)227)))), (((/* implicit */long long int) min(((short)31428), (((/* implicit */short) arr_1 [(_Bool)1]))))))), (max((((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0])), (arr_3 [(_Bool)1] [i_1 + 2] [i_1])))), (max((arr_0 [i_1]), (((/* implicit */long long int) var_9))))))));
                var_18 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) min((((/* implicit */short) (unsigned char)18)), (var_14)))), (max((((/* implicit */long long int) (short)-31429)), (arr_2 [(_Bool)1]))))), (((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [11])), (var_5))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_0] [8] [12U])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_14), (((/* implicit */short) var_7))))), (max((((/* implicit */int) var_4)), (-2001955031)))))), (max((((/* implicit */unsigned long long int) min(((unsigned char)84), (((/* implicit */unsigned char) var_16))))), (max((25165824ULL), (((/* implicit */unsigned long long int) var_6))))))));
}
