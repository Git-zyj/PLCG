/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100627
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
    var_17 = ((/* implicit */unsigned int) 3585635700059533463LL);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) (unsigned short)65024);
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((int) min((((/* implicit */unsigned int) arr_2 [i_2 - 2] [i_3] [i_3])), (1828397780U)))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_0 [i_2 + 2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1])) > (((/* implicit */int) arr_2 [i_2 - 3] [i_2 - 3] [i_2 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1])) + (arr_1 [i_0] [i_2])))))))));
                        var_21 = ((/* implicit */short) ((unsigned char) (+(((((/* implicit */int) (short)3838)) & (((/* implicit */int) (unsigned short)512)))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_11 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0] [(signed char)14] [(_Bool)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1]))))) : ((-(((/* implicit */int) var_9))))));
                        var_22 = ((/* implicit */unsigned char) 9721829203852178940ULL);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((4611686018427387903LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_7)))))));
                                arr_19 [i_0] [i_0] [i_2] [i_2] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_6]))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) arr_14 [i_6] [i_0] [i_5] [(signed char)10] [i_0] [i_0]))))) > (min((arr_7 [i_2 - 3] [i_0] [i_2 - 3] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_15))))))) != (((/* implicit */int) arr_17 [i_0])))))));
                                arr_20 [1LL] [i_2] [i_2] [i_5] [i_5] = ((/* implicit */signed char) (short)18549);
                            }
                        } 
                    } 
                    arr_21 [i_2 - 1] [i_2] [i_0] [i_2 - 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 9385533135265397818ULL)) && (((/* implicit */_Bool) arr_1 [i_0] [i_2 - 2])))) || ((!(((/* implicit */_Bool) var_3))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        var_24 &= ((/* implicit */short) arr_5 [i_0]);
                        arr_25 [i_0] [(signed char)16] [i_2] [(short)12] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_0] [i_1] [i_2 + 2] [i_1] [i_1] [i_1]))) ? (((((/* implicit */_Bool) arr_2 [i_2 + 3] [i_2 - 2] [i_2 + 3])) ? (((/* implicit */int) arr_2 [i_7] [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) arr_2 [i_2] [i_2 - 3] [i_2 - 1])))) : (((/* implicit */int) ((signed char) 1474189323U)))));
                        var_25 &= ((/* implicit */unsigned long long int) (~(((arr_24 [i_0] [i_2 - 3] [i_7] [i_0] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)14)))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) 1828397787U);
    var_27 = ((/* implicit */unsigned char) var_5);
}
