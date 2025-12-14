/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167341
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(var_7))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 0ULL)))) == (18446744073709551615ULL)));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_4))));
                                arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned char)21))));
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */int) ((unsigned int) var_11));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                    arr_17 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (((-(arr_5 [i_1 + 1] [i_0 + 1] [i_0]))) == (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_9))) > ((+(arr_11 [(short)14] [i_1] [i_2] [(short)14] [i_1]))))))));
                    arr_18 [(unsigned char)5] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1]))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */int) (unsigned char)16)))))), (((/* implicit */int) ((((((/* implicit */int) (unsigned char)235)) >> (((/* implicit */int) (_Bool)1)))) > ((-(((/* implicit */int) (unsigned char)235)))))))));
}
