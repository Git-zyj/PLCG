/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181585
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
    var_11 = (-(var_5));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((int) arr_2 [i_0]));
    }
    var_13 = ((/* implicit */short) ((max((1050023568U), (((/* implicit */unsigned int) min((var_9), (var_9)))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                            {
                                arr_19 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_3] [i_3] [i_1])) ? (arr_13 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) <= (((/* implicit */int) arr_2 [(short)9]))))))));
                                arr_20 [8U] [i_4] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (4294967295U)));
                            }
                            arr_21 [i_4] [i_1] [10] [i_1] = ((/* implicit */unsigned long long int) min((3244943727U), (1307470962U)));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)508)))))));
                        }
                    } 
                } 
                arr_22 [i_2] [i_1] [i_1] |= ((/* implicit */unsigned int) arr_6 [i_1]);
                arr_23 [i_1] [i_1] [i_1] = ((/* implicit */short) 3245652692U);
            }
        } 
    } 
}
