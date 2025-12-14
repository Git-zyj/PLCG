/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139438
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
    var_18 = ((/* implicit */short) -7275462437896745225LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) min((-3453564850675596943LL), (((/* implicit */long long int) arr_1 [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) arr_13 [i_4]);
                                var_21 = ((/* implicit */unsigned char) var_5);
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_1] [i_4] &= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 + 1])) < (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                var_22 = ((/* implicit */unsigned long long int) var_0);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_23 += ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) (short)48)) - (-1831980986)))) ? (((((/* implicit */int) (short)3385)) + ((-2147483647 - 1)))) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((unsigned short) var_2)))));
                        var_24 = ((/* implicit */long long int) var_17);
                        arr_20 [i_5] [i_2] [9LL] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_5] [i_0] [i_0]), (var_17)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)30345))) : (var_13))) : (((/* implicit */long long int) max((((((/* implicit */int) var_15)) & (((/* implicit */int) var_17)))), (arr_13 [i_0]))))));
                        arr_21 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_6))))))) * (((/* implicit */int) min((((signed char) arr_18 [i_5] [(short)9] [i_1] [i_0])), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (-7275462437896745230LL) : (arr_3 [i_2]))) > (((/* implicit */long long int) var_6))));
                            var_26 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_6] [i_5] [i_1] [i_1] [i_0]))));
                        }
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_1] [i_2] [8] [i_7] [6LL] &= ((/* implicit */signed char) max((max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)28))))), (max((((/* implicit */long long int) var_10)), (7275462437896745223LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_16)))) ? (((/* implicit */unsigned int) arr_13 [i_0 + 1])) : (max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_24 [i_7] [i_7] [i_5] [i_5] [i_2] [i_1] [i_0]))))))));
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_8 [i_1] [i_2] [i_7])), (var_7)))) ? (((int) arr_13 [i_1])) : (((/* implicit */int) (signed char)2)))))));
                            arr_28 [4LL] [(signed char)2] [(signed char)2] [i_5] [i_5] |= (short)5132;
                        }
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (1073741822U)))));
                            var_29 -= ((/* implicit */int) var_12);
                            var_30 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((int) var_11))) : (var_13)))));
                        }
                    }
                    var_31 += ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((short) var_13))) && (((/* implicit */_Bool) var_14)))));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 9; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 6; i_10 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) var_1);
                                arr_39 [3LL] [i_1] [1] [i_1] [3LL] = ((/* implicit */signed char) min(((~(((((/* implicit */int) var_9)) & (arr_26 [i_0] [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_9] [i_10]))))), (((((((/* implicit */int) var_2)) + (2147483647))) >> (((var_13) - (2240119851694289671LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
