/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168503
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_11 [i_0] [i_3] [i_0] [i_1 + 1] [i_0] [i_0] [i_0]))));
                            arr_12 [i_4 - 1] [i_4] [i_3] [i_0] [(unsigned char)6] [i_1 + 1] [i_0] &= ((/* implicit */unsigned char) arr_7 [i_4] [i_4] [i_4 - 1]);
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (_Bool)1))));
                        }
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_4 [i_2] [i_2]))))));
                            var_20 -= ((((/* implicit */int) arr_2 [i_5] [i_1 + 1])) < (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])));
                            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_0]))));
                        }
                        var_22 = ((arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1]) || (((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_1])));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((arr_14 [i_1 + 1] [(signed char)17]), (arr_14 [i_1 + 1] [i_1])))), ((~(arr_10 [i_6 - 1] [i_1 + 1] [i_6 - 1] [(_Bool)1] [i_1 + 1] [i_0])))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3614005007163417240ULL)) || ((((+(var_16))) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6 - 1] [i_1 + 1] [(_Bool)1])))))));
                    }
                    arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                arr_22 [i_8] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) >= (arr_11 [i_1] [i_7] [i_2] [i_2] [(signed char)22] [i_0] [i_1])));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_10 [i_1 + 1] [i_1 + 1] [i_1] [9ULL] [i_1 + 1] [i_1 + 1]))) ? (max((-8954885308852410745LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_7] [i_2] [13ULL] [i_1 + 1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))))) : (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_5 [(_Bool)1] [i_1]))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) min((8048391973728494534ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_11 = 1; i_11 < 17; i_11 += 4) 
                {
                    var_27 += ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) arr_20 [i_11 - 1] [(_Bool)1] [i_11 + 3] [i_9 - 1] [(_Bool)1] [(_Bool)1] [i_9 - 1])))));
                    arr_29 [i_9] [i_9] = ((/* implicit */long long int) (signed char)5);
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            {
                                arr_35 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) arr_0 [i_9 - 1])) * (((/* implicit */int) arr_32 [i_9 - 1] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))) : (((/* implicit */int) (_Bool)1))));
                                arr_36 [i_13] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_16 [i_13] [i_11] [i_11]);
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))) : (3456888643631515449ULL)));
                var_29 = ((/* implicit */_Bool) (-(((arr_25 [i_9] [i_9]) ? (((/* implicit */int) arr_25 [i_9] [i_9])) : (((/* implicit */int) (signed char)-90))))));
            }
        } 
    } 
}
