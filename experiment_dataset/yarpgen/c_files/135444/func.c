/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135444
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) var_6)), ((+(((/* implicit */int) var_1))))))), (min((max((((/* implicit */unsigned int) arr_0 [i_0])), (3792515225U))), (((/* implicit */unsigned int) var_12))))));
                    var_20 = ((/* implicit */int) 3792515217U);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(arr_7 [i_2]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1 - 1] [i_1 - 1] [i_3] [i_4] [i_3]))) < (arr_1 [(unsigned short)8])))))))) ? (((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [(_Bool)1] [i_3] [19ULL] [i_4] [(_Bool)1])) : (min((arr_4 [i_3]), (((/* implicit */unsigned long long int) (-(arr_13 [i_0] [(unsigned char)3] [i_0] [(unsigned short)11] [0U]))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_0] [i_2] [(signed char)20] [i_0])) ? (min((max((3792515225U), (3792515225U))), (((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_2] [i_4])) ? (502452065U) : (((/* implicit */unsigned int) var_2)))))) : ((+(var_16)))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */signed char) min((502452071U), (min((((((/* implicit */_Bool) var_10)) ? (arr_5 [i_2] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0]))))), ((~(arr_5 [i_0] [i_0] [i_0] [i_0])))))));
                }
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 19; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 20; i_7 += 1) 
                        {
                            {
                                arr_21 [i_7 - 1] [i_6] [i_6 + 3] [i_1 + 3] [i_1 + 3] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((3792515243U), (3792515243U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 502452068U)) ? (var_2) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))) % (502452068U)));
                                var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 502452068U)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_18 [i_7] [i_6 - 3] [i_1 + 1] [i_1 + 1]))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (3792515227U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_0])))))))), (((unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_22 [i_0] [(unsigned char)20] [(signed char)4] [i_0] [i_7] [i_0] [i_7 + 1] = ((/* implicit */unsigned long long int) min((arr_7 [i_0]), (3792515210U)));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 502452071U))))))) ^ (max((((/* implicit */unsigned long long int) (~(502452068U)))), (((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_0] [i_1 + 1] [i_0] [i_0] [(unsigned char)16])) ? (arr_16 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 502452080U))))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_1] [i_0] [i_0]))) > (arr_16 [i_0] [i_1] [i_1] [i_5]))))) | (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_12 [i_0] [(signed char)19] [i_1] [i_5] [i_5] [i_5]))))) ? (arr_10 [(_Bool)1] [i_1] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_8]))))), (((unsigned long long int) arr_9 [i_1] [i_5] [i_1] [i_9]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (502452070U))))))) : ((-((~(((/* implicit */int) var_10))))))));
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (var_0)))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) arr_26 [i_0] [i_0] [i_0] [i_8] [i_8] [i_8]))))) : ((+(((/* implicit */int) var_1))))))) & (((((/* implicit */_Bool) (+(502452063U)))) ? (arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [15U] [i_9])) ? (((/* implicit */int) arr_18 [(unsigned char)15] [i_1] [i_5] [i_8])) : (arr_23 [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 3; i_10 < 21; i_10 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */int) var_10)), (var_2)))), (((long long int) 502452075U))));
                    var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (((arr_17 [i_0] [i_0] [i_0] [i_0]) & (arr_17 [i_0] [i_0] [i_0] [i_0])))))) ? (min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_1 + 2] [i_1 + 3])) : (502452066U))), (var_4))) : (min((502452075U), ((+(arr_5 [i_1] [i_1] [i_1] [(_Bool)1])))))));
                    var_31 = ((/* implicit */long long int) arr_11 [(_Bool)0] [i_10] [i_10] [i_0] [i_0] [i_0]);
                }
                arr_29 [i_0] [17LL] = ((/* implicit */unsigned short) var_1);
            }
        } 
    } 
    var_32 ^= ((/* implicit */signed char) var_4);
}
