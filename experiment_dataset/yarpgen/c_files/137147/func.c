/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137147
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
    var_11 = ((/* implicit */unsigned long long int) ((var_7) ? (max((max((((/* implicit */int) var_8)), (2147483647))), (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)253)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551598ULL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_7))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_13 |= arr_4 [i_0] [i_1] [i_0] [i_0];
                var_14 = arr_3 [(unsigned char)24] [i_2] [i_2];
                arr_6 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_2]);
            }
            for (int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned char) arr_1 [i_0]);
                arr_9 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) 16971055518678219036ULL);
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_1]))));
                arr_11 [i_0] [i_0] [i_3] |= var_1;
            }
            for (int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
            {
                var_16 = var_9;
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) : (12ULL)));
                            arr_18 [i_0] [i_1] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_8)) : (arr_12 [i_0] [i_4] [i_5] [i_6])));
                            arr_19 [i_5] [i_1] [i_4] [22] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                            var_18 = ((/* implicit */int) 18446744073709551585ULL);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 21; i_7 += 2) 
            {
                for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    {
                        arr_26 [9ULL] [i_7] [i_1] [i_0] = ((/* implicit */int) arr_22 [(_Bool)1] [i_1] [i_1] [i_0]);
                        var_19 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    }
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 3; i_10 < 23; i_10 += 2) 
            {
                var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_9] [(unsigned char)5] [i_10])) ? (arr_12 [i_0] [i_0] [i_9] [i_10]) : (((/* implicit */int) var_7))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (arr_28 [i_0] [i_9] [i_10])));
            }
            for (unsigned long long int i_11 = 3; i_11 < 22; i_11 += 2) 
            {
                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483640)) ? (((/* implicit */int) arr_22 [(_Bool)1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_9] [i_11] [i_11 + 3]))));
                arr_34 [i_0] [i_9] [i_11 + 2] = arr_4 [i_9] [i_9] [i_11] [i_0];
            }
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_32 [(unsigned char)15] [i_9] [(_Bool)1] [i_9])))))))));
            var_24 *= ((/* implicit */unsigned char) (_Bool)1);
        }
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) 2147483636);
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            {
                                var_27 -= ((/* implicit */int) ((unsigned long long int) (~(var_10))));
                                var_28 ^= (+(((((/* implicit */_Bool) arr_28 [i_0] [i_13] [i_14])) ? (((/* implicit */int) var_8)) : (var_0))));
                            }
                        } 
                    } 
                    arr_46 [i_0] &= ((/* implicit */unsigned char) -2147483639);
                }
            } 
        } 
    }
    var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */int) var_9)), (1797502244))) : (((/* implicit */int) (_Bool)1))));
}
