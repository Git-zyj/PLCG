/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127750
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
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) var_2)))) & ((~(((/* implicit */int) var_9))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(short)7] [i_1] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((int) var_6))) + (min((((/* implicit */unsigned int) var_5)), (6U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((unsigned int) 9U)) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_4 - 1] [i_3 - 1] [(unsigned short)16] [i_0 - 2])))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967270U)) ? (arr_11 [i_0 - 2] [i_1 + 2] [i_2] [i_1]) : (((/* implicit */int) arr_3 [i_0 - 1] [(unsigned short)11] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)156), (arr_3 [i_2 + 2] [i_0] [i_0]))))))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
