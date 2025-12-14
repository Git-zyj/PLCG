/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181084
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
    var_16 = ((unsigned int) ((unsigned int) (+(var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] = (~(((/* implicit */int) (signed char)-8)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_17 = ((((/* implicit */int) (signed char)111)) << (((((/* implicit */int) (signed char)-35)) + (41))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) var_13)))) - (((((/* implicit */int) var_10)) >> (((arr_3 [i_0]) - (4263167091U))))))))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-104)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((2385616176U) >= (1909351120U)))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 1; i_5 < 13; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        arr_20 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) arr_10 [i_0] [(_Bool)1] [(unsigned short)6] [i_1]);
                        arr_21 [i_0] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) : (2385616177U)));
                        arr_22 [i_5] [i_1] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_5 + 2] [i_0] [i_6 + 1] [i_1] [i_6] [i_0]))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)5)))))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_18 [i_7] [i_1]))));
                        var_22 -= ((/* implicit */unsigned short) ((unsigned char) (_Bool)0));
                        arr_25 [10] [i_7] = var_7;
                    }
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_6)))) ? (((/* implicit */int) ((signed char) var_3))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [4ULL] [i_0]))))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_4 [i_0] [(signed char)4] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
                }
                /* LoopNest 3 */
                for (int i_8 = 2; i_8 < 12; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 15; i_10 += 2) 
                        {
                            {
                                var_24 = min((max(((signed char)39), (((/* implicit */signed char) (_Bool)0)))), (((signed char) (unsigned short)23061)));
                                var_25 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_14 [i_8] [i_1] [i_8] [i_1] [i_1] [i_10 - 1] [i_9])) ? (35150012350464LL) : (((/* implicit */long long int) 1546035826U)))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_30 [i_1] [i_8] [i_9] [i_10 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_8] [i_8] [i_9] [i_10] [(signed char)1])))) <= (((((/* implicit */int) arr_27 [i_0] [i_0] [i_8] [i_9])) - (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_10])))))))));
                                var_26 = ((/* implicit */unsigned short) arr_10 [i_0] [i_8] [i_9] [(unsigned short)7]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_13))));
    var_28 = var_8;
}
