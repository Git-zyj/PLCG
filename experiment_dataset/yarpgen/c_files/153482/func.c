/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153482
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_0]);
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0] [i_4] [(signed char)16]) : (((/* implicit */int) (unsigned char)0)))) : ((~(1264056210)))))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_6))))) : (((((/* implicit */_Bool) var_14)) ? (arr_10 [i_0] [i_4] [i_0] [i_3] [i_4]) : (((/* implicit */int) var_4)))))))));
                                arr_12 [(signed char)4] [i_3 + 1] [i_0] [i_3 + 1] [i_3 + 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_3 - 1] [i_1])) ? (arr_2 [i_2 + 1] [i_0] [i_2 + 1]) : (((/* implicit */int) var_3))))));
                                var_18 = ((/* implicit */int) min((var_18), (arr_11 [i_1] [i_1])));
                                var_19 = ((/* implicit */unsigned int) (+(min((arr_10 [i_2 - 1] [i_0] [i_2 + 1] [i_2 + 1] [i_2]), (((/* implicit */int) min((((/* implicit */short) (signed char)96)), ((short)-27878))))))));
                                arr_13 [i_0] [i_0] [i_2 + 1] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */unsigned int) min((arr_3 [i_0]), (((/* implicit */unsigned short) (short)16384))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (short)-27878))));
                arr_14 [i_0] = ((/* implicit */signed char) var_9);
                arr_15 [i_0] [i_0] = ((/* implicit */_Bool) 497451044);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) -1264056211);
}
