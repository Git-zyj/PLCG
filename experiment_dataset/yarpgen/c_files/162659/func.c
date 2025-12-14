/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162659
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                        {
                            var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0 - 1] [i_2] [i_2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_2]) : (arr_2 [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(short)6])) ? (((/* implicit */int) (unsigned short)41828)) : (((((/* implicit */int) arr_11 [i_1] [i_1] [(_Bool)1] [i_3] [i_4])) | (((/* implicit */int) var_6)))))))));
                            arr_13 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 718021550U)) ? (arr_8 [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) var_10))));
                        }
                        for (int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) var_9)) == (arr_2 [i_0]))))));
                            arr_16 [i_0] = ((/* implicit */int) var_1);
                            var_14 += ((/* implicit */short) (_Bool)1);
                            var_15 = min((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_5 [i_1]));
                            var_16 = ((/* implicit */unsigned int) var_9);
                        }
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            var_17 = arr_17 [i_0];
                            var_18 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_7 [i_2] [i_0] [i_0] [i_2]));
                            arr_19 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */long long int) (_Bool)0);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_1] [i_1] [i_0 - 1] [8])) ? ((+((+(arr_17 [i_0]))))) : (((/* implicit */int) (unsigned char)148))));
                            arr_20 [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_1] [(signed char)8] [1] [i_0 - 1] [i_6])) ? (((((/* implicit */_Bool) arr_10 [i_3 - 1] [0U] [i_2] [i_3] [i_0 - 1] [12])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (max((arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_0 - 1] [(unsigned short)1]), (arr_10 [i_3 - 1] [19ULL] [i_2] [i_3] [i_0 - 1] [10])))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) var_8);
                            arr_23 [i_0] [i_3] = ((((arr_8 [i_3 - 1] [i_0 - 1]) != (((/* implicit */unsigned long long int) arr_3 [(_Bool)0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7] [i_0] [i_0])))))) : (arr_5 [i_1]));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    arr_31 [i_0] = min(((!(((/* implicit */_Bool) arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) >= (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) var_9)))))));
                    var_21 = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0))))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))) / (min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10)))))));
}
