/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162906
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_2] [7] = ((/* implicit */_Bool) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-38)))))));
                            /* LoopSeq 3 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)138)))), (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_2] [i_3] [i_4]))));
                                var_15 = ((/* implicit */unsigned char) (signed char)35);
                            }
                            for (signed char i_5 = 4; i_5 < 14; i_5 += 4) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [(signed char)0] [(_Bool)1] [i_5])) : ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])))))), (arr_13 [i_2] [i_2] [(unsigned short)5] [i_2] [i_2])));
                                var_17 = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)50042)) & (((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1] [i_5] [i_5])))), ((+(((/* implicit */int) arr_8 [i_2 + 1] [(short)5] [i_3] [(signed char)5]))))));
                                arr_17 [i_0] [i_1] [(unsigned short)4] [i_2] [(unsigned char)4] [i_5] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_3] [i_3]))))) ? (max((arr_6 [i_0] [i_0]), (((/* implicit */long long int) arr_5 [0LL] [i_1] [i_3] [i_5])))) : (((arr_5 [i_3] [i_0] [i_1] [i_3]) ? (arr_6 [i_2 + 1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_1])))))));
                            }
                            for (signed char i_6 = 4; i_6 < 14; i_6 += 4) /* same iter space */
                            {
                                arr_21 [i_6] = ((/* implicit */short) arr_0 [i_6]);
                                var_18 = ((/* implicit */int) max((arr_4 [7] [i_1]), (max((arr_4 [10U] [i_1]), (arr_4 [9] [i_6 - 2])))));
                            }
                        }
                    } 
                } 
                var_19 *= ((/* implicit */long long int) arr_15 [(unsigned char)14] [(unsigned short)10] [i_0] [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_13 [11LL] [11LL] [i_0] [11LL] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)239)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((unsigned char) ((_Bool) (~(4787104539528571341LL)))));
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            {
                var_22 -= ((/* implicit */_Bool) arr_0 [i_7]);
                arr_27 [i_8] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [(short)12] [i_7] [i_7] [i_7])))) == (max((((/* implicit */long long int) arr_22 [i_8])), (1966092637305244921LL))))));
                var_23 -= ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)238))))));
            }
        } 
    } 
}
