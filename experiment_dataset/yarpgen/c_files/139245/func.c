/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139245
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
    var_20 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */int) var_6)), (arr_0 [i_3])))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-3432)) * (((/* implicit */int) (unsigned char)163)))))));
                                var_22 = arr_10 [i_2 - 1] [i_2 - 1] [0U];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_19 [i_6] [i_5] [i_1] [i_0] [i_1] [i_0] [i_0] = var_15;
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((int) max((arr_15 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1]), (arr_9 [i_1] [i_6] [i_6] [i_6 + 1] [i_6 + 1]))));
                                arr_21 [i_1] [i_1] [i_2] [i_1] [i_1] = ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_12 [i_5] [i_1] [i_2] [i_5] [i_1] [i_1 - 1])))) : (1596375788U));
                            }
                        } 
                    } 
                    var_23 = (!(((/* implicit */_Bool) 2698591487U)));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_8);
}
