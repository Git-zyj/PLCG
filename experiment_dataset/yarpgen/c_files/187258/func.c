/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187258
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
    var_12 = ((/* implicit */short) ((var_3) << (((var_3) - (276175671U)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((arr_1 [i_0]) + (2147483647))) << ((((((+(-1))) + (17))) - (16)))));
        arr_3 [(unsigned short)10] |= ((/* implicit */short) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (6386899578595555480LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) == (arr_0 [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)43597)))) : (min((3194711285U), (((/* implicit */unsigned int) arr_1 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) ((arr_4 [i_1] [7LL]) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 4; i_4 < 8; i_4 += 3) 
                    {
                        arr_14 [i_4] [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((((((_Bool) (unsigned short)64297)) || (((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) arr_1 [i_4 + 3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_7 [i_1]))))))));
                        arr_15 [i_1] [i_3 - 1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((arr_13 [i_1] [i_1] [4ULL]) ? (var_4) : (2187504999U))))) ? ((-(arr_12 [i_3 - 1] [i_1] [i_4 - 4]))) : (min((((/* implicit */long long int) max((var_1), (((/* implicit */int) (short)17510))))), (((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_10 [i_4] [i_3] [i_2]) : (arr_4 [i_2] [i_2])))))));
                        arr_16 [i_1] [i_1] = ((/* implicit */signed char) ((max((arr_12 [i_3 + 1] [i_1] [i_4 + 2]), (arr_12 [i_3 + 1] [i_1] [i_4 + 2]))) - (arr_12 [i_3 + 1] [i_1] [i_4 + 2])));
                    }
                    arr_17 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) (~(max((max((8191U), (3349523648U))), (((/* implicit */unsigned int) var_10))))));
                    arr_18 [i_1] [i_1] [i_3] = ((/* implicit */int) ((min((((/* implicit */long long int) var_2)), (arr_12 [i_1] [i_1] [i_3 + 2]))) / ((-(arr_12 [i_1] [i_1] [i_1])))));
                    arr_19 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((unsigned int) (unsigned char)255));
                    arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(-1132669453)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [6LL] [6LL] [i_3 + 1])) ? (arr_7 [i_1]) : (((/* implicit */long long int) arr_1 [i_3 + 1]))))) ? (((((/* implicit */_Bool) (short)10229)) ? (arr_4 [i_2] [7LL]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2))))))));
                }
            } 
        } 
        arr_21 [i_1] [i_1] = ((/* implicit */short) min((2102474222), (((/* implicit */int) ((unsigned char) var_2)))));
    }
    var_13 = min((((/* implicit */int) ((((/* implicit */long long int) var_7)) <= (((-6663542944005931720LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3130)))))))), (((max((var_1), (((/* implicit */int) (unsigned short)65535)))) << (((((-1975684443782331151LL) + (1975684443782331174LL))) - (22LL))))));
    var_14 = ((/* implicit */_Bool) var_2);
}
