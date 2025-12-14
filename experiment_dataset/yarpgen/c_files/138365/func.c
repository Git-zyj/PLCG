/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138365
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
    var_19 = ((/* implicit */_Bool) (unsigned char)49);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)206))))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(min((((/* implicit */int) min((((/* implicit */short) (signed char)59)), ((short)-9249)))), ((~(((/* implicit */int) arr_0 [(_Bool)1])))))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)59)), ((unsigned short)57385)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned short) min((max((arr_15 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] [i_4 + 1]), (arr_3 [i_3] [i_1]))), (((/* implicit */unsigned int) min((max(((unsigned char)19), (((/* implicit */unsigned char) arr_14 [i_3] [i_1] [i_1] [i_1] [(_Bool)1] [i_1])))), (((/* implicit */unsigned char) (signed char)96)))))));
                                var_23 = ((/* implicit */short) min((arr_7 [i_0]), (((/* implicit */long long int) min((arr_15 [i_2] [(signed char)12] [i_2 + 1] [i_2 - 1] [i_2] [i_2 - 1]), (((/* implicit */unsigned int) arr_11 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])))))));
                                arr_16 [(short)3] [i_1] [i_2] [i_3] [i_4] = (~(((/* implicit */int) max((((/* implicit */signed char) arr_12 [(signed char)15] [i_4] [i_4 + 2] [i_4] [i_4])), (arr_13 [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4] [i_4])))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)204))))))))));
                    arr_21 [(_Bool)1] [i_1] [(signed char)2] = arr_18 [i_5] [i_0] [i_0];
                    var_25 += (short)-9249;
                }
                /* vectorizable */
                for (short i_6 = 2; i_6 < 14; i_6 += 2) 
                {
                    var_26 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_6 + 3] [i_6] [i_6 - 2] [i_6 + 3] [(_Bool)1]))));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)46)))))));
                }
            }
        } 
    } 
}
