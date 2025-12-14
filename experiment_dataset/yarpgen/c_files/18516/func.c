/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18516
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) (+(arr_1 [i_0] [i_0])));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */long long int) min((((unsigned short) var_0)), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned int) var_10))))))));
                            var_14 += ((/* implicit */unsigned long long int) (+(arr_6 [20U] [i_1])));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_10 [4U] [4U] [17] [i_3]))));
                            var_16 += ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) 3671101510U)), (min((((/* implicit */unsigned long long int) 5699350591857135685LL)), (17597728920767227232ULL))))) ^ (((((/* implicit */unsigned long long int) (~(arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])))) ^ (((((/* implicit */_Bool) -2263971755532150733LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 2] [i_2]))) : (var_1)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] = (-(((((/* implicit */_Bool) (signed char)53)) ? (3497397584U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))))));
                            var_17 += (~(3484251000U));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_19 [i_0] [i_6] [(unsigned short)17] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -2037232221)) ? (((/* implicit */int) arr_3 [i_1] [i_2 - 1])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_2 - 2] [i_6])))) + (((arr_11 [i_1] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 1]) ? (((/* implicit */int) arr_11 [i_1] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 2])) : (((/* implicit */int) arr_11 [9ULL] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 + 1]))))));
                        var_18 = ((/* implicit */int) 849015152942324387ULL);
                        var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_3)))))) > (((unsigned int) var_3)))))) & (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 849015152942324370ULL)) ? (((/* implicit */unsigned int) var_12)) : (813879743U)))) - (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [(signed char)11] [i_6])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                    }
                    /* vectorizable */
                    for (short i_7 = 3; i_7 < 23; i_7 += 3) 
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) 17597728920767227223ULL);
                        arr_25 [i_0] [i_0] = ((arr_6 [i_2 + 2] [i_7 - 3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [(unsigned short)14] [i_7] [i_7 + 1]))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_2);
    var_21 += ((/* implicit */unsigned char) ((var_2) & (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) 17597728920767227250ULL))));
}
