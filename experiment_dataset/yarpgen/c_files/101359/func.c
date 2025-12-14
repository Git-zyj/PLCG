/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101359
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_0)) ? (max((var_16), (((/* implicit */unsigned long long int) (short)2691)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_6)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)4)), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((arr_8 [i_2] [i_1] [i_0]) >> (((2587406803U) - (2587406756U)))))) && (((/* implicit */_Bool) (~(var_16))))))) : (((/* implicit */int) arr_6 [(unsigned short)0] [i_1 - 2] [i_1 - 1])))))));
                    var_22 = ((/* implicit */long long int) min(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((_Bool) arr_7 [i_2 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 2])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (max((min((max((8760908396640645839ULL), (((/* implicit */unsigned long long int) arr_3 [i_3] [(unsigned char)10] [i_3])))), (((/* implicit */unsigned long long int) ((unsigned char) var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_2 + 4] [i_3 + 3] [i_3])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))))));
                        var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)6))))) : (((((/* implicit */_Bool) var_4)) ? (0U) : (var_15)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) var_19);
                        var_26 ^= ((/* implicit */unsigned int) min((max((arr_7 [i_1 - 1] [i_1 - 3] [i_1 + 1] [i_1 - 1]), (arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 2]))), (max((arr_7 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 3]), (((/* implicit */unsigned long long int) var_12))))));
                        var_27 += ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_2 + 2])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [10LL] [i_1 - 2] [i_0]))))));
                        var_28 = ((/* implicit */unsigned int) var_2);
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_19))));
                    }
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [6ULL] [i_1] [i_1])) / (((/* implicit */int) min((arr_6 [i_1 + 1] [i_1] [i_1 + 1]), (arr_6 [i_0] [i_0] [i_1 - 3])))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) var_2);
}
