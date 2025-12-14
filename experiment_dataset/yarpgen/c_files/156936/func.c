/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156936
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_2), (((/* implicit */unsigned long long int) var_8)))) << (((((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0])) - (61392))))) - (268433604)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2 - 2] [i_0] [i_0] [i_0]) : (arr_6 [i_2 - 2] [i_0] [i_0] [i_1])))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_2), (((/* implicit */unsigned long long int) var_8)))) << (((((((((((/* implicit */int) var_4)) + (2147483647))) >> (((((((/* implicit */int) arr_5 [i_0])) - (61392))) + (21916))))) - (268433604))) + (268433617)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_2 - 2] [i_0] [i_0] [i_0]) : (arr_6 [i_2 - 2] [i_0] [i_0] [i_1]))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (((~(((/* implicit */int) var_11)))) <= ((~(((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_13 -= ((/* implicit */short) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_13 [i_1] [(signed char)14]))));
                            arr_16 [i_0] [4ULL] [9] [i_2 + 1] [19] [i_0] [21LL] = ((/* implicit */unsigned short) var_2);
                            var_14 = ((/* implicit */unsigned char) (!(((_Bool) var_4))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_21 [16ULL] [6LL] [i_1 + 2] [(unsigned char)0] [i_0] [15] = ((/* implicit */unsigned int) var_11);
                            var_15 &= ((/* implicit */unsigned char) (~(arr_6 [i_0] [4] [i_5] [i_5])));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_16 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)233))))));
                            arr_24 [16U] [i_1] [i_0] [i_3 - 3] = ((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_3)) >> (((var_2) - (17864512255295604141ULL))))), (((/* implicit */int) (!(var_7))))))) * (((unsigned long long int) min((arr_6 [i_1] [i_0] [i_0] [(short)17]), (((/* implicit */long long int) var_0))))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+((~((+(arr_1 [i_3]))))))))));
                            var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) var_9)) ? (arr_6 [i_1 - 2] [i_2 + 1] [i_0] [i_7 + 1]) : (arr_6 [i_1 - 1] [i_2 + 1] [i_0] [i_7 - 2]))), (min((min((((/* implicit */long long int) var_7)), (arr_9 [i_0] [17ULL] [17ULL] [i_7]))), (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))))));
                            var_19 = ((/* implicit */unsigned short) var_9);
                        }
                        arr_27 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (arr_12 [i_1 + 2] [i_1 - 1] [i_1] [(short)0]))) ? ((+(arr_12 [i_1 + 1] [(short)11] [(_Bool)1] [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_1 + 3] [0] [i_1] [i_1]) > (((/* implicit */unsigned int) var_9))))))));
                        var_20 = ((/* implicit */_Bool) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)11)))))))));
                    }
                    arr_28 [i_0] [i_1 - 3] [i_1 - 1] = ((/* implicit */unsigned int) arr_3 [(_Bool)1]);
                    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_1] [i_1]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_11)) ? (var_8) : (var_9))), (((/* implicit */int) var_0)))))));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_6))))) : (((/* implicit */int) var_3)))) < (((((/* implicit */_Bool) max(((unsigned char)128), (((/* implicit */unsigned char) (_Bool)1))))) ? (max((((/* implicit */int) var_5)), (var_8))) : (((((/* implicit */int) var_7)) & (((/* implicit */int) var_3)))))))))));
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_0)) < (var_9)))), (max((((/* implicit */int) var_0)), (var_9))))))));
}
