/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129876
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
    var_12 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 *= ((/* implicit */signed char) arr_3 [i_0] [i_1] [i_1]);
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */short) (!(((((/* implicit */_Bool) ((unsigned char) 18446744073709551615ULL))) && ((!(((/* implicit */_Bool) 4294967295U))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_10)))))) == (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3]))));
                            var_16 = ((/* implicit */_Bool) 1879048192);
                        }
                    }
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) (short)-8)))), (((/* implicit */int) arr_0 [i_1]))))) > (2251799813685247LL)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((unsigned long long int) var_3)) < (((/* implicit */unsigned long long int) ((var_4) * (((/* implicit */long long int) ((/* implicit */int) var_10))))))))), ((unsigned char)124)));
}
