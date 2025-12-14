/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175296
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */long long int) ((unsigned char) (-(arr_1 [i_0] [(unsigned short)2]))));
                var_21 ^= ((/* implicit */unsigned short) ((unsigned char) (unsigned char)0));
                var_22 = (((!(((/* implicit */_Bool) ((long long int) arr_2 [2LL] [i_1]))))) ? (((((/* implicit */_Bool) 262136LL)) ? (-9223372036854775778LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13301))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) var_8)) ? (arr_0 [(unsigned char)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [3LL] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [2LL] [i_1] [i_1])))))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4126)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (unsigned char)177))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_0 [i_0]) : (arr_0 [(unsigned char)0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)3] [i_1]))) : (arr_0 [i_1])))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_8 [i_0]);
                    arr_10 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_0]))) ? ((+(arr_7 [i_0] [i_0] [i_0]))) : (arr_7 [i_0] [i_0] [i_0])))) ? (max((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_7 [i_0] [14LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)6] [(unsigned char)6]))) : (var_17))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned short) max(((-(arr_17 [i_4]))), (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned short) arr_23 [i_6 - 1])))))));
                                arr_25 [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [i_3])) ? (((/* implicit */int) arr_11 [i_7] [3LL])) : (((/* implicit */int) arr_18 [i_3])))))))) : (((/* implicit */int) ((unsigned short) arr_12 [i_3])))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (var_8)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8] [i_5] [i_3] [i_3])) ? (arr_26 [i_3] [i_3] [i_5] [i_8] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [i_8] [i_5] [i_4] [i_4] [i_3])))))) ? (((/* implicit */int) ((unsigned char) arr_27 [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */int) arr_28 [i_4] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3])))))) : (arr_22 [i_3] [i_3] [(unsigned char)13])));
                                var_27 = arr_27 [i_3] [i_3] [i_3] [(unsigned char)15];
                            }
                        } 
                    } 
                    arr_32 [i_3] [i_4] [i_3] = (~(arr_12 [i_3]));
                    var_28 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3]))) : (var_9)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        var_29 += ((/* implicit */unsigned char) arr_14 [i_10] [i_10]);
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_10] [(unsigned char)18] [i_10] [i_10] [i_10])) ? (arr_26 [i_10] [(unsigned char)14] [i_10] [i_10] [i_10]) : (arr_26 [i_10] [(unsigned char)4] [i_10] [i_10] [(unsigned char)0])));
    }
    var_31 = ((/* implicit */unsigned short) var_19);
    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((long long int) var_9))))) ? ((+((+(((/* implicit */int) var_11)))))) : (((/* implicit */int) var_12))));
}
