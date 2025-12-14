/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147807
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) var_2);
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (signed char)-59)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_19))))) ^ (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_1])) ? (((/* implicit */int) (signed char)-49)) : (arr_1 [i_2]))) | ((~(arr_1 [12]))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        var_21 -= (_Bool)1;
                        var_22 &= min((((/* implicit */long long int) var_13)), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-74))))), (((long long int) 1077443665U)))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 3; i_4 < 24; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_4] [i_4 - 1] [i_1] = ((/* implicit */signed char) (((-(arr_5 [i_1] [i_0] [i_1]))) == (((/* implicit */long long int) arr_2 [i_1] [i_1 - 1] [i_4 - 2]))));
                        var_23 = ((/* implicit */long long int) min((var_23), (var_8)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_23 [i_0] [i_1 - 1] [i_1] [i_5] [0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (signed char)-12)), (3619299189U))), (((/* implicit */unsigned int) (signed char)31))))) ? (((((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (signed char)41)))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (signed char)58)))))) : (((/* implicit */int) var_15))));
                                var_24 += ((/* implicit */unsigned int) ((signed char) var_7));
                                var_25 ^= min((max((4671535402530667950LL), (((/* implicit */long long int) 814723193U)))), (arr_11 [i_0] [i_0] [i_2 + 2] [i_5] [i_2]));
                                var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))) : (((var_19) / (var_19))))), ((-(((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */long long int) -1247233449)) : (arr_11 [i_0] [i_0] [i_2] [i_5] [i_1])))))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2773184244710319153LL)) ? (((((/* implicit */_Bool) 450535395)) ? (((/* implicit */int) (signed char)58)) : (-1551035647))) : (((/* implicit */int) arr_3 [i_5] [i_5]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)57)) ? (-1551035647) : (-1551035647)))) : (((((/* implicit */_Bool) min((((/* implicit */short) arr_18 [i_0] [i_1 - 1] [(signed char)16])), (var_5)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_1)) ? (-4671535402530667951LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((signed char) max((((/* implicit */long long int) arr_22 [i_2 - 1] [(signed char)13] [i_1 - 1] [i_0] [i_0])), (((var_9) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-79)))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_7 = 3; i_7 < 21; i_7 += 2) 
    {
        arr_27 [i_7] = ((var_14) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (var_9))))));
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [18U] [i_7 - 3] [(signed char)2] [24LL] [(signed char)2])) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) -4671535402530667950LL)) ? (-788653235361454952LL) : (((/* implicit */long long int) arr_22 [(_Bool)1] [i_7 + 2] [(_Bool)1] [i_7] [(_Bool)1]))))));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((((/* implicit */int) (signed char)-113)) + (2147483647))) << (((/* implicit */int) var_10)))))));
    }
    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (_Bool)0))));
        var_32 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [2LL] [i_8] [i_8] [i_8] [i_8] [20LL]))))) <= (((/* implicit */int) var_7))));
    }
    for (long long int i_9 = 1; i_9 < 21; i_9 += 1) 
    {
        arr_34 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((min((((/* implicit */unsigned int) (signed char)116)), (1608189667U))) - (102U)))))) ? (max((((/* implicit */long long int) min((var_12), (((/* implicit */short) var_13))))), (4671535402530667950LL))) : (((((/* implicit */_Bool) 3479046962U)) ? (4183682037106749627LL) : (((/* implicit */long long int) 1551035656)))));
        var_33 = ((/* implicit */short) var_17);
        var_34 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)57)) <= (((/* implicit */int) (short)-27939))));
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                {
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (signed char)-5)))) ? ((+(var_9))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (arr_10 [i_9 + 3] [i_9 + 2] [i_9] [8LL]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)69)) > ((-(((/* implicit */int) var_12))))))))));
                    arr_39 [i_9 + 3] [(signed char)10] [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_13 [i_9 + 1] [i_9] [i_11])) ? (((/* implicit */int) arr_13 [i_9 + 2] [i_9] [i_11])) : (((/* implicit */int) arr_13 [i_9 - 1] [i_9] [i_9])))), (((/* implicit */int) var_15))));
                    arr_40 [i_9] [i_10] [(signed char)17] [3LL] = ((max((var_9), (((/* implicit */long long int) var_4)))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))));
                }
            } 
        } 
    }
}
