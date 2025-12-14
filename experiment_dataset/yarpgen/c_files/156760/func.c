/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156760
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
    var_17 = ((/* implicit */int) var_0);
    var_18 = ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_13 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_1])), ((+(((/* implicit */int) ((arr_10 [i_1] [i_1] [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                        arr_14 [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1684102218) : (((/* implicit */int) (unsigned short)65520))))) ? (((1235674741924758115ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1])))));
                        arr_15 [i_1] [i_1] = ((/* implicit */_Bool) (-(var_3)));
                    }
                } 
            } 
        } 
        var_19 = (~(((/* implicit */int) (((-(767736065U))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) var_14)))))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                {
                    arr_20 [i_0] [i_0] [i_5] = ((/* implicit */short) max((((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4] [i_5]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4] [i_0])) * (((/* implicit */int) (unsigned short)8)))))));
                    var_20 *= ((/* implicit */_Bool) ((max(((+(((/* implicit */int) arr_12 [i_0] [i_4] [i_0] [i_4])))), ((~(((/* implicit */int) (signed char)52)))))) % (((/* implicit */int) max((((/* implicit */unsigned short) max((var_2), (var_14)))), (arr_1 [i_4]))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-23232)) ? (((((/* implicit */_Bool) ((arr_16 [i_0] [i_0]) ? (((/* implicit */int) (short)26779)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5]))) : (((2047ULL) + (((/* implicit */unsigned long long int) -4998417631842270908LL)))))) : (((/* implicit */unsigned long long int) ((unsigned int) (+(2669218044U)))))));
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 0);
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 24; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_6] [i_5] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_24 [i_0] [i_6] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) : (16486469905179204651ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16))))))) - (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_6 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))))));
                                var_22 = ((/* implicit */unsigned short) (+(var_0)));
                                var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_16)))) && (((/* implicit */_Bool) max((arr_25 [i_6 + 1] [i_6 - 2] [i_6] [i_6 - 3]), (((/* implicit */long long int) (short)7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)57294)) : (((/* implicit */int) ((unsigned short) var_10)))));
}
