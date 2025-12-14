/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134168
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(signed char)2])) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0])))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)106))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) arr_5 [(_Bool)1]);
                var_13 = ((/* implicit */short) arr_0 [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) (short)27110)) : (((/* implicit */int) (short)-1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((var_8) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (var_3)))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))))))));
    var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (var_6)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_2)) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6)))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 4; i_2 < 21; i_2 += 3) 
    {
        for (int i_3 = 4; i_3 < 20; i_3 += 3) 
        {
            {
                var_16 ^= arr_11 [i_2] [i_2] [i_2];
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_16 [i_2] [i_3] [i_2] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 2] [i_2])) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) arr_14 [i_3]))))) ? (((arr_9 [i_2] [i_2]) ? (arr_15 [i_2] [i_3] [i_4] [i_5 - 1]) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) arr_9 [i_2] [i_2 - 1])) : (arr_15 [i_2] [i_3] [i_2] [i_2]))))) : (((((/* implicit */_Bool) (short)4840)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (signed char)-107))))));
                            arr_17 [i_2 - 1] [i_3] [i_2 - 4] [i_2 - 4] = arr_9 [i_4] [i_5];
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_4] [i_5])) ? (arr_15 [i_3] [i_4] [i_3] [20U]) : (((/* implicit */int) arr_9 [i_4] [i_4]))));
                            arr_18 [i_2] [9U] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (375756412017859077ULL) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [3U] [i_4])) ? (((/* implicit */unsigned int) arr_11 [i_2] [i_4] [i_5])) : (arr_8 [i_5 - 1])))) ? (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (arr_15 [i_3] [i_3 - 1] [i_3] [11]))) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_3]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(signed char)15] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) arr_15 [i_5 + 1] [i_4] [i_3 + 1] [i_2])) : (arr_8 [i_5])))) ? (((((/* implicit */_Bool) arr_10 [i_2] [(_Bool)1] [i_5 - 1])) ? (arr_8 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2 - 3] [i_2 - 4]))))) : (((((/* implicit */_Bool) arr_10 [i_2 - 4] [i_3] [i_2 - 3])) ? (arr_8 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [8U] [i_3 - 2] [8U])))))))));
                        }
                    } 
                } 
                arr_19 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_13 [i_2] [(unsigned char)10] [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2])))) : (((((/* implicit */_Bool) arr_10 [i_2 - 3] [i_2 - 4] [i_2 - 4])) ? (((/* implicit */int) arr_10 [i_3 + 1] [i_3 - 3] [i_2])) : (((/* implicit */int) arr_14 [i_3]))))))) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_2])) : (((((/* implicit */_Bool) arr_11 [7] [7] [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_2])) : (((arr_9 [i_3 + 1] [i_2]) ? (arr_12 [i_3] [i_2 - 3] [i_2 - 3]) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_2]))))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_14 [(signed char)17]))));
            }
        } 
    } 
}
