/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173304
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
    var_13 = ((/* implicit */signed char) ((int) var_9));
    var_14 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */short) (unsigned char)103);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [(signed char)14]);
                                var_16 = ((/* implicit */int) min((var_16), (0)));
                                arr_16 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) max(((signed char)113), ((signed char)84)))), (arr_10 [(unsigned char)12] [i_1 - 1] [11U] [i_1 + 4] [11U]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_3])))))));
                                var_17 = ((/* implicit */short) ((int) (signed char)-8));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) (-(((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) (short)15954))), (var_10)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-121)), ((unsigned char)216)))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((short) var_0)))))));
}
