/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108031
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((((/* implicit */int) (short)-32765)), (-33554432))))));
    var_12 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned long long int) min((((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))))), (((/* implicit */unsigned int) max((((/* implicit */int) (short)(-32767 - 1))), (33554432))))))) : (18446744073709551615ULL)));
                var_14 &= ((/* implicit */long long int) max((max((max((11ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) (signed char)28)))), (((/* implicit */unsigned long long int) var_5))));
                var_15 = ((/* implicit */unsigned short) 0LL);
                var_16 = ((/* implicit */int) arr_0 [i_1]);
                arr_4 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-105))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-31)), (var_10)))) : (((/* implicit */int) var_6))));
    var_18 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned char)0)))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
}
