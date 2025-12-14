/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179072
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 *= ((((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2] [i_0 + 2])) ? (arr_5 [i_0] [i_0 - 1] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) >> (((min((min((var_3), (arr_4 [i_0] [i_0] [i_0 + 3] [(signed char)10]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)32))))))) - (2628061944391059905ULL))));
                    var_16 -= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 0ULL))))), ((~(arr_3 [(signed char)16]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_17 += max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [10ULL])), (arr_5 [i_0] [i_2 - 1] [i_4]));
                                arr_13 [14ULL] [i_3] [i_2] [i_3] [16ULL] [i_1] |= arr_12 [i_0] [i_0 + 3] [i_0 + 2] [i_0] [i_0 + 2];
                                arr_14 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(arr_11 [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(0ULL)))) ? (9223372002495037440ULL) : (var_14))))));
    var_19 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(var_4)))))))));
}
