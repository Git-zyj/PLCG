/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17644
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (-111948621) : (-2147483626)));
        arr_3 [i_0] = ((/* implicit */signed char) min(((-2147483647 - 1)), ((-(max(((-2147483647 - 1)), (-2147483626)))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (signed char i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            {
                var_16 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((unsigned int) 1778224012)) : (((/* implicit */unsigned int) 2147483647))))));
                arr_12 [i_2] [i_1] = ((/* implicit */long long int) (((-(5417405826943292007ULL))) + (((/* implicit */unsigned long long int) 1778224024))));
                var_17 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (_Bool)1)))));
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((short) 9223372036854775807LL)))));
                arr_13 [i_1] = ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */long long int) 2147483647)) : (6408709423503156746LL));
            }
        } 
    } 
    var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (2147483627) : (((/* implicit */int) var_5))));
}
