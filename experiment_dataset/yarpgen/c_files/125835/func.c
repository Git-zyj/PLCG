/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125835
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)32520))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_3 [i_0] [22U] [(unsigned char)7])))) : (((((/* implicit */int) var_4)) + (arr_1 [i_0] [i_0]))))), ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)33015)) > (((/* implicit */int) (unsigned short)33015)))))))));
                    arr_6 [i_0] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) var_0))) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)33015)) : (arr_4 [i_0] [i_1] [(unsigned short)18] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3464))))) : (arr_1 [i_1] [i_0])));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_19 = max((max((((/* implicit */int) max((var_3), (var_2)))), (((((/* implicit */_Bool) (unsigned short)32520)) ? (((/* implicit */int) (unsigned short)33015)) : (((/* implicit */int) (unsigned short)33015)))))), ((~((~(((/* implicit */int) (_Bool)0)))))));
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_2]))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)106)), ((unsigned short)32520)));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 24; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) 1725707613)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))))), (max((var_9), (((/* implicit */long long int) arr_8 [i_5] [i_5] [i_2] [i_5] [i_0])))))) != (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -1000171990)) ? (var_12) : (((/* implicit */int) (_Bool)1)))) > (max((((/* implicit */int) (short)-29864)), (219630777)))))))));
                            var_23 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [(unsigned short)23] [i_5 - 1] [(signed char)1] [i_0] [i_1]))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)32520))))));
                        }
                        arr_17 [i_0] [i_0] [10] [i_0] [i_2] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (arr_4 [i_1] [i_1] [i_1] [i_1]) : (arr_11 [(_Bool)0] [i_1] [i_2] [i_4])))));
                            arr_22 [i_6] [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] &= ((1190682158) % ((+(((/* implicit */int) (_Bool)1)))));
                            arr_23 [9] [2] [i_2] [i_2] [i_2] = (-(((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_4] [(_Bool)1])));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) (short)5963)) : (((/* implicit */int) (unsigned short)33015)))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) (signed char)-89)))) : (((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_1 [i_6] [i_2]) : (-766881147)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_24 [i_0] [i_7] [i_7] [i_4] [i_7]))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)33015)) ? (((/* implicit */int) arr_2 [i_0] [(signed char)20])) : (((/* implicit */int) var_10)))))))));
                            var_29 = ((/* implicit */int) var_1);
                            arr_26 [(_Bool)1] [i_1] [i_2] [i_4] [17] = ((/* implicit */int) ((var_14) && (((/* implicit */_Bool) var_12))));
                        }
                    }
                }
            } 
        } 
    } 
    var_30 &= ((/* implicit */signed char) max((403899120), (((/* implicit */int) (unsigned char)106))));
}
