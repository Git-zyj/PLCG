/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13462
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
    var_19 |= ((/* implicit */unsigned char) min((9223372036854775788LL), (((/* implicit */long long int) (signed char)45))));
    var_20 = ((unsigned long long int) (short)30448);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((short) 3237853513540301937ULL)))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (min((var_10), (((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 3) /* same iter space */
                    {
                        arr_13 [i_3] = ((/* implicit */int) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) arr_3 [(short)13] [(short)13] [i_2 + 1])), (arr_10 [i_2] [18ULL] [18ULL] [(_Bool)1] [18ULL]))), (arr_11 [i_2 - 3] [i_2 - 3] [i_2 - 4] [i_3])))))));
                        arr_14 [i_0] [i_1] [4ULL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3 + 1])) || (((/* implicit */_Bool) ((unsigned char) arr_6 [i_2 - 1] [i_3 + 1])))));
                        arr_15 [i_0] [i_1] [i_0] [i_3 - 1] [i_3] = ((signed char) min((arr_9 [i_0] [i_3 + 1] [i_3] [i_3] [i_3]), (arr_9 [i_1] [i_3 + 1] [i_3] [i_1] [20LL])));
                    }
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        arr_19 [i_4] = ((/* implicit */unsigned short) (unsigned char)28);
                        arr_20 [i_4] [i_4] [i_4] = ((/* implicit */short) ((_Bool) ((long long int) arr_12 [(signed char)11] [i_1] [8LL] [i_1] [i_1] [(signed char)11])));
                    }
                    arr_21 [2U] [2U] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_17)))) : ((-(arr_6 [i_1] [i_2]))))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_2 - 3] [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_2] [i_2]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_26 [i_0] [i_5] = ((/* implicit */unsigned long long int) (short)-1024);
                        arr_27 [i_1] [i_2] = ((/* implicit */int) ((var_7) / ((+(var_15)))));
                        arr_28 [i_0] [i_0] [(unsigned short)20] = ((/* implicit */unsigned short) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_2 + 1] [i_2 - 1])))));
                        arr_29 [(unsigned short)6] [i_1] [18] [4U] [i_5] = ((/* implicit */unsigned char) ((unsigned short) (signed char)(-127 - 1)));
                    }
                    arr_30 [i_0] [i_1] [4LL] = ((((/* implicit */_Bool) var_2)) ? (max((var_7), (((/* implicit */unsigned long long int) var_11)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (+(arr_8 [i_2] [(unsigned short)12])))) : ((~(var_8))))));
                    arr_31 [i_0] [i_1] [17LL] [i_2] = ((/* implicit */unsigned long long int) var_14);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        arr_34 [i_6] = ((/* implicit */_Bool) ((((((long long int) var_18)) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) >> (((/* implicit */int) ((11116583318609431460ULL) >= (((/* implicit */unsigned long long int) var_0)))))));
        arr_35 [i_6] = ((/* implicit */long long int) arr_10 [i_6] [i_6] [i_6] [18LL] [i_6]);
        arr_36 [i_6] [i_6] |= ((/* implicit */unsigned char) (short)30433);
    }
}
