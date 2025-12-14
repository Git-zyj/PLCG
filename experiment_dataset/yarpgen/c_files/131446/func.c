/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131446
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) (-(3164074891U)));
                    arr_11 [i_0] [(unsigned char)12] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-18)) > ((~(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))))));
                    var_18 = ((/* implicit */long long int) ((((_Bool) arr_0 [i_0] [i_0 + 1])) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-24841)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */short) ((long long int) arr_4 [i_1] [i_0]));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_19 [14] [i_0] [i_2] [14] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
                            var_20 += (unsigned short)6639;
                        }
                    }
                    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (arr_17 [(unsigned char)18] [(unsigned char)18] [i_2] [i_2] [i_5])));
                        arr_22 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */short) (+(((/* implicit */int) ((arr_16 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_2] [i_5]) <= (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_26 [i_0] [i_0] [i_6] [i_0] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (~(arr_12 [i_0] [i_1] [i_2] [(_Bool)1])))))));
                            var_22 = ((/* implicit */_Bool) 3536388185U);
                        }
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_3);
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) != (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (short)-24841))))))));
}
