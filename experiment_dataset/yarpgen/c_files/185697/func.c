/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185697
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
    var_20 = (+(((((/* implicit */_Bool) (~(var_16)))) ? ((+(((/* implicit */int) var_18)))) : (((/* implicit */int) var_17)))));
    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned char) var_18)), (var_13)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_9 [i_3] [i_1] [23LL] [i_4 - 1]))));
                            var_23 = ((/* implicit */unsigned char) ((var_12) ? (((((/* implicit */int) (unsigned short)43626)) + (((/* implicit */int) (signed char)73)))) : ((-(((/* implicit */int) (signed char)20))))));
                        }
                        arr_13 [i_0] [(short)3] [i_3 + 3] = ((/* implicit */_Bool) var_4);
                        var_24 = ((/* implicit */unsigned int) min((var_24), (max((((/* implicit */unsigned int) (unsigned short)16383)), (min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16393)) && (((/* implicit */_Bool) var_9)))))))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) (unsigned char)216)) - (arr_0 [i_0]))) : (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)17])))))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_6))));
                    var_27 = ((/* implicit */long long int) 0U);
                }
            } 
        } 
    } 
}
