/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106218
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = var_12;
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))), (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */_Bool) -359223466995518015LL);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (max((3532117191U), (((/* implicit */unsigned int) (unsigned char)64)))) : (3532117191U)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (short)-21121))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))) : (((((/* implicit */_Bool) 0LL)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
        var_22 = ((/* implicit */long long int) min((var_22), ((~(((0LL) & (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (359223466995518042LL)));
                    var_23 = ((/* implicit */unsigned short) ((arr_11 [i_2 + 1] [i_1]) ^ (((/* implicit */int) arr_1 [i_2 + 1] [(signed char)21]))));
                    var_24 = ((/* implicit */unsigned short) ((unsigned long long int) var_9));
                    arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_18);
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned int) ((int) arr_2 [i_1] [i_1]));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 1911977893U))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50897))) : (((((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1]))) & (0LL)))));
    }
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2089215182U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((var_17) | (((/* implicit */long long int) arr_5 [i_4] [(signed char)14]))))) : (max((arr_6 [i_4]), (((/* implicit */unsigned long long int) var_14)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) : (359223466995518032LL))))))));
        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [6ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) : (((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? (3729133389U) : (((/* implicit */unsigned int) -1946866351)))))))));
        arr_19 [i_4] [i_4] = ((/* implicit */_Bool) arr_0 [(unsigned char)7]);
    }
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        var_28 = ((/* implicit */int) max((max((((/* implicit */unsigned int) arr_11 [i_5] [i_5])), (2205752095U))), (((/* implicit */unsigned int) ((signed char) arr_11 [i_5] [i_5])))));
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [14U] [i_5] [i_5] [i_5])) <= (((((/* implicit */_Bool) 359223466995518015LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-79)))))))));
        arr_24 [9U] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 5680184057156241868LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) / (((((arr_0 [i_5]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_18)) + (57))) - (39))))))));
    }
    var_30 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)62)) << (((((int) var_6)) - (32260)))))) > (var_5)));
    /* LoopNest 2 */
    for (unsigned short i_6 = 3; i_6 < 23; i_6 += 2) 
    {
        for (signed char i_7 = 4; i_7 < 23; i_7 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_31 ^= ((/* implicit */signed char) ((max(((~(((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_27 [i_6])))))) >= (((/* implicit */int) var_15))));
                            arr_37 [i_6] [i_7] [i_7] [i_7] [(unsigned short)11] [i_7] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_8)) * (((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (short)5511)))))), (((((/* implicit */_Bool) arr_28 [i_8] [i_7 + 1] [i_6])) ? (((/* implicit */int) arr_34 [i_6] [i_7 + 1] [i_8])) : (((/* implicit */int) var_3))))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) var_5))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) var_18))));
                var_34 &= ((/* implicit */short) var_13);
                arr_38 [i_6] = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}
