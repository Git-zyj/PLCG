/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107294
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
    var_18 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned char) arr_8 [i_2 + 4] [i_2 + 2]))));
                                var_20 = ((/* implicit */unsigned char) var_4);
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned char) var_14);
                                arr_15 [i_2] [i_0] [i_0] [i_3] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775793LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_0] [i_2 + 2])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((max((var_16), (((arr_9 [i_0] [i_1] [i_0]) << (((/* implicit */int) var_3)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_9 [i_0] [i_1] [i_2 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_2]))))))))));
                    arr_16 [i_0] = ((/* implicit */_Bool) min((max((arr_7 [i_1] [i_0] [i_1] [i_1 - 1]), (((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_0] [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0]))) / ((~(((/* implicit */int) (short)8191)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) != (((/* implicit */int) var_10))));
    var_23 = var_2;
}
