/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12108
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
    var_13 = ((/* implicit */_Bool) (((+(var_2))) % (((/* implicit */unsigned long long int) var_12))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((arr_3 [i_1] [(signed char)14]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))))) ? (((arr_4 [3U] [i_2] [i_1]) - (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_2]))));
                    var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((arr_9 [i_1] [i_1]), (((/* implicit */long long int) arr_7 [(_Bool)1] [i_2]))))))) ? ((+(arr_4 [i_2] [i_1] [i_2]))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)59728)) + (((/* implicit */int) arr_7 [12] [12]))))) > ((+(arr_9 [i_0] [i_0]))))))));
                    var_16 += ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_1])))) < (((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1]))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) arr_1 [(unsigned char)3] [i_3])) : (min((((/* implicit */int) arr_10 [i_0] [17] [i_0] [i_0])), (((((/* implicit */_Bool) arr_10 [i_0] [18ULL] [18ULL] [i_3])) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_1] [i_3])) : (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)6] [(_Bool)1])))))))))));
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) -1437047970)))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_7 [i_1] [i_2]);
                        arr_15 [i_4] [(signed char)14] [(signed char)14] [(signed char)14] [i_0] &= ((/* implicit */short) ((((arr_9 [i_0] [i_1]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_5 [i_4])) - (52639)))));
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) min((min((arr_13 [i_1]), (arr_13 [i_1]))), ((-(arr_13 [i_1])))));
                        arr_17 [i_1] = ((/* implicit */long long int) arr_12 [i_2] [i_1] [i_2] [i_1] [2]);
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 3) 
        {
            var_19 ^= ((/* implicit */unsigned int) min((((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_1 [13] [i_5])), (arr_3 [5] [i_5 - 1]))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_7 [8] [2])), (arr_13 [(_Bool)1]))))))), ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_5 - 1]))))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_23 [18LL] [18LL] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [14LL] [i_5] [i_0] [i_6])) + (((/* implicit */int) arr_6 [i_6] [12] [i_5 + 1] [i_0]))))) + (((((/* implicit */_Bool) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 - 1] [i_5])))))) ? (((arr_3 [i_0] [i_5 + 1]) + (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_5] [i_6])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-66)) + (((/* implicit */int) (unsigned char)225)))))))));
                var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_0] [18LL] [i_0] [i_6] [i_5 - 3])), ((+(((/* implicit */int) arr_22 [i_0] [10ULL] [(unsigned short)10]))))))) ? ((-(((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_5 + 1] [4LL] [i_6])))) : (((/* implicit */int) (unsigned char)239))));
            }
        }
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            arr_26 [i_0] [i_7] [i_0] = ((/* implicit */_Bool) ((((10275316413195018299ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5813))))) << (((((arr_4 [i_0] [i_7] [i_7]) + (2147483647))) >> (((((/* implicit */int) (short)23406)) - (23377)))))));
            arr_27 [i_0] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_8 [i_0] [i_0] [i_7] [i_7])) >> (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_7])) - (117)))))));
        }
        arr_28 [13U] = ((/* implicit */signed char) arr_5 [i_0]);
    }
}
