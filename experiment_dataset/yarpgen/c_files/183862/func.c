/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183862
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
    var_11 = var_0;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 2])) ? (((/* implicit */int) (unsigned short)62321)) : (((/* implicit */int) (signed char)7))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) | (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_3)) ? (16690846109579674640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    arr_13 [i_4] [i_4] [i_0] = ((/* implicit */short) var_6);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                                arr_20 [i_0] [i_0] [i_4] [i_0] [i_0] [i_4] = ((signed char) arr_5 [i_4]);
                                arr_21 [i_0] [i_5] [i_4] [i_3] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((arr_10 [i_0]) + (2147483647))) << (((((arr_10 [i_0]) + (2131979716))) - (18)))))) : (((/* implicit */short) ((((((arr_10 [i_0]) - (2147483647))) + (2147483647))) << (((((((((arr_10 [i_0]) - (2131979716))) - (18))) + (964122704))) - (27))))));
                                arr_22 [0U] [i_5] [i_0] [(unsigned char)22] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)177))));
                                arr_23 [5ULL] [i_0] [i_0] [(short)16] [(short)16] [i_5] [i_5] = ((/* implicit */signed char) ((var_2) & (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)64)) ? (((/* implicit */int) (unsigned short)24096)) : (((/* implicit */int) (signed char)-8))));
    var_13 = ((/* implicit */short) min((((((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3))) | (((/* implicit */long long int) ((4217478608U) >> (((77488688U) - (77488666U)))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_2)) ? (-512) : (((/* implicit */int) var_8)))))))));
}
