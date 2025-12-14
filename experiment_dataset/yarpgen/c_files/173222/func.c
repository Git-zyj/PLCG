/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173222
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
    var_20 &= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) != (2331351965U))) ? (max((((((/* implicit */_Bool) 3859498122U)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (unsigned char)216)))))) : (((/* implicit */int) ((((/* implicit */int) var_17)) == (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)0))))))))));
    var_21 = (~((-(((/* implicit */int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (short)5870)))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) arr_0 [i_0 - 2]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) 1342361506U);
                            var_23 ^= arr_3 [i_3] [(_Bool)1] [i_2];
                            arr_13 [i_0 - 3] [i_0 - 3] [i_0 - 3] &= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((+(arr_3 [i_0 - 3] [i_0 + 3] [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0 + 2] [(unsigned char)8] [i_0])) ? (var_18) : (var_11)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 3; i_5 < 8; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_20 [i_1] [i_6 - 1] [i_6] [i_6 + 1] [i_6]), (arr_12 [i_1] [i_6 + 2] [i_6 + 2] [i_1] [i_6] [i_6 - 1]))))));
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((max((((/* implicit */long long int) (!((_Bool)1)))), (arr_22 [i_0 - 1] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) var_17)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 8452421253642207313ULL)) ? (((/* implicit */long long int) var_18)) : (var_13)))) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
}
