/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139584
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 += ((/* implicit */unsigned long long int) ((((min((4194272U), (((/* implicit */unsigned int) arr_2 [i_0])))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))) ? (min((((/* implicit */long long int) (~(4004206849U)))), (((long long int) 9223372036854775807LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) ((unsigned char) var_1))) : ((-(((/* implicit */int) arr_3 [i_0])))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_11 *= ((/* implicit */signed char) min((((/* implicit */long long int) ((min((arr_9 [i_0] [i_1 - 2] [i_2] [i_3]), (((/* implicit */unsigned int) arr_3 [i_0])))) << (((/* implicit */int) ((signed char) -9223372036854775782LL)))))), ((+(9223372036854775791LL)))));
                            var_12 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0] [3] [i_0] [3ULL])) << (((((/* implicit */int) var_6)) + (22)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
    {
        arr_13 [i_4] = ((/* implicit */short) ((int) ((((min((((/* implicit */long long int) var_0)), (arr_12 [i_4]))) + (9223372036854775807LL))) << (((max((((/* implicit */long long int) 2036721335)), (arr_12 [i_4]))) - (2036721335LL))))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) ((max((arr_14 [i_4] [i_5] [i_5]), (((/* implicit */unsigned long long int) max((arr_12 [(_Bool)1]), (var_9)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) == (-9223372036854775799LL)))))));
                        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775802LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_4 - 1])))))) : (((max((((/* implicit */unsigned long long int) -9223372036854775761LL)), (arr_20 [i_4] [i_5] [i_6]))) | (((/* implicit */unsigned long long int) (~(arr_11 [i_6] [(unsigned char)2]))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (-(((((((((/* implicit */int) var_0)) + (2147483647))) << (((arr_26 [i_4 - 2] [i_4] [0] [i_4] [i_4 - 2] [0LL]) - (2942315200U))))) * (((((/* implicit */int) arr_15 [i_4] [i_5] [i_5])) / (((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [i_6])))))))))));
                            var_16 = ((/* implicit */short) (+(((/* implicit */int) arr_15 [i_4 - 1] [i_5] [i_7]))));
                            arr_28 [i_4 - 2] [3LL] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)-9184)) % ((~(((/* implicit */int) var_0)))))), (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_11 [i_4 - 1] [i_8 + 2])))))));
                            var_17 = ((/* implicit */signed char) arr_23 [i_4 - 2] [i_5] [i_7]);
                            arr_29 [(signed char)9] [i_6] [i_4 - 2] = (!(((/* implicit */_Bool) var_0)));
                        }
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) -9223372036854775792LL))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_24 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1]))))) : (max((((/* implicit */unsigned int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4] [(signed char)13] [(signed char)13] [(short)12] [i_4 - 2])))))), (73204947U)))));
    }
}
