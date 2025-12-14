/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146369
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
    var_16 = var_4;
    var_17 = ((/* implicit */long long int) var_14);
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_15)), (var_14))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 - 2]);
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) var_2)))));
        var_19 = ((/* implicit */unsigned long long int) min((arr_1 [i_0]), (min((((/* implicit */unsigned int) arr_0 [i_0 - 1])), (((((/* implicit */unsigned int) arr_0 [i_0])) | (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) (+(((((/* implicit */int) var_13)) | ((+(((/* implicit */int) var_1))))))));
                    var_21 *= ((/* implicit */unsigned long long int) min(((unsigned short)54424), (((/* implicit */unsigned short) (signed char)60))));
                }
            } 
        } 
    }
    for (signed char i_3 = 2; i_3 < 9; i_3 += 3) /* same iter space */
    {
        var_22 &= var_8;
        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
        var_24 = ((/* implicit */unsigned char) min((2061116926820295924ULL), (((/* implicit */unsigned long long int) -6055668253224898657LL))));
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 8; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1]))))), (var_14)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 8; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                            arr_22 [i_3] [i_4] [i_4] [i_5] [(signed char)1] [i_7] = ((/* implicit */unsigned short) (-(((arr_14 [4U]) + (var_11)))));
                            var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_28 = var_13;
                            var_29 = ((/* implicit */int) var_7);
                            var_30 = ((/* implicit */unsigned int) ((signed char) ((arr_12 [i_8] [i_4 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8] [i_6] [i_5] [i_3] [i_3] [i_3] [i_3]))))));
                            var_31 = ((/* implicit */short) ((arr_24 [4ULL] [i_3] [i_3 + 1] [i_3 - 1] [i_6 + 2] [i_8]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        }
                        var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
                        var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                    }
                    /* vectorizable */
                    for (signed char i_9 = 2; i_9 < 8; i_9 += 2) /* same iter space */
                    {
                        arr_29 [i_4] = ((/* implicit */_Bool) ((unsigned long long int) var_8));
                        var_34 = ((/* implicit */unsigned short) arr_5 [i_3 - 2] [i_3 - 2] [i_3 - 1]);
                    }
                    for (signed char i_10 = 2; i_10 < 8; i_10 += 2) /* same iter space */
                    {
                        arr_33 [i_10] [i_3] [i_4 - 2] [i_4 - 2] [i_3] = ((/* implicit */long long int) min(((signed char)60), (arr_18 [i_5] [i_10] [i_5] [i_10] [i_4])));
                        arr_34 [2ULL] [i_4 - 1] [2ULL] [i_10] [i_4] &= ((/* implicit */short) arr_11 [i_3]);
                        var_35 = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_20 [i_3] [i_4]) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                    }
                    var_36 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)-49)), (arr_27 [i_5] [i_4] [i_4] [i_3 + 1])));
                }
            } 
        } 
    }
}
