/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178570
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
    var_13 = ((/* implicit */_Bool) var_8);
    var_14 = ((/* implicit */signed char) min((var_5), (((/* implicit */unsigned long long int) ((int) var_7)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_10 [i_0 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_3 - 1] [i_3 + 1]))));
                                var_16 = ((/* implicit */unsigned short) arr_10 [i_0] [i_1]);
                                arr_14 [i_0] [i_1] [i_2] [i_4] = ((((/* implicit */long long int) arr_9 [i_4] [i_4] [i_4] [i_4])) < (arr_7 [i_0] [i_1] [i_2] [i_4]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            {
                                arr_21 [i_5] [i_5] = ((((/* implicit */_Bool) arr_2 [i_6 + 1] [i_0 - 1])) ? (var_9) : (arr_2 [i_6 + 3] [i_0 - 1]));
                                arr_22 [i_0] [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] = arr_13 [i_6 - 1] [i_6 - 1] [i_6 + 3] [i_6 + 1] [i_6];
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_23 [i_0 - 1] [i_1] [i_7] [i_8])) : (((/* implicit */int) arr_23 [i_0 - 1] [i_0 - 1] [i_7] [i_8]))))) && (((/* implicit */_Bool) arr_10 [0U] [i_0]))));
                        arr_29 [i_0] [i_1] [i_7] [i_8] [i_0] = ((/* implicit */signed char) arr_9 [2] [i_1] [i_7] [i_8]);
                    }
                    arr_30 [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_16 [(unsigned short)0] [i_7] [i_0] [i_0] [i_7] [(unsigned char)10]);
                }
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_1])) <= (((/* implicit */int) var_3))))) < (((/* implicit */int) min((arr_19 [i_0] [i_1] [i_0] [i_1]), (arr_19 [i_0] [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
}
