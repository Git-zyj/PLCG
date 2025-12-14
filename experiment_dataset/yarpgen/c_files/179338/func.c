/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179338
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
    var_15 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */int) (unsigned char)224)) * (((/* implicit */int) arr_5 [i_1 + 1]))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) (unsigned char)115);
                                var_18 = ((/* implicit */unsigned char) (unsigned short)5073);
                                var_19 = ((/* implicit */int) min((var_19), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_1]))))), (((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2 - 2])) : (var_1)))))));
                                var_20 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_4] [i_2] [i_2] [i_3]))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 3] [i_1] [i_0])) ? (arr_12 [10] [i_1 + 3] [i_0] [i_0]) : (arr_12 [i_0] [i_1 - 1] [i_0] [i_0])))) && ((!(((/* implicit */_Bool) (unsigned short)5063))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_15 [i_0] [i_0]))));
            }
        } 
    } 
}
