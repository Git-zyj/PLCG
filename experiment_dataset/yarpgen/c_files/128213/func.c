/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128213
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
    var_10 = ((/* implicit */int) var_4);
    var_11 = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) min((((/* implicit */signed char) var_5)), (var_8)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_12 = (signed char)-60;
                            arr_15 [i_1] [i_1 + 1] [i_4] [i_1 - 2] [i_2] = ((/* implicit */unsigned long long int) arr_1 [(unsigned char)7]);
                            var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (max((var_1), (((/* implicit */unsigned long long int) arr_2 [i_2]))))))) ? ((-(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [8U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */unsigned long long int) -238341219);
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */int) var_1);
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) max((arr_5 [i_5] [i_1] [(unsigned char)6]), (((/* implicit */signed char) var_5))))), ((-(arr_9 [i_0] [i_0] [i_5] [i_1 + 3]))))) / (min((arr_7 [i_0] [i_1 - 1] [i_5]), (arr_7 [i_5] [i_1] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 8; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */int) min((((arr_0 [i_6 - 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_18 [i_0] [i_0] [7] [i_0])))))), ((!(((/* implicit */_Bool) arr_6 [i_1] [i_1 + 3]))))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) arr_8 [i_0] [i_0])))))));
                            var_18 = var_1;
                            arr_26 [i_0] [i_6] [i_5] [(_Bool)0] [i_7] [i_7] [i_6] = ((/* implicit */signed char) arr_4 [(_Bool)1] [i_1 + 2] [i_1]);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                arr_30 [i_0] [i_8] = ((/* implicit */long long int) var_1);
                /* LoopNest 2 */
                for (unsigned char i_9 = 2; i_9 < 9; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            arr_36 [i_0] [i_1 - 2] [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) var_4);
                            arr_37 [i_0] [i_1] [i_10] [i_9] [i_10] = ((/* implicit */unsigned int) var_8);
                            arr_38 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 + 3] [i_9 - 1])) ? (arr_7 [i_1 - 1] [i_1] [i_9 - 1]) : (((/* implicit */int) arr_5 [i_1 + 1] [1U] [i_9 - 2]))))) ? (((/* implicit */unsigned long long int) min((arr_19 [i_1 + 2] [i_1] [i_9 - 2] [i_1]), (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_9 + 1]))))) : (min((arr_27 [i_1 - 1] [i_1 - 1] [i_9 - 1]), (arr_27 [i_1 - 2] [i_1] [i_9 - 1])))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                            arr_40 [7] [7] [i_8] [(signed char)0] [(signed char)0] = ((/* implicit */int) min((((long long int) var_5)), (((/* implicit */long long int) var_3))));
                        }
                    } 
                } 
                arr_41 [i_0] [i_1] [i_8] = ((/* implicit */_Bool) ((((int) ((((/* implicit */long long int) arr_29 [i_8] [i_1] [i_0])) + (var_0)))) * (((/* implicit */int) ((_Bool) arr_21 [i_1] [i_1 + 2])))));
            }
        }
        for (int i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            var_19 *= ((/* implicit */signed char) ((unsigned short) min((min((arr_23 [i_0] [i_11] [i_11] [i_0]), (var_1))), (((/* implicit */unsigned long long int) var_9)))));
            var_20 = ((/* implicit */unsigned short) (+(arr_23 [i_0] [i_0] [i_0] [i_0])));
        }
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_28 [i_0] [i_0])) ? (arr_24 [(unsigned short)4] [6LL] [i_12] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_12] [i_12] [i_12] [i_12] [i_0])))))));
            var_22 = arr_10 [i_0] [i_12] [8ULL] [i_0];
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (2565774900U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-60))))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) var_3)) | (((/* implicit */int) var_6))))))) : (var_9)));
        }
        var_24 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_16 [i_0])), (arr_13 [(_Bool)0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (8388544ULL))), (((((/* implicit */_Bool) (unsigned char)24)) ? (18446744073709551595ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))))));
    }
    var_25 = ((/* implicit */signed char) (-(var_0)));
    var_26 ^= ((/* implicit */_Bool) (+((-(((/* implicit */int) var_7))))));
}
