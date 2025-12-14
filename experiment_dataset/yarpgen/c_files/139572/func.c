/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139572
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
    var_17 ^= 18446744073709551615ULL;
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((unsigned long long int) var_15)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) max((max((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (17365043596880569939ULL))))), ((-(18446744073709551613ULL)))));
                var_20 = ((/* implicit */unsigned char) var_4);
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max(((-(min((((/* implicit */unsigned long long int) arr_0 [16U])), (var_3))))), (min((((/* implicit */unsigned long long int) arr_2 [i_0] [(_Bool)1] [i_1])), (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])), (var_11))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_8);
    var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) var_13)));
}
