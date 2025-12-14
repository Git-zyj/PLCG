/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15854
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_10 = (((~(((/* implicit */int) var_4)))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)13049)) : (var_8))));
        var_11 = ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
        {
            var_12 *= ((/* implicit */short) arr_0 [i_0] [i_0]);
            var_13 &= ((/* implicit */short) var_7);
            var_14 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_1 [(unsigned char)8])) ? (((/* implicit */int) (short)4595)) : (((/* implicit */int) arr_0 [i_1] [i_0])))));
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((arr_3 [i_1] [(unsigned char)2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                arr_7 [i_0] [(unsigned char)4] [i_2] [i_2 + 2] = ((/* implicit */signed char) (~(arr_6 [i_0])));
                var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) arr_5 [(_Bool)1])))) : (((((/* implicit */int) var_3)) ^ (var_8)))));
            }
            for (long long int i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 3; i_4 < 17; i_4 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0]))));
                    var_19 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)24972))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_3 - 1] [i_3 - 1]))));
                    arr_13 [i_0] [i_0] [i_0] [i_4 + 3] [(signed char)11] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3 - 2] [i_1] [i_4 - 2])) ? (arr_12 [i_3 + 1] [i_1] [i_4 + 3]) : (arr_12 [i_3 - 2] [i_1] [i_4 + 2])));
                    var_21 ^= ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_3 - 1] [i_1])) : (((/* implicit */int) arr_2 [i_3 - 1] [i_4])));
                }
                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_7);
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((arr_10 [(unsigned char)1] [i_3 - 2] [i_3 - 2]) + (2147483647))) >> (((arr_11 [i_3 + 1] [i_1] [i_3 + 1] [i_0]) - (1113533633)))));
                var_22 ^= ((/* implicit */signed char) (((+(((/* implicit */int) var_2)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3])))))));
            }
        }
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) < (arr_10 [i_0] [15LL] [i_0])));
                var_24 = ((/* implicit */signed char) (-(arr_12 [i_0] [i_5] [i_6])));
                var_25 = ((/* implicit */unsigned char) (+(((long long int) var_6))));
            }
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */short) var_7);
                var_27 = ((/* implicit */unsigned short) (+(arr_21 [i_0])));
            }
            var_28 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [6]))));
        }
        for (short i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)4604)) ? (((((/* implicit */_Bool) arr_17 [i_8] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4609))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_8] [i_0])))));
            arr_26 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_8] [(short)12])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) (unsigned short)24993))));
        }
        var_30 = ((/* implicit */_Bool) ((int) var_8));
    }
    var_31 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_9)), (var_4)))) && (((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_8))))))), (max((((/* implicit */unsigned char) max((var_4), (var_4)))), (min((var_3), (((/* implicit */unsigned char) var_2))))))));
}
