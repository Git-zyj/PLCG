/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119707
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_19))))), (var_4)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 += ((/* implicit */_Bool) var_1);
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) -2051748582);
                arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_2 [(short)1]);
                arr_7 [8] [i_1 + 4] [i_1 + 4] = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopSeq 4 */
                for (int i_2 = 3; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    arr_10 [i_0] &= ((/* implicit */unsigned char) arr_9 [i_0] [i_2 - 2] [(short)0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [7U])) - (((/* implicit */int) var_18))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_4)))) ? (-1795463845) : (791629483))))));
                    }
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */_Bool) 2051748582);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_20 [i_6 - 1] [10U] [i_6 - 1] [i_5] [i_6] [i_6 - 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_4 + 2] [i_1 + 4])) <= (((/* implicit */int) arr_8 [i_4 - 1] [(unsigned char)9]))));
                                var_25 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_6 - 2] [i_1] [i_1 + 4]))));
                                arr_21 [i_0] [i_1] [i_5] [15] |= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)32766))));
                            }
                        } 
                    } 
                    var_26 &= ((/* implicit */short) arr_2 [i_0]);
                }
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_1] [i_7] [i_7])) || (((/* implicit */_Bool) (~(arr_17 [i_0] [15ULL] [i_0])))))) ? (((((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) var_6)))) + (2147483647))) << (((((/* implicit */int) arr_9 [i_0] [i_1] [i_7])) - (80))))) : (((((var_14) && (((/* implicit */_Bool) 1163208626U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_16))))));
                    var_28 = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                }
                /* vectorizable */
                for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_10 - 1] [i_8] [i_9])) ? (((/* implicit */int) arr_14 [i_0] [i_10 - 1] [i_0] [i_9])) : (((/* implicit */int) (_Bool)1))));
                                arr_33 [i_0] [(unsigned short)6] [i_8] [i_9] [i_10] [i_9] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_9] [i_1] [i_9] [i_8 + 1] [i_10 - 1] [i_9] [18ULL]))));
                                arr_34 [i_0] [i_9] [i_8 + 3] [i_9] [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_1 + 2] [i_8 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))) : (arr_15 [i_1 + 1] [i_8 + 3])));
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_1] = ((/* implicit */unsigned int) arr_29 [i_1] [i_0] [i_0] [i_8] [i_8] [i_1 - 3]);
                    arr_36 [i_1 + 3] [i_1] [i_1 + 3] [i_0] = ((/* implicit */unsigned long long int) var_9);
                    arr_37 [i_8] [i_1] [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                }
            }
        } 
    } 
    var_30 -= ((/* implicit */unsigned short) var_9);
}
