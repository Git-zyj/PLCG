/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122144
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
    var_13 += ((/* implicit */unsigned short) max((var_7), (((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_11)))) : ((-(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((int) max((112U), (((/* implicit */unsigned int) (unsigned short)2651))))) >> (((/* implicit */int) var_8))));
                                var_15 &= (!(((/* implicit */_Bool) arr_1 [i_3])));
                                var_16 = ((/* implicit */_Bool) max((((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((int) arr_13 [i_4] [i_4] [i_3] [i_2] [i_1] [(unsigned char)12])))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_12 [14] [i_4] [i_4 - 1] [i_2])) : (((/* implicit */int) arr_12 [i_4] [(unsigned char)8] [i_4 - 1] [i_2]))))));
                                arr_17 [i_0] [i_4] [i_2] [(unsigned char)1] [i_4 - 1] = ((/* implicit */unsigned int) min((((arr_16 [i_0] [i_1] [i_4 + 1] [i_4 + 1] [i_4]) + (arr_16 [i_0] [i_0] [i_4 - 1] [i_4] [i_4]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4] [i_1] [i_4 + 1] [(unsigned short)10] [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 2; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_5] [i_1])) / (((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)246))))))));
                                var_18 = ((/* implicit */int) arr_22 [i_6 - 3] [i_5 - 2] [i_1] [i_1] [i_0]);
                                var_19 = ((/* implicit */unsigned char) var_5);
                                var_20 = arr_7 [i_2];
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) ((short) min((arr_16 [i_0] [i_2] [i_1] [i_1] [i_0]), (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_11);
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (_Bool)1))));
}
