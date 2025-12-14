/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180957
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
    var_16 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_2)), (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_6)) : (var_11))), (var_14)))));
    var_17 = ((/* implicit */unsigned long long int) (+(((var_11) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (272554025U))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) arr_4 [(signed char)2] [(_Bool)1] [(_Bool)1]);
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(arr_3 [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) ? (((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) : (max((9ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])))))) : (((min((0ULL), (((/* implicit */unsigned long long int) var_1)))) >> (((/* implicit */int) arr_1 [i_0] [0ULL]))))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((((arr_2 [i_1] [7]) * (max((arr_3 [(signed char)8]), (((/* implicit */unsigned int) var_4)))))), ((-(arr_2 [i_0] [i_0]))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
            {
                var_20 *= ((/* implicit */_Bool) ((unsigned char) arr_6 [i_2 + 1]));
                var_21 = ((/* implicit */unsigned long long int) arr_10 [i_0]);
            }
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) /* same iter space */
            {
                arr_13 [i_0] [i_4 + 1] [i_4 + 1] = ((/* implicit */_Bool) (+(arr_10 [i_0])));
                var_22 -= ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_12 [(unsigned char)4]))))));
                arr_14 [i_0] = (((+(arr_4 [10U] [i_2 - 1] [i_2]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))) : (arr_10 [i_0])));
            }
            for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_5 + 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (var_3)))) ? (((/* implicit */int) arr_12 [(_Bool)1])) : (((/* implicit */int) arr_17 [i_2 + 1])))))));
                var_24 = ((/* implicit */unsigned char) (~(((arr_2 [i_2] [(unsigned char)0]) | (arr_3 [i_0])))));
                arr_19 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
            }
            for (int i_6 = 1; i_6 < 8; i_6 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) arr_21 [i_0] [i_6] [i_0] [i_0]);
                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_0] [i_2] [i_6 - 1] [i_2 - 1])))))));
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_6 - 1] [i_6 - 1] [i_2 - 1])) ? (arr_4 [i_2] [i_2 + 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_6 - 1])))));
                arr_23 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
            }
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_2 - 1] [8LL] [i_0] [i_2])))))));
        }
        var_28 -= ((/* implicit */_Bool) (+((~((+(arr_10 [(unsigned char)8])))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                {
                    var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_27 [i_0] [i_7] [(unsigned char)0] [i_0]) <= (((/* implicit */long long int) arr_3 [(unsigned char)4]))))) + ((~(((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_7]) ? (arr_8 [i_7] [i_0]) : (((/* implicit */int) arr_16 [i_0] [(signed char)6] [4LL]))))) ? (arr_3 [8U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [10U] [i_7])))))) : (max((((arr_6 [i_7]) & (arr_27 [i_0] [i_0] [10ULL] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [(unsigned char)0])) ? (((/* implicit */int) arr_9 [3LL])) : (((/* implicit */int) arr_0 [i_0])))))))));
                    var_30 = ((/* implicit */int) (-(((((/* implicit */long long int) (-(arr_8 [i_0] [i_7])))) * (((var_3) / (arr_27 [4] [i_7] [4] [4])))))));
                    arr_29 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), ((+(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_8]))))));
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) (-(arr_8 [i_0] [i_0])));
    }
}
