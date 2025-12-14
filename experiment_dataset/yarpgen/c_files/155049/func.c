/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155049
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (-20112155) : (((((/* implicit */_Bool) (short)8978)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
                            var_19 += var_15;
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (var_5)))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) arr_5 [i_3] [i_2] [i_1])) / (((/* implicit */int) (short)-8979)))))) & (((/* implicit */int) (_Bool)1)))))));
                            var_21 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) (short)-8978)) - (((/* implicit */int) var_12)))) : (((((/* implicit */int) var_3)) - (((/* implicit */int) arr_7 [i_2])))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_3])) ? (var_13) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))));
                            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) (short)8978)) ? (max((((/* implicit */long long int) var_7)), (var_16))) : (var_8)))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(var_10)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
    {
        for (unsigned short i_5 = 4; i_5 < 14; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                            {
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((min((((/* implicit */long long int) (signed char)69)), (arr_21 [i_8]))) & (((((/* implicit */_Bool) arr_23 [i_4] [i_5 + 1] [i_6 + 3] [i_8])) ? (-7930048273939514881LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [i_7] [i_6] [i_5 + 1] [i_4 + 2]))))))), (((/* implicit */long long int) (_Bool)1)))))));
                                arr_28 [i_4 - 1] [i_4] [i_4] [i_7] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                                arr_29 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -793732863))));
                            }
                            var_24 = ((/* implicit */_Bool) var_14);
                        }
                    } 
                } 
                arr_30 [i_4 - 2] [i_5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_20 [i_4 + 1] [i_4] [i_4 - 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? ((-(((/* implicit */int) arr_24 [i_4] [i_5 - 1] [i_5 - 4] [i_4])))) : (((/* implicit */int) arr_16 [i_5 - 1] [i_5 + 3] [i_4 + 1]))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (arr_25 [i_4 - 2] [i_5])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_15);
}
