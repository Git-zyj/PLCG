/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172384
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
    var_14 += ((/* implicit */unsigned char) 9223372036854775807LL);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (1640810436U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_11);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_0])) ? (min((((/* implicit */long long int) var_4)), (-7366389351415517622LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned char)111))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)134)) ? (var_11) : (((/* implicit */unsigned long long int) 3214503240005513029LL))))) ? (((((/* implicit */_Bool) var_4)) ? (562529907U) : (arr_4 [10LL] [i_0] [i_1]))) : ((~(arr_4 [i_0] [i_0] [i_0])))))));
            /* LoopNest 3 */
            for (signed char i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 13; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_0]))) + (2654156864U)))), (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)57)), (var_7)))) ? (((/* implicit */int) arr_15 [i_1] [i_1 + 3] [i_0] [i_1] [i_1 + 1] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_3])))))));
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 - 1])) ? (((/* implicit */int) arr_14 [i_1 + 1])) : (((/* implicit */int) arr_14 [i_1 + 1])))))));
                            arr_18 [i_0] [i_0] [i_1 - 1] [i_2 + 2] [i_3] [(signed char)0] [i_4] &= ((short) max((arr_8 [(unsigned short)2] [0ULL]), (((/* implicit */int) arr_7 [6]))));
                            arr_19 [i_0] [i_0] [i_2 - 1] [i_3] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_2] [i_0]))) : (var_11))), (((/* implicit */unsigned long long int) (short)6720))));
                            var_16 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_2 + 1] [i_3] [(short)11] [i_4])) : (((/* implicit */int) arr_5 [i_2 + 2] [i_3] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) + (var_6))))) < (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)121)), (arr_3 [i_0]))))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */short) -1);
        }
        for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 602319912)) ? (22ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_5])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_12 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_4))))))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5]))) : (((long long int) var_0))))));
            arr_22 [i_0] [i_5 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4518)) || (((/* implicit */_Bool) (unsigned short)37548))))), (2654156856U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)29829)))) : (((var_11) << (((arr_4 [i_0] [i_0] [i_0]) - (4008502774U)))))));
            arr_23 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_5 + 3])), ((unsigned short)63488))))) > (max((5225491002544495642ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))));
        }
        arr_24 [i_0] = ((/* implicit */long long int) max((var_8), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_12)) ? (24ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))))) + (((/* implicit */unsigned long long int) arr_20 [i_0])))), (((/* implicit */unsigned long long int) (((~(arr_8 [i_0] [i_0]))) >= (((/* implicit */int) (short)-23374)))))));
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        arr_27 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) -168670384)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (short)-1111))));
        arr_28 [i_6] [(unsigned short)22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15)) ? (max((3140975272711819208LL), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) (signed char)-3)))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_26 [i_6] [i_6])) ? (((/* implicit */int) (short)3856)) : (((/* implicit */int) arr_25 [i_6])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) (unsigned char)53))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-17825))) - (arr_26 [i_6] [i_6])))));
        var_20 -= ((/* implicit */unsigned char) (signed char)2);
    }
}
