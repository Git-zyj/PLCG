/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123894
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
    var_15 = ((/* implicit */long long int) max((var_15), (((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) / (var_10)))), (max((((/* implicit */long long int) var_7)), (1733613017646713866LL))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_12) : (var_13))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_16 = 3558353833U;
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) && ((_Bool)0))))));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)126))));
                        var_19 ^= ((/* implicit */unsigned char) (~(arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_2 + 1] [i_3] [i_3])));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) 1766496973U);
                            var_21 *= ((/* implicit */unsigned int) ((arr_8 [i_0] [i_3] [i_0 + 2] [i_0 + 2] [i_0 - 2]) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) var_0))));
                            var_22 ^= ((long long int) arr_1 [i_0] [i_0 - 2]);
                        }
                        arr_12 [i_0 - 2] [i_1 + 1] [i_1] [i_0 - 2] [i_1] = ((/* implicit */unsigned int) (!(arr_8 [i_2 + 2] [i_1] [i_2 + 2] [i_2 + 2] [i_2 + 1])));
                    }
                    var_23 = ((/* implicit */unsigned int) ((short) var_4));
                }
            } 
        } 
    }
    var_24 *= ((/* implicit */short) min((max((((/* implicit */long long int) var_9)), ((~(var_11))))), (var_5)));
}
