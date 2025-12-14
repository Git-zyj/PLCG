/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148072
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (min(((unsigned char)255), (((/* implicit */unsigned char) var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((max((((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) var_11)))), (((((/* implicit */int) var_13)) == (((/* implicit */int) var_1)))))) ? (min((10328317792013944497ULL), (((/* implicit */unsigned long long int) ((var_15) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_0])), (arr_1 [i_0] [i_1]))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_4))))))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1] [i_0] [0ULL]))))), (min((var_6), (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))));
            }
        } 
    } 
}
