/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117206
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
    var_18 = (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) % (3ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (var_12))))) : (((unsigned long long int) var_15)))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0 - 2]))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max(((~(((/* implicit */int) var_17)))), ((+(((/* implicit */int) arr_14 [i_3] [i_0] [i_1] [(unsigned short)16] [i_0 - 1])))))))));
                                var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_3 + 1] [i_1] [i_3 + 1] [i_3 + 1] [i_4] [i_0]))))), ((~(arr_0 [i_0] [13U])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) (-(18446744073709551612ULL)));
                        var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_0 - 3]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_8))));
                        var_25 = ((/* implicit */unsigned int) max(((-((+(((/* implicit */int) var_15)))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_0] [i_0] [10ULL] [i_0] [i_2])) : (((/* implicit */int) arr_17 [i_6] [i_6 + 2] [0U] [i_0] [i_6]))))));
                        var_26 |= ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_6]))) == (((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [11]))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (arr_12 [i_1] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [(signed char)14] [i_1] [i_6] [i_6])) ^ (((/* implicit */int) arr_7 [i_0] [i_0 + 3] [i_1] [i_0])))))))));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 + 3] [i_0] [16LL])) & ((~(((/* implicit */int) ((_Bool) var_4)))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            var_28 = ((/* implicit */short) ((signed char) (+(((/* implicit */int) arr_6 [i_0 - 3] [i_0] [i_8 - 1])))));
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_8 + 1] [i_8 + 1] [i_0] [i_8 - 1] [i_0 + 3])), (arr_16 [i_8 + 1] [i_8] [13ULL] [i_8 - 1] [i_0 + 3]))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_1] [i_2] [i_7] [i_9]))) & (19ULL))))) - (((/* implicit */unsigned long long int) (((+(var_16))) & (max((var_16), (((/* implicit */long long int) var_8))))))))))));
                            var_31 = (short)-28693;
                            var_32 = ((/* implicit */short) ((arr_23 [i_0] [i_2] [i_7] [i_9]) ? (((/* implicit */int) (unsigned short)51537)) : (((/* implicit */int) ((((/* implicit */unsigned int) min((var_1), (((/* implicit */int) (short)-15229))))) <= (((((/* implicit */unsigned int) var_10)) | (var_4))))))));
                            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((+(var_5))))))));
                            var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [12U] [i_2] [i_7] [3LL]))) > (var_14)))))))));
                        }
                        var_35 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_2 [i_0 - 3]) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))))));
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 0)))) + (130816ULL))))));
                    }
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)74)))))), (var_10))))));
}
