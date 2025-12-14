/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102454
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) max((((arr_5 [i_0]) ? (((((/* implicit */_Bool) arr_0 [(signed char)4] [11])) ? (((/* implicit */unsigned long long int) arr_0 [(signed char)12] [(signed char)8])) : (arr_3 [i_1] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)10] [i_1] [i_0 + 4]))))), (((((/* implicit */_Bool) ((arr_5 [(_Bool)1]) ? (((/* implicit */int) arr_5 [(signed char)13])) : (arr_0 [(_Bool)0] [(_Bool)0])))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (arr_7 [(_Bool)1] [i_0] [i_0] [15ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)12]))) : (arr_3 [(unsigned char)6] [i_2 + 1])))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_4 [i_0] [(signed char)13] [(signed char)13]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_1] [i_1] [i_1] [i_1] [i_0])))) : (((unsigned long long int) arr_6 [i_0 + 1] [i_1] [i_2 + 2]))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_7 [i_0] [i_1] [i_1] [i_3 - 1]))) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) ((_Bool) arr_9 [i_0] [i_1] [i_2] [i_3 - 1] [(signed char)5] [i_1]))))) : (((((/* implicit */_Bool) ((signed char) arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [(_Bool)1] [(short)1] [i_0]))) ? (((/* implicit */int) ((short) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (((/* implicit */int) arr_6 [i_2 - 2] [i_1] [i_0])))));
                        arr_10 [i_0] [i_0] [i_2 - 1] [i_3] [i_2 - 1] [i_3] = ((/* implicit */unsigned char) arr_5 [i_0 - 2]);
                        arr_11 [i_0 - 1] [i_3] [(unsigned char)11] [i_3] = ((/* implicit */_Bool) arr_7 [(signed char)3] [i_2] [i_2] [i_3 - 1]);
                    }
                }
                for (short i_4 = 2; i_4 < 14; i_4 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_0] [i_1] [i_1] [i_4]), (arr_2 [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 4; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_20 [(_Bool)1] [i_1] [i_6] [(signed char)13] [i_6] [(unsigned char)8] = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [(unsigned char)6] [i_5] [i_6] [i_1]);
                                var_23 = min((((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1] [i_5] [i_6] [(unsigned char)15])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)90)) ? (-1019998484) : (((/* implicit */int) arr_8 [i_0] [i_6] [i_6] [i_4] [i_6]))))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_4] [i_4 - 1] [(unsigned char)9] [i_6])) ? (arr_7 [i_0] [i_4] [i_5] [i_5]) : (arr_7 [(signed char)8] [(signed char)8] [(signed char)8] [i_6]))) : (arr_13 [i_6]))));
                                var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_5 - 3] [i_4]))) : (arr_13 [i_5]))))) : (((/* implicit */int) arr_6 [i_4] [i_5] [i_6]))));
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 1; i_7 < 14; i_7 += 4) 
                {
                    var_25 = ((/* implicit */signed char) min((11ULL), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
                    arr_23 [14U] = ((/* implicit */unsigned short) ((unsigned long long int) arr_14 [i_1] [(_Bool)1]));
                    var_26 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((signed char) arr_0 [i_7 + 2] [i_1]))) ? (((/* implicit */int) arr_17 [(unsigned short)10])) : (((/* implicit */int) min((arr_9 [i_0] [i_0] [i_0] [(signed char)1] [(unsigned short)3] [i_7 - 1]), (((/* implicit */signed char) arr_8 [(_Bool)1] [(_Bool)1] [i_7] [i_7] [i_7 + 1]))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 3) 
                    {
                        {
                            arr_28 [i_0] [i_1] [i_8 - 1] = arr_26 [(_Bool)1] [(signed char)2] [i_8] [i_9];
                            arr_29 [(signed char)3] [i_0 - 2] [i_0 - 2] = arr_15 [i_9] [i_1] [i_1] [i_0];
                            arr_30 [i_9] [(signed char)10] [i_8] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned char) arr_15 [i_8 - 1] [i_1] [i_8] [i_1]));
                        }
                    } 
                } 
                var_27 -= ((signed char) ((arr_8 [i_0] [i_1] [i_1] [i_0 + 1] [i_1]) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (max((((/* implicit */unsigned long long int) arr_18 [(signed char)4] [i_0] [i_0] [i_0 + 3] [i_0] [i_1])), (arr_7 [i_0] [i_0 + 2] [i_0] [i_0 + 2])))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_5))));
    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))));
    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_4)))) ? (((/* implicit */int) min((((signed char) var_17)), (((/* implicit */signed char) ((_Bool) var_16)))))) : (((/* implicit */int) var_14))));
    var_31 = ((/* implicit */unsigned long long int) ((signed char) ((signed char) var_8)));
}
