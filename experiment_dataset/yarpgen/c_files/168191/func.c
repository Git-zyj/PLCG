/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168191
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
    var_14 = ((/* implicit */signed char) ((var_10) != (((/* implicit */unsigned long long int) 4294967295U))));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((int) var_12)))) ? (((/* implicit */int) min(((unsigned short)29334), (((/* implicit */unsigned short) ((unsigned char) (_Bool)1)))))) : (((/* implicit */int) (unsigned short)20435)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) -4LL)) ? (var_3) : (((/* implicit */unsigned long long int) arr_0 [(unsigned char)9]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_0 - 1]))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) var_6);
            arr_6 [i_0] = ((/* implicit */short) max((var_2), (arr_2 [i_0])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_2 - 3] [i_0] [i_0 + 2]))));
                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 2047)) : (1828884018U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)13))))))));
                var_20 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-15217))));
                arr_10 [2] [4] [i_0] [i_2] = ((/* implicit */unsigned char) arr_0 [i_1]);
            }
            arr_11 [i_0] = ((/* implicit */signed char) (unsigned short)9930);
        }
        /* vectorizable */
        for (unsigned char i_3 = 3; i_3 < 21; i_3 += 1) 
        {
            var_21 = ((/* implicit */short) arr_13 [i_0 - 1]);
            /* LoopNest 3 */
            for (signed char i_4 = 4; i_4 < 21; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_6]))) - (arr_16 [i_4 + 1] [i_3 + 1] [5] [i_0 + 3] [i_3] [8U])));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)45100)))))));
                        }
                    } 
                } 
            } 
            arr_20 [i_0] [i_0] = ((var_5) << (((((/* implicit */int) var_0)) + (46))));
            arr_21 [i_0] = ((/* implicit */int) (signed char)-47);
        }
        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((max(((+(6674921038281158741ULL))), (((((/* implicit */unsigned long long int) 2121703756U)) * (13026245353858758294ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6008)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)253))))) : (((arr_13 [17ULL]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36220)))))))))))));
                        var_25 = ((/* implicit */unsigned short) ((unsigned long long int) (~(var_3))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 4; i_10 < 19; i_10 += 1) 
            {
                arr_33 [i_0] [i_7] [i_10] = ((/* implicit */unsigned long long int) arr_27 [i_0] [(signed char)15] [i_0]);
                arr_34 [i_0] [12LL] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_17 [i_0] [i_0 + 3] [i_7] [i_7 + 1] [i_10] [i_10]), (min((((/* implicit */short) (signed char)83)), ((short)-25283))))))));
                arr_35 [(short)6] [i_0] [i_10] = ((/* implicit */_Bool) max(((+(var_4))), (((/* implicit */int) arr_2 [i_0]))));
            }
            var_26 -= ((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)83))))));
        }
    }
    var_27 = ((/* implicit */signed char) ((int) min((((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47))))), ((+(var_1))))));
    var_28 = ((long long int) (unsigned char)2);
}
