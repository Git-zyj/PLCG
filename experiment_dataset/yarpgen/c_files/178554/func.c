/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178554
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [3LL] [i_1] [i_1] = arr_1 [i_0 - 1];
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned int) ((var_8) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_4))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            arr_13 [i_2] [i_2] [i_4] [i_3] [(signed char)4] [i_3] [i_4] = ((/* implicit */long long int) ((arr_12 [i_0] [i_1] [i_1] [i_3] [i_4]) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                            var_12 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [i_4])) & (((/* implicit */int) arr_0 [i_0 - 1]))));
                        }
                        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_13 = ((/* implicit */long long int) ((unsigned long long int) ((arr_3 [i_3]) ^ (arr_3 [(short)3]))));
                            arr_17 [i_0 + 1] [i_1] [i_2] [i_3] [i_5] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_2] [i_0] [i_5])) || (((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_0])))) ? (arr_6 [i_0 - 1] [i_1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_1] [i_0]))))));
                        }
                        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */unsigned char) ((unsigned short) ((long long int) (unsigned char)141)));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)80)) || (((/* implicit */_Bool) ((unsigned int) (unsigned short)65280)))));
                            arr_21 [i_0] [i_1] [i_1] [i_1] [i_1] [(signed char)4] [i_1] = ((/* implicit */unsigned long long int) (short)-4316);
                        }
                        var_15 = ((/* implicit */int) ((var_3) ? (arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]) : (arr_10 [i_0 - 1] [i_0] [(_Bool)1] [i_0] [i_0] [i_0 - 1])));
                        arr_22 [i_3] = ((/* implicit */short) ((unsigned int) var_1));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_26 [4ULL] = ((/* implicit */int) ((((/* implicit */int) ((short) arr_1 [(_Bool)1]))) != (((/* implicit */int) (_Bool)0))));
                        arr_27 [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_9 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]));
                    }
                    var_16 = ((unsigned int) var_3);
                }
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((unsigned int) min((var_3), (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 5785827299914287527LL)))))));
}
