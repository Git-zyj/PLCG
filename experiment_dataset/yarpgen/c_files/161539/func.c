/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161539
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((1366696765907675977ULL), (1366696765907675977ULL)))) ? (min((var_5), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)47)))), (((/* implicit */int) var_2))))) * (-1LL)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                var_17 ^= ((/* implicit */signed char) var_14);
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_18 = ((((/* implicit */_Bool) arr_10 [i_3 + 2] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_5])) : (var_15));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-103)) != (((/* implicit */int) (signed char)78))));
                        arr_17 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-22145)) != (((/* implicit */int) (signed char)-108))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_3] [i_4] [i_4] [i_6] [i_2] = ((/* implicit */unsigned long long int) ((arr_19 [i_6] [i_4] [i_4] [i_2] [i_1]) * (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)232)) << (((((arr_6 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22145))))) - (5814278010517755930ULL)))));
                        arr_22 [i_1] [i_2] [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) ((arr_12 [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3]) - (((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_1] [i_1])))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 2])) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_5) : (-1LL)))) ? (((((/* implicit */_Bool) arr_10 [i_4] [(_Bool)1] [i_3])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) var_6)))))));
                    }
                    var_24 = ((/* implicit */signed char) (short)-22142);
                    var_25 = ((((/* implicit */_Bool) var_3)) ? ((~(4095))) : (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) var_14)))));
                }
            }
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (short)-22143)) : (((/* implicit */int) (short)-1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (8388607U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
        }
    }
    for (long long int i_8 = 1; i_8 < 10; i_8 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(var_6)))) ^ ((-(arr_0 [i_8 + 3])))));
        arr_27 [i_8] = (-((~(((/* implicit */int) var_0)))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) (short)22144)))) | (((/* implicit */int) (_Bool)0))))) ? (((((((/* implicit */int) (signed char)-89)) < (((/* implicit */int) (signed char)-104)))) ? (((/* implicit */int) (short)22142)) : (((/* implicit */int) (short)-22127)))) : (((/* implicit */int) (signed char)-116))));
    }
    for (int i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        arr_31 [i_9] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) / (var_4)))) ? (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)67)), (var_1)))))) / (((/* implicit */int) var_11))));
        arr_32 [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_12))))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) == (var_6)))))))));
        var_29 ^= ((/* implicit */int) var_10);
        arr_33 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-29)) ? (((((/* implicit */_Bool) (short)22137)) ? (((((/* implicit */_Bool) (unsigned short)12725)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (signed char)4)) & (((/* implicit */int) var_0))))));
        arr_34 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)1)) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (signed char)-79)))) : (((/* implicit */int) (_Bool)0))))) / (((arr_24 [i_9] [i_9]) | (((/* implicit */long long int) ((((/* implicit */_Bool) -6150492458755237402LL)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (short)19469)))))))));
    }
    var_30 ^= ((((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned long long int) (~(var_7))))))) && (((/* implicit */_Bool) var_9)));
}
