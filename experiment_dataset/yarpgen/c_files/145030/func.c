/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145030
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
    var_17 = min((373222926922878108ULL), (373222926922878122ULL));
    var_18 = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) var_4))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), ((unsigned short)4918)));
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) arr_10 [i_1] [i_0 + 1])))));
                        arr_12 [i_0] [i_1] [i_2] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4)) && (((/* implicit */_Bool) arr_1 [i_0 - 1]))))))) : (((/* implicit */int) var_1))));
                    }
                    arr_13 [16ULL] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_8)) & (((/* implicit */int) arr_2 [i_1]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_1] [(unsigned short)1] [(unsigned short)1] = ((/* implicit */unsigned short) (~(var_16)));
                        arr_17 [i_1] = ((/* implicit */_Bool) (((!(((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1] [i_0 + 1] [(unsigned short)11])))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)4918))))))) : (((((/* implicit */_Bool) (unsigned short)60614)) ? ((-(16140321992486993836ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1] [(_Bool)1])) % (arr_7 [i_0] [i_1] [i_2] [i_1]))))))));
                        var_21 = ((/* implicit */long long int) ((min((arr_14 [i_0 + 1] [i_2] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_2]), (arr_14 [i_0 + 1] [i_2] [i_2] [i_0 - 1] [i_0 + 1] [i_4]))) + (((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) arr_8 [8U] [i_2] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
                        arr_18 [i_0 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((var_9) << (((((/* implicit */int) (short)96)) - (33)))))))) ? (((/* implicit */unsigned long long int) 1343049656U)) : ((-(((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2] [i_4])) ? (arr_5 [i_0] [i_1]) : (0ULL)))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)5] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7538479351587288639ULL)))))))) && ((!(((/* implicit */_Bool) var_9))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        arr_21 [i_1] = ((/* implicit */signed char) (+(879798333895102529LL)));
                        var_23 = ((/* implicit */long long int) (-(((((/* implicit */int) var_10)) % (((/* implicit */int) arr_0 [i_1] [i_2]))))));
                        arr_22 [i_0 - 1] [i_0 - 1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((((/* implicit */int) (unsigned short)18761)) + (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) (unsigned short)4918)) ? (((/* implicit */int) arr_6 [i_5] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        arr_25 [i_6] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_0 + 1]))));
                        arr_26 [i_0] [i_0] [i_1] [i_6] = ((((/* implicit */unsigned long long int) (~(-6935975756695289570LL)))) + (((((/* implicit */_Bool) (unsigned short)23202)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))))));
                        arr_27 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) (-(var_5)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_20 [(short)13] [i_1] [i_1] [i_1])))));
                        arr_28 [(unsigned char)3] [i_1] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */long long int) ((var_9) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_6] [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
                        arr_29 [i_0 - 1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (signed char)-29);
                    }
                }
            } 
        } 
    } 
}
