/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167095
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
    var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] |= ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_12 [i_2 - 2] [i_1] [i_1] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (((-(arr_6 [i_1]))) > (((((/* implicit */_Bool) var_4)) ? (arr_11 [i_0] [i_0 - 1] [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 3] [i_0 - 2] [i_1] [i_1])))))));
                            var_13 = ((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0]);
                            var_14 = (unsigned short)62058;
                            var_15 = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_1] [i_0]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) ((int) arr_11 [i_0 - 2] [i_1] [(unsigned short)11] [i_3] [i_5]))));
                            var_17 = ((/* implicit */signed char) min(((~(((/* implicit */int) arr_16 [i_5] [i_2])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 2] [i_1] [i_2 - 1]))) <= (var_9))))));
                        }
                        var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) || (((/* implicit */_Bool) arr_13 [i_2 - 2] [i_2 + 4] [i_2 + 3]))))), (min((((unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) arr_10 [i_0])))))))));
                        arr_17 [i_0] [(signed char)6] [i_1] = arr_5 [i_0] [i_1];
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 3; i_6 < 21; i_6 += 2) /* same iter space */
    {
        arr_20 [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_6] [i_6 + 2]))));
        arr_21 [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-13024))));
        arr_22 [i_6 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 555285363U)) ? (arr_0 [i_6 + 1]) : (arr_0 [i_6 + 2])));
        var_19 = ((/* implicit */signed char) (!(arr_8 [i_6 - 2] [i_6 - 3] [(signed char)22] [i_6])));
    }
}
