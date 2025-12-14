/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153109
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) arr_2 [i_3] [15]);
                                arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (unsigned short)35116)) - (((/* implicit */int) arr_7 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4] [i_4 - 1] [i_4])))));
                            }
                        } 
                    } 
                    arr_13 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (arr_5 [i_0]) : (((/* implicit */int) arr_7 [i_0] [(short)6] [i_2] [i_1] [i_0] [(signed char)5])))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) -618913802)) || (((/* implicit */_Bool) (short)7))))));
                                var_14 = var_0;
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)14)) >= (((/* implicit */int) (short)-19))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((var_3) & (((/* implicit */int) ((((/* implicit */_Bool) min(((signed char)-11), (((/* implicit */signed char) var_10))))) || (((/* implicit */_Bool) ((int) 2147483647))))))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)247))));
}
