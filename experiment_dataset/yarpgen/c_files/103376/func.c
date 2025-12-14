/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103376
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [0ULL] |= ((/* implicit */unsigned char) max((((unsigned short) arr_2 [i_0 - 1])), (((/* implicit */unsigned short) max((arr_2 [i_0 + 1]), (((/* implicit */short) arr_3 [2] [2])))))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (arr_1 [2U])));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_10 [i_0 - 2] [i_1 + 1]))) ? (((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_1 + 2])) ? (arr_10 [i_0 - 1] [i_1 + 1]) : (arr_10 [i_0 - 1] [i_1 + 2]))) : (arr_10 [i_0 - 1] [i_1 - 2])));
                            arr_13 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : ((~(arr_10 [i_0] [i_0])))))), (arr_9 [i_0 + 1] [i_0] [i_1] [i_2] [i_2] [i_0])));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                var_15 |= arr_8 [i_2];
                                arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) (+(arr_14 [i_4] [6U] [i_3] [i_3] [6U] [6U] [i_0]))))), (((((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) arr_0 [i_1])) + (10280)))))) ? ((+(3LL))) : (arr_15 [(_Bool)1] [i_1 + 2] [i_0] [i_1 + 2] [i_0] [5U] [i_4])))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((1U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))) ? (((((/* implicit */_Bool) (short)28579)) ? (((/* implicit */long long int) ((unsigned int) (short)512))) : (max((((/* implicit */long long int) arr_3 [i_4] [i_4])), (arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [(signed char)6] [i_4]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (arr_15 [i_0] [i_1] [i_4] [i_4] [i_2] [i_4] [i_0]))))))));
                                arr_18 [i_0] [i_2] [i_2] [i_2] [(short)2] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3] [(signed char)1] [(signed char)1] [i_3 + 2] [4U] [i_0 + 1] [(unsigned char)3]))))) >> (((((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_3] [i_3 + 1] [i_1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) + (10270)))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                            {
                                arr_22 [i_5] [i_3] [i_0] [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)240))))));
                                arr_23 [i_5] [i_3] [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned short) min((((/* implicit */signed char) var_0)), (arr_5 [i_0]))))));
                            }
                            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                            {
                                arr_26 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] [i_6] &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_16 [i_6] [i_3] [i_0 + 1] [i_2] [i_1 - 2] [i_1] [i_0 + 1]))))))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1] [i_0] [i_2] [i_0 - 2] [i_0] [i_0 - 1])) ? (((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((unsigned int) (signed char)-124))))) >= (arr_20 [i_3 + 3] [i_2] [i_2] [i_0]))))));
                            }
                        }
                    } 
                } 
                arr_27 [6LL] [i_1] [6LL] &= ((/* implicit */unsigned char) min((arr_10 [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_8);
}
