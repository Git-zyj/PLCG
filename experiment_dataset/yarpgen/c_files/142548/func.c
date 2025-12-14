/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142548
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
    var_16 = ((/* implicit */_Bool) min((max((min((var_10), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_5)))))), (((/* implicit */unsigned long long int) min(((short)-28412), (((/* implicit */short) (signed char)70)))))));
    var_17 = ((/* implicit */signed char) min((var_13), (var_11)));
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) min((var_12), (((/* implicit */signed char) var_2))))), (var_5)))));
    var_19 = ((/* implicit */long long int) min((var_0), (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0 - 1] [i_0 - 1]);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) > (((/* implicit */int) (signed char)59))))) - (((/* implicit */int) arr_4 [i_0] [i_1]))));
                arr_9 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)70)) <= (((((/* implicit */int) (signed char)-70)) / (((/* implicit */int) arr_7 [i_0]))))));
                arr_10 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)50)) / (((/* implicit */int) arr_2 [i_0 - 1] [i_2]))));
                var_21 -= ((/* implicit */long long int) arr_2 [i_0 - 1] [i_0 - 1]);
            }
            for (signed char i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                var_22 = ((/* implicit */short) arr_11 [i_0] [i_1] [i_3] [i_0]);
                var_23 = arr_5 [i_0] [i_0];
            }
        }
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            arr_15 [i_4] = ((/* implicit */signed char) arr_8 [i_0 - 1] [(_Bool)1] [i_0] [i_4]);
            /* LoopNest 2 */
            for (signed char i_5 = 3; i_5 < 15; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_2 [i_5 - 3] [i_0]))));
                        var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((arr_12 [i_0 + 1] [i_0 + 1] [i_5 - 2] [i_6]) + (((/* implicit */int) arr_0 [i_4]))))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [i_5 + 1] [i_4]))) + (arr_17 [i_0] [i_4] [(unsigned short)12])))));
                        var_26 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_4] [i_0])) != (((/* implicit */int) arr_4 [i_0] [i_6]))))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2]))) ^ (arr_17 [i_4] [i_4] [(signed char)6]))) - (2104949640U)))));
                        arr_22 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_4] = ((/* implicit */_Bool) arr_13 [i_0 - 1] [i_4]);
                    }
                } 
            } 
            arr_23 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_4] [i_4]))) < (((arr_21 [i_0] [i_0] [i_4] [i_4] [i_4] [i_4]) << (((arr_12 [i_0 - 1] [i_4] [i_4] [i_4]) - (422010382)))))));
            var_27 *= ((/* implicit */unsigned long long int) arr_0 [i_4]);
            arr_24 [i_4] [i_4] = ((((/* implicit */_Bool) arr_18 [i_0] [i_0 - 2] [i_0] [(signed char)14])) || (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1])));
        }
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            arr_29 [i_7] = ((/* implicit */_Bool) arr_28 [i_0 + 1] [i_7]);
            arr_30 [i_0] = ((/* implicit */signed char) ((arr_27 [i_7]) ^ (((/* implicit */long long int) ((arr_12 [i_0 + 2] [i_7] [i_7] [i_7]) << (((((/* implicit */int) arr_3 [i_7] [i_7] [i_0 + 2])) - (56724))))))));
        }
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_27 [(unsigned char)4]))));
    }
}
