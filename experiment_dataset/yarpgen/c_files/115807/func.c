/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115807
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) 538738481)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)23))));
    var_12 = ((/* implicit */long long int) max(((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (701296914U))))), (701296916U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) var_10))))))));
                    arr_6 [i_0] [i_1] [i_2 + 2] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3593670382U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22333))));
                    arr_7 [i_0] [i_0] [i_2 + 2] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_10))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_2 - 2] [i_3 + 2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (2147483647)))) ? (((arr_5 [i_0] [i_4] [i_2 + 1] [i_3 + 1]) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98)))));
                                arr_16 [i_0] = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                }
                var_15 = ((/* implicit */int) ((short) 11944397911910285747ULL));
            }
        } 
    } 
}
