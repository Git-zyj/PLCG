/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188115
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) ((7195036107551417857LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)1)))));
                var_14 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0]);
                var_15 = ((/* implicit */signed char) arr_2 [i_0] [i_0] [i_0]);
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned int) min((((251658240) << (((-251658241) + (251658243))))), (((/* implicit */int) (signed char)(-127 - 1)))));
                    arr_7 [i_0] [10U] [i_0] [i_0] = ((/* implicit */int) var_1);
                    arr_8 [6] [i_1] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_2])) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) - (85)))));
                    arr_9 [i_2] [i_0] = ((/* implicit */signed char) var_0);
                }
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_16 [i_1] [i_3] = ((/* implicit */short) (-(arr_0 [i_0])));
                        arr_17 [i_4] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) var_1);
                        arr_18 [(unsigned short)1] [i_3] [(unsigned short)15] = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]);
                        arr_19 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) arr_1 [i_1]);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_22 [8LL] [8LL] [i_5] = ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_3] [8U]);
                        arr_23 [11] = ((/* implicit */unsigned short) (-(((arr_0 [i_1]) + (((/* implicit */long long int) var_12))))));
                    }
                    arr_24 [i_0] [i_1] [(signed char)4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [(unsigned short)4] [i_0])))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    arr_28 [i_0] = ((/* implicit */unsigned char) var_1);
                    arr_29 [i_6] [i_1] [i_0] = ((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) ^ (arr_12 [i_6] [i_1]));
                }
                for (int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    arr_32 [6] = ((/* implicit */signed char) var_12);
                    arr_33 [i_0] [16U] [i_1] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [14U] [i_1] [i_7] [i_7])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
                    arr_34 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -251658234)) ? (arr_31 [i_0] [i_7]) : (((/* implicit */int) (signed char)12))));
                }
                arr_35 [i_1] [(signed char)10] [(unsigned char)12] = (unsigned short)13;
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (~(var_1)));
}
