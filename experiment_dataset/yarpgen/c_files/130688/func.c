/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130688
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
    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -9105763999931416013LL)) ? (((/* implicit */long long int) 4014075424U)) : (-6280230414999943355LL))) : (max((var_9), (min((var_12), (((/* implicit */long long int) var_13))))))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(var_7))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_3 [i_0] [i_2])), (9105763999931416008LL))), ((-(var_7)))))) ? (max((2023371339891844336LL), (((/* implicit */long long int) (unsigned char)145)))) : ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (7503998070565442542LL))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)125))));
                                arr_14 [7LL] [i_0] [i_0] [i_1] [9LL] = ((/* implicit */unsigned char) (~(((((/* implicit */int) ((arr_11 [i_0] [(unsigned char)16]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) & (max((var_11), (((/* implicit */int) var_0))))))));
                                arr_15 [i_4] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (min((arr_6 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) arr_7 [i_1] [i_2 - 1] [(unsigned short)14] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 2; i_5 < 22; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_19 [i_5] [i_5] [i_6 + 1])), (var_5)))) ? (arr_20 [i_6 - 1] [i_6 - 1] [i_5 + 1]) : (min((var_12), (((/* implicit */long long int) arr_19 [i_6 - 1] [i_5] [i_5]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((((/* implicit */_Bool) arr_17 [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) : (var_4))) | (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 2; i_7 < 20; i_7 += 4) 
                {
                    arr_25 [i_5] [i_6] [i_5] [i_5] = (-((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 0)) : (var_10))))));
                    var_19 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)39904)) ? (27LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))))));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6]))))) : (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1] [(unsigned short)17]))))) ? (min((((/* implicit */long long int) var_11)), (arr_20 [i_6 - 1] [i_7 - 2] [i_5 - 2]))) : (var_4));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (4739139184688235230LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))))))))))));
                }
                var_22 = (+(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_18 [(unsigned char)7] [i_6])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [2U]))))) : (max((9223372036854775806LL), (((/* implicit */long long int) 2147483647)))))));
                var_23 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) (unsigned short)39904)))))))), (((arr_23 [6LL] [i_5 - 1] [i_6] [i_5 - 2]) << (((((/* implicit */int) min((arr_21 [10LL]), (((/* implicit */unsigned short) arr_18 [i_5 + 1] [i_6]))))) - (6)))))));
                var_24 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_16 [i_5 + 1] [i_6 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_5] [i_5]))) : (var_10)));
            }
        } 
    } 
}
