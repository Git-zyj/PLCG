/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1594
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((2299870573U), (((/* implicit */unsigned int) 56728407))))), (arr_0 [i_0 + 2])))) || (((/* implicit */_Bool) max((max((((/* implicit */long long int) var_3)), (var_1))), (var_11))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            arr_14 [i_4] [i_4] [(_Bool)1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)28))));
                            arr_15 [i_4] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_1] [i_3] [i_4])), (arr_13 [i_0 - 1] [i_0] [i_1] [i_1] [(_Bool)1] [i_1])))) : (((arr_12 [i_0] [i_4] [i_2] [i_2] [5] [i_4]) / (9223372036854775807LL))))) / (((/* implicit */long long int) ((unsigned int) ((signed char) var_2))))));
                        }
                        arr_16 [i_0] [i_0] = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_9 [i_0] [i_1] [i_2] [i_2] [i_2]) : (var_11)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)1] [i_2] [i_0]))) : (arr_9 [i_0] [(signed char)8] [i_0 - 1] [i_0 + 1] [i_0]))) : (min((var_1), (((/* implicit */long long int) var_12))))));
                    }
                } 
            } 
        } 
        arr_17 [i_0 - 1] [i_0] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])), (max((((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned int) arr_13 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 - 1]))))), (max((arr_7 [i_0 + 1] [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) var_10))))))));
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    arr_26 [(unsigned char)15] = min((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) : (3917705771U))), (((unsigned int) -487836656)));
                    arr_27 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_7])) ? (((/* implicit */long long int) ((arr_18 [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5] [i_6] [i_7]))) : (((((/* implicit */_Bool) arr_20 [i_5] [i_6] [i_7])) ? (var_7) : (var_10)))))) : (min((((((/* implicit */_Bool) arr_24 [i_7] [i_6] [i_5])) ? (((/* implicit */long long int) var_2)) : (var_1))), (((/* implicit */long long int) min(((unsigned char)128), (((/* implicit */unsigned char) (_Bool)1)))))))));
                }
            } 
        } 
        arr_28 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), ((~(var_3)))))) ? (var_9) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_5])) ? (arr_21 [(_Bool)0] [i_5] [(_Bool)0]) : (arr_21 [i_5] [i_5] [i_5]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5]))) / (arr_21 [i_5] [i_5] [i_5]))))))));
    }
    var_13 = ((/* implicit */unsigned char) var_12);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_5) : (((/* implicit */unsigned long long int) var_7))));
}
