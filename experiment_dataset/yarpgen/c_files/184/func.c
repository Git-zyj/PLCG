/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) 5372561611457250276LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [13LL] [i_1]))) : (arr_0 [i_0]))), (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (849927080U) : (776459182U)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 17; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1 + 2] = ((/* implicit */unsigned int) (unsigned char)0);
                    var_15 = ((/* implicit */int) (-(arr_5 [i_0] [i_1 - 2] [i_2])));
                    var_16 += ((/* implicit */_Bool) (+(var_5)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_3 + 1] [i_4 + 1])) ? (arr_10 [12LL] [i_3 + 1] [i_4 + 1]) : (arr_10 [i_1 + 1] [i_1 + 1] [i_4])));
                        arr_13 [i_3] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) arr_12 [i_3]);
                    }
                    for (unsigned char i_5 = 4; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 2; i_6 < 15; i_6 += 4) 
                        {
                            arr_22 [i_6] [i_1] [16LL] |= ((/* implicit */unsigned short) ((arr_16 [i_1 - 2] [i_3 + 1] [i_5 - 1] [i_1]) ? ((~(((/* implicit */int) arr_6 [i_0] [i_1 + 3] [i_6])))) : (((/* implicit */int) arr_16 [i_1 + 3] [i_3 + 1] [i_5 - 3] [i_6]))));
                            arr_23 [i_0] [i_3] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
                            var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1]))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (var_3)));
                        }
                        arr_24 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2] [i_3 - 1] [i_5])) ? (arr_17 [i_0] [i_1] [i_3 + 1] [i_3] [i_5]) : (arr_17 [i_0] [(_Bool)1] [i_3] [i_5] [i_5])));
                    }
                    for (unsigned char i_7 = 4; i_7 < 17; i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_3] [i_3 - 1] [(signed char)6] = ((/* implicit */signed char) 776459182U);
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1])) ? (arr_5 [i_1] [i_1] [i_1]) : (arr_21 [i_1] [i_1])));
                        var_21 = ((/* implicit */_Bool) (~(arr_14 [i_3] [i_1 - 2] [i_3 + 1] [i_3] [i_7 + 1])));
                    }
                    arr_29 [i_3] [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (arr_5 [i_1] [i_3 + 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3])))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
}
