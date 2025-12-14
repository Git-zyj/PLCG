/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125881
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
    for (short i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) & (arr_3 [i_1 + 2] [i_0 + 2] [i_0 + 2])));
                var_12 &= (-(((/* implicit */int) (signed char)-99)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */int) (signed char)-99);
                                arr_15 [i_0 + 2] [i_0] = min((min((arr_3 [i_0] [i_1 + 2] [i_1 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 - 1]))) : (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) var_11)))))));
                                arr_16 [i_0] [i_0] [i_0] = (-((~(((/* implicit */int) (signed char)16)))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */signed char) var_4);
                arr_17 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)16)))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6697))) ^ (var_3)))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_11);
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_7))));
}
