/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141304
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
    var_12 = ((/* implicit */unsigned int) -1LL);
    var_13 = ((/* implicit */unsigned long long int) ((var_3) / (((min((var_3), (((/* implicit */long long int) var_0)))) / (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (4294967282U))))))));
    var_14 = ((/* implicit */unsigned long long int) min((-1965157927), (((/* implicit */int) (unsigned short)1624))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) arr_4 [i_0] [i_0]);
                arr_5 [i_0] [i_1] [i_0 + 1] = ((/* implicit */int) var_10);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) min((((min((((/* implicit */unsigned int) arr_0 [i_0])), (13U))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))))), (((/* implicit */unsigned int) var_2))));
                arr_7 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0])), (var_11)));
            }
        } 
    } 
}
