/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161490
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0 - 3])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)49859)) == (var_9))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_0] = var_19;
                    var_21 = ((/* implicit */long long int) ((arr_7 [i_0 + 2] [i_1]) << (((((/* implicit */int) (unsigned char)255)) - (231)))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 2])) * (((/* implicit */int) var_12))));
    }
    for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((-2675032168190170174LL) & (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) (short)-5124)) : (((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1])))) != (((/* implicit */int) (((+(var_19))) == (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-53))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_22 = ((/* implicit */_Bool) ((unsigned int) 71494644084506624LL));
            var_23 = ((/* implicit */long long int) arr_17 [i_3]);
            arr_20 [i_3] [i_4] [i_4] = ((/* implicit */int) (-(var_2)));
            var_24 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_7)))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)15184)) - (15178)))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            arr_24 [i_5] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (18446744073709551615ULL)))) ? (var_18) : (((/* implicit */long long int) arr_13 [i_3 - 1] [i_3 + 1])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        {
                            arr_33 [i_3] [i_3] [i_3] [i_7] [i_6] [i_6] = ((((/* implicit */_Bool) arr_21 [i_6] [i_3 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_21 [i_3] [i_3 + 1] [i_7 - 1])) : (((/* implicit */int) arr_21 [i_3] [i_3 - 1] [i_7 + 2])));
                            arr_34 [i_3] [i_3] [i_3] [i_6] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (-(arr_18 [i_5] [i_5]))))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (((~(var_2))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))))))));
                            var_26 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_30 [i_5]))));
                        }
                    } 
                } 
            } 
            var_27 = var_9;
            var_28 = var_4;
        }
        for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            arr_38 [i_3] [i_3] = max((arr_27 [i_3] [i_9] [i_9] [i_9]), (arr_32 [i_3] [(short)2] [i_3 - 1] [i_3] [(short)2] [i_3 - 1]));
            var_29 = ((/* implicit */unsigned char) (unsigned short)28);
        }
        for (short i_10 = 1; i_10 < 16; i_10 += 1) 
        {
            var_30 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_13 [i_3] [i_10])))) + (((((/* implicit */long long int) ((/* implicit */int) (signed char)53))) / (arr_18 [i_10] [i_10 + 3])))));
            var_31 = ((/* implicit */long long int) max((max((8854788244766948282ULL), (((/* implicit */unsigned long long int) 378897443)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_27 [i_3] [i_3] [i_3] [i_3]))))) ? (4035225266123964416ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)108)) >= (((/* implicit */int) var_3))))))))));
            var_32 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_10 - 1])) || (((/* implicit */_Bool) arr_40 [i_10 - 1])))))));
        }
        arr_41 [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) arr_32 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2] [6LL] [i_3 - 2])) & (((/* implicit */int) arr_32 [i_3] [i_3] [i_3] [i_3] [(_Bool)0] [i_3])))) << (((max((((/* implicit */long long int) arr_21 [i_3] [i_3] [i_3 + 1])), (arr_37 [i_3 - 1] [i_3 + 1]))) - (169LL)))));
    }
    var_33 = ((/* implicit */signed char) var_18);
}
