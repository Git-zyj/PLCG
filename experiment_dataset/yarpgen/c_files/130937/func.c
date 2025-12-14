/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130937
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
    var_16 *= ((/* implicit */unsigned char) max(((-((~(((/* implicit */int) var_0)))))), (((/* implicit */int) var_14))));
    var_17 += ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (signed char)-33)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? ((+(((/* implicit */int) var_1)))) : ((+(((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 *= ((/* implicit */short) (+(((((/* implicit */int) arr_6 [i_2 - 2] [i_1] [(short)0])) / (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 2]))))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_10 [i_3] = var_9;
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-75)), ((unsigned char)0)))) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (unsigned char)210)))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3] [i_0] [i_0])) > (((/* implicit */int) arr_7 [(unsigned short)3] [i_1] [i_2 - 1]))))))))))));
                        var_20 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)15385)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (short)12)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_8 [i_1] [(unsigned short)14] [i_1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)4993)) : (((/* implicit */int) arr_0 [i_0]))))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 14; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            var_21 *= arr_4 [i_1] [i_1];
                            arr_16 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_1] [i_2 - 1] [i_1] [i_4 - 3] [i_4 - 3] [i_5])) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2] [i_4] [(signed char)9] [i_4] [i_4]))));
                            arr_17 [i_0] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_2]);
                            arr_18 [i_4] [(short)10] [i_4] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_4 - 2] [i_2] [i_2 - 1] [i_1])) & (((/* implicit */int) (short)-12289))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2 - 2]))));
                            arr_21 [i_2] |= (short)32767;
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_4] [i_6])) : (((/* implicit */int) var_15)))))))));
                        }
                        for (short i_7 = 1; i_7 < 12; i_7 += 1) 
                        {
                            arr_24 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (short)19830)) : (((/* implicit */int) (signed char)91))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_13)))) / (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? ((-(((/* implicit */int) arr_12 [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 - 1])))) : (((/* implicit */int) arr_22 [i_2 - 2] [i_2 - 2] [i_7 + 3] [i_4] [i_7 + 2]))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11305)) ? (((/* implicit */int) arr_12 [i_0] [i_2] [i_4 - 2] [i_7 + 3])) : (((/* implicit */int) (short)1))))) ? ((~(((/* implicit */int) (short)23667)))) : ((~(((/* implicit */int) (short)20765))))));
                        }
                        var_27 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_4))))) : (((/* implicit */int) arr_19 [i_4 - 3] [i_4 - 3] [i_2 - 1] [i_2] [i_2 + 1]))))));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (unsigned char)105))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2])))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35654)) & (((/* implicit */int) (signed char)-11))))) ? (((/* implicit */int) arr_26 [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_2 [i_1] [i_8]))))) ? (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_14 [i_8] [i_2 + 1] [i_2 - 1] [i_2] [i_8])))) : (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) ((((/* implicit */int) (short)11308)) < (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_2] [i_8] [i_2]))))))))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) var_9);
}
