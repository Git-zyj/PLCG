/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183107
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_13 = ((arr_0 [i_0]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (9287303320370794480ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-1437004137341376642LL), (((/* implicit */long long int) 959024108))))) ? ((((_Bool)1) ? (((/* implicit */int) (short)26679)) : (((/* implicit */int) (unsigned char)74)))) : (((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned short)63487))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_16 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) -2330405851902927996LL)) || (((/* implicit */_Bool) (unsigned char)215)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (5071812532859141310ULL)));
                        arr_17 [i_2] [i_1] [i_4] = ((/* implicit */_Bool) 1152921504606846975LL);
                    }
                    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */short) var_0);
                        var_16 = ((/* implicit */_Bool) arr_1 [i_1]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            arr_23 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (27214513759345629ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))))));
                            arr_24 [i_1] [i_2] [i_1] [11ULL] [i_5] [i_5] [i_6] = ((((((/* implicit */_Bool) (unsigned short)36500)) ? (arr_13 [i_3]) : (((/* implicit */int) var_1)))) <= ((-(((/* implicit */int) arr_15 [i_1] [i_2] [(_Bool)0] [(unsigned short)6] [i_5] [i_6])))));
                            arr_25 [i_1] [i_2] [i_1] [i_5] [i_6] = var_12;
                        }
                        var_17 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (short)16)), (var_5)));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        for (signed char i_8 = 3; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_30 [(unsigned char)6] [i_2] [i_3] [i_3] [i_1] [i_8] = ((/* implicit */signed char) ((((((_Bool) var_11)) ? (arr_8 [i_1] [i_7 - 2]) : (max((((/* implicit */unsigned long long int) (short)31613)), (10274749699368268601ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_31 [i_1] = (-(max((max((0ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-30078))) + (1721099178U)))))));
    }
    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        arr_34 [i_9] |= ((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) arr_33 [i_9] [i_9]))))) || (((/* implicit */_Bool) min((arr_32 [i_9] [i_9]), (((/* implicit */short) var_2)))))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_32 [i_9] [(short)19])) || (((/* implicit */_Bool) var_7)))))))));
        arr_35 [i_9] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_9] [i_9]))));
    }
    var_19 = ((max((min((var_11), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))) > (((/* implicit */unsigned int) (~(((((/* implicit */int) var_7)) - (((/* implicit */int) var_3))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (1833628627)));
        arr_39 [i_10] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))));
    }
    for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_12 [(_Bool)0]))))));
            arr_48 [i_11 - 2] [2ULL] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-67)) > (((/* implicit */int) var_8))));
            arr_49 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_11 + 1])) ? (arr_46 [i_11 + 1]) : (var_5)));
        }
        var_22 = ((max((arr_46 [i_11 + 1]), (arr_46 [i_11 + 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1545)) ? (arr_21 [i_11] [i_11 + 1] [i_11] [2LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_11 + 1] [(signed char)1] [i_11] [i_11 - 1])))));
        arr_50 [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18405)) * (((/* implicit */int) (unsigned short)15105))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */signed char) (_Bool)0)))))) > (((long long int) -6429599654067653192LL))));
    }
}
