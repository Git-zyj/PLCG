/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182307
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
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) var_10);
        arr_4 [i_0] [i_0] = ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_3 [i_0 + 2])))) - (min((((/* implicit */int) (_Bool)1)), (1529728638))));
        var_15 = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0] [i_0 - 1])), (var_13)))) && (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_16 ^= ((/* implicit */long long int) arr_7 [i_3]);
                            arr_14 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) -1357278021))) ? (((/* implicit */int) max((arr_9 [i_4] [i_2 + 2] [i_3]), ((unsigned char)240)))) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))));
                            var_17 *= max((((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_4] [i_1] [i_1])), (-243330595)))) ? (((arr_11 [i_3] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_1] [i_2 - 1] [i_1])))))), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_6))))) >> (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_6 [i_1]) : (((/* implicit */int) arr_9 [i_1] [(signed char)18] [i_4])))) + (219277492))))));
                            var_18 *= ((/* implicit */signed char) ((int) var_7));
                            var_19 = ((/* implicit */_Bool) -4537514039387244828LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_6 [i_1])), (min((9223372036854775807LL), (((/* implicit */long long int) ((unsigned char) (-2147483647 - 1))))))));
            }
        } 
    } 
    var_21 = (_Bool)1;
}
