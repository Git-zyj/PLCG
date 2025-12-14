/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139711
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
    var_16 = ((/* implicit */unsigned long long int) var_0);
    var_17 = ((((/* implicit */_Bool) var_9)) ? (((((var_2) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) (signed char)-38)))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (0ULL))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_2)), (var_9))))) ^ (((unsigned long long int) var_12)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 ^= ((/* implicit */unsigned char) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (0ULL))), (((/* implicit */unsigned long long int) min((arr_3 [i_1]), (((/* implicit */short) arr_1 [i_0])))))))));
                arr_6 [13] [i_0] [i_1] = ((/* implicit */long long int) arr_2 [i_0]);
                var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0]))))) - (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (min((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_5))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2])) == (((/* implicit */int) arr_3 [i_3]))))) : ((-(((/* implicit */int) arr_3 [i_2]))))));
                    var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((short) arr_11 [i_4 - 1] [7U] [i_4 + 1]))) : (((/* implicit */int) (signed char)17))));
                }
            } 
        } 
    } 
}
