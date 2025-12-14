/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136627
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1476507747)) ? ((-(((/* implicit */int) var_5)))) : (((var_4) ? (((/* implicit */int) var_9)) : (1476507746))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 6; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                var_18 = ((/* implicit */short) arr_2 [i_1] [i_0] [i_0]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 7; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(arr_7 [i_3 + 1] [i_2] [i_0])))))) ? (((/* implicit */long long int) (-((+(var_0)))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3 + 1] [i_4])) ? (arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)39)) ? (arr_11 [i_3 + 2] [i_1] [i_4 - 2] [i_3] [i_3 + 3]) : (arr_11 [i_3 + 2] [i_1 + 2] [i_4 - 1] [i_3] [i_4 - 1]))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))));
                                var_20 ^= ((((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_9 [i_4 - 1] [i_1 - 2])) : (((/* implicit */int) arr_9 [i_4 + 1] [i_1 + 4])))) >= (((/* implicit */int) arr_9 [i_3] [i_2])));
                                arr_14 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)196)), (((arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]) << (((((/* implicit */int) (_Bool)1)) - (1)))))))) >= (4294967295U)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    arr_17 [i_5] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_5] [i_1 - 2] [i_1 + 3] [i_1 - 3] [i_0])) || (((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_5 [i_0] [i_1] [i_5])))))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)185)) >> (((99670694) - (99670676)))))))) ? (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_15 [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_5])), (arr_7 [i_0] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)8263), (((/* implicit */unsigned short) arr_9 [i_0] [i_5]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)44557)) > (((/* implicit */int) var_2))))))))));
                    arr_18 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_6 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    arr_19 [i_0] = ((/* implicit */unsigned long long int) ((int) ((arr_10 [i_0] [i_1] [i_1 - 2] [i_1 + 3] [i_1 + 2] [i_1 - 2]) + (((/* implicit */int) arr_16 [i_0] [i_0] [i_1 + 1])))));
                }
                for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) (unsigned char)219);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_1 + 4] [i_0])) <= (((/* implicit */int) arr_21 [i_1] [i_1] [i_1 + 3] [i_0])))))));
                    arr_22 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 3; i_8 < 6; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) arr_1 [i_7] [i_1 - 1]);
                                var_25 = ((/* implicit */signed char) ((-9122659007680508845LL) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_15 [i_0] [i_8 - 1]))))));
                                var_26 = ((/* implicit */short) arr_1 [i_0] [i_0]);
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -9122659007680508875LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0] [i_6]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
