/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168258
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
    var_18 = ((/* implicit */signed char) ((var_5) ? (((((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (var_12)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_19 = ((/* implicit */unsigned long long int) ((var_10) + (((long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)6315)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_17)) | (1152921504606846975ULL))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((arr_12 [i_3] [(signed char)8] [(signed char)8] [6LL]) & (arr_12 [i_3 - 3] [6] [6] [i_1 - 2]))))));
                        var_21 = ((/* implicit */unsigned long long int) (signed char)3);
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) (signed char)127))))) : (14998780549369739210ULL)))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) arr_8 [4] [i_4 + 1] [(short)1] [5U]);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [0] [i_1 - 1])))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        var_25 -= ((/* implicit */long long int) ((arr_19 [i_5] [i_5] [i_1 - 1] [i_1 - 2] [i_1 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        var_26 = ((/* implicit */short) ((unsigned long long int) arr_15 [i_0] [0LL] [i_2] [i_1 - 1]));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [6LL] [i_0] [(signed char)4])) >> (((arr_3 [i_1 - 2] [i_1] [i_1]) + (7152602672338371257LL)))))) ? ((~(((/* implicit */int) (unsigned short)11565)))) : (((/* implicit */int) var_16)))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [i_1] [5U] [i_6] = var_17;
                        arr_23 [8ULL] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_15 [i_1 + 1] [i_1 - 2] [i_2] [i_1 + 1])) / (var_13)));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [(short)6] [i_1 - 2] [i_2] [(short)10] [i_6])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_2] [i_6]))));
                    }
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (unsigned char)192)) % (((/* implicit */int) var_4)))));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_16)) ? (1152921504606846975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [10U] [(short)4] [(short)4] [i_0]))))))))));
    }
}
