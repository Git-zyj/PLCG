/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166485
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_8 [(signed char)8] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_2);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            arr_11 [i_4] [i_2] [i_2] [i_0] [(unsigned short)2] = ((/* implicit */long long int) ((((/* implicit */int) var_12)) > (((((/* implicit */int) arr_7 [i_0] [i_0])) / (((/* implicit */int) arr_0 [(unsigned short)8] [(unsigned short)8]))))));
                            arr_12 [i_4] [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] = (!(((/* implicit */_Bool) var_4)));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1 - 1]))) % (((var_6) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))));
                            arr_13 [i_4] [i_3] [i_2] [(unsigned short)4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) & (arr_1 [i_3])))) && ((!(var_9)))));
                            arr_14 [i_0] [i_0] [i_0] [(short)3] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1]))));
                        }
                    }
                    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1]))))))));
                    var_15 = ((/* implicit */short) (!(((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)15230)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        for (unsigned short i_6 = 4; i_6 < 16; i_6 += 3) 
        {
            for (short i_7 = 4; i_7 < 17; i_7 += 1) 
            {
                {
                    var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)127)) && (((/* implicit */_Bool) (unsigned short)42593))));
                    var_17 = arr_18 [i_5 + 1] [i_6];
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_22 [i_5 - 2] [i_6 + 1] [i_6 + 1] [i_5]), (arr_22 [i_5 - 1] [i_6 + 2] [i_6] [i_5])))), (((long long int) arr_22 [i_5 - 2] [i_6 + 1] [i_7 - 2] [i_5])))))));
                }
            } 
        } 
    } 
}
