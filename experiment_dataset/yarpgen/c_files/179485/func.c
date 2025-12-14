/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179485
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [(_Bool)1]))));
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) arr_4 [i_1] [i_0] [i_0]);
        }
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) <= (18446744073709551615ULL)));
            var_20 = ((/* implicit */unsigned int) ((arr_8 [i_0] [i_2]) ? (((/* implicit */int) arr_8 [i_2] [i_0])) : (((/* implicit */int) arr_8 [(unsigned char)0] [i_0]))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) 
                {
                    {
                        arr_18 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_2] [7ULL] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_4 - 2]))) : (3245463788U)))) ? (3245463788U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_3] [i_4 - 1])))))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_2]);
                        var_21 = ((/* implicit */unsigned long long int) arr_14 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 2]);
                        arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) arr_0 [i_4]))) : (((/* implicit */int) arr_15 [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 1]))));
                    }
                } 
            } 
            arr_21 [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [(unsigned short)5])) ? (((/* implicit */unsigned long long int) 1049503508U)) : (17371104754737182713ULL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                arr_25 [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) var_15)) - (51512)))))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_13))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_23 [i_5] [i_2] [i_0]))));
                arr_26 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_13 [5] [i_5] [(short)12] [(short)12]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((1075639318972368903ULL) & (1075639318972368902ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((17371104754737182712ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))));
            }
        }
        arr_27 [3LL] [3LL] = ((/* implicit */unsigned short) ((_Bool) arr_16 [i_0] [i_0] [i_0] [i_0]));
        arr_28 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((arr_24 [i_0] [i_0]) ? (17371104754737182713ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    var_24 = ((/* implicit */long long int) var_8);
}
