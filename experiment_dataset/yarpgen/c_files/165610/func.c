/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165610
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned int) max((min((((/* implicit */signed char) ((arr_0 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (max((var_0), (arr_2 [i_1]))))), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_1 [(_Bool)1]))) || (((/* implicit */_Bool) arr_1 [i_0])))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) min((arr_1 [(short)2]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_3 [i_1] [i_1] [i_0])))))))));
                var_10 = ((/* implicit */unsigned short) (+(arr_0 [i_0])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
        {
            arr_10 [i_2] [2LL] [i_3] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_7 [1])))))) <= (max((var_1), (((/* implicit */unsigned int) var_6)))))));
            var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_7 [7LL])))))))), (((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_1))))) ? (((arr_9 [i_2] [i_2] [(signed char)9]) << (((((/* implicit */int) var_9)) - (100))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
            {
                arr_13 [i_2] [i_3] [i_4] [12U] = ((/* implicit */signed char) ((long long int) ((unsigned char) arr_7 [i_2])));
                var_12 = ((/* implicit */signed char) (-(((long long int) arr_11 [i_4]))));
                arr_14 [(_Bool)1] [0U] [i_3] [i_2] = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) : (arr_6 [1U] [0LL]))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) != (arr_11 [i_2])))))), (((/* implicit */unsigned int) max((((/* implicit */signed char) arr_7 [3ULL])), (((signed char) arr_12 [(_Bool)1])))))));
                arr_15 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((long long int) arr_7 [(unsigned char)11])) * (var_3))))));
                var_13 = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */long long int) arr_1 [i_2])), ((-(arr_11 [i_2]))))));
            }
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((~(arr_3 [i_2] [i_3] [i_5]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_2] [(unsigned short)4] [i_2]))))))))));
                        arr_26 [(unsigned char)8] [i_6] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) var_9)), (((arr_16 [i_5]) + (((((/* implicit */_Bool) arr_2 [i_2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)13])))))))));
                    }
                    for (long long int i_8 = 3; i_8 < 14; i_8 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(arr_16 [i_3]))), (((/* implicit */long long int) arr_21 [(unsigned short)6] [i_3] [i_5] [(unsigned short)8] [i_8 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (max((arr_29 [i_6] [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 3] [i_8 - 1]), (arr_29 [i_2] [i_8 + 1] [i_8 - 1] [i_8 - 2] [12ULL] [i_8 - 3])))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_8 - 1] [i_5] [i_8 - 3] [i_8 - 1] [i_8])) * (((/* implicit */int) arr_21 [i_2] [12U] [i_5] [(unsigned short)0] [(unsigned char)2]))));
                        arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) 2953571911U)));
                    }
                    var_17 = ((/* implicit */_Bool) arr_0 [i_2]);
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    var_18 = ((/* implicit */int) var_4);
                    arr_34 [(_Bool)1] [(_Bool)1] [i_5] [i_5] [i_9] = ((/* implicit */unsigned char) ((_Bool) arr_23 [i_2] [i_5] [i_5] [i_9] [i_9]));
                    var_19 = ((/* implicit */unsigned int) var_9);
                    arr_35 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_27 [i_2] [(_Bool)1] [1LL] [i_5] [9LL]))) ? ((-(((/* implicit */int) (unsigned short)30141)))) : (((/* implicit */int) (_Bool)0))));
                }
                arr_36 [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) ((long long int) ((arr_17 [i_2] [i_3] [4]) >= (arr_17 [i_2] [i_3] [i_5]))));
            }
        }
        for (short i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
        {
            var_20 = (~(arr_24 [i_2] [i_10] [i_10] [(signed char)4] [i_10]));
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_9)), (arr_22 [8U] [i_10] [(unsigned short)9] [i_10]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [2LL] [9LL])) << (((var_1) - (4278813797U)))))))))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_5))));
        }
        arr_40 [13] [i_2] = ((/* implicit */unsigned int) max(((~(arr_24 [i_2] [i_2] [(signed char)1] [i_2] [i_2]))), (((/* implicit */long long int) ((unsigned short) var_5)))));
    }
    var_23 = ((/* implicit */_Bool) ((unsigned char) ((max((var_1), (((/* implicit */unsigned int) (unsigned short)36430)))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
    var_24 = ((/* implicit */long long int) ((unsigned short) (_Bool)0));
}
