/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154626
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_2]))));
                    arr_8 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned char) (((-(var_5))) <= (((/* implicit */unsigned long long int) arr_0 [i_2] [i_1]))))), (min((((/* implicit */unsigned char) arr_7 [i_0])), (var_6)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_12 [i_1] [i_0] [i_2] [i_3] [i_3] |= ((/* implicit */_Bool) (((~((~(((/* implicit */int) var_11)))))) | (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_11))))));
                        arr_13 [i_0] [i_2] [i_1] [i_0] &= ((/* implicit */_Bool) (-(((((/* implicit */int) var_1)) & (((/* implicit */int) var_14))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) == (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) 0U)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_11)))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
    var_21 = (-(((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (var_15))))));
    /* LoopSeq 3 */
    for (short i_4 = 1; i_4 < 22; i_4 += 3) 
    {
        arr_16 [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_17)) : (var_12)))) ? (((/* implicit */int) ((var_0) == (((/* implicit */unsigned long long int) 1714796449))))) : (((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) 1072693248)))))))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) var_13)))));
        var_22 = ((/* implicit */unsigned int) arr_10 [i_4] [i_4 - 1] [i_4 - 1] [i_4]);
        var_23 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4 - 1] [i_4] [i_4 - 1])) >> (((var_3) - (332128853U)))))) ? ((~(((/* implicit */int) arr_11 [i_4] [i_4] [i_4 + 1] [(_Bool)1])))) : (((/* implicit */int) var_18)))) <= (((/* implicit */int) ((5715588873502647354LL) < (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    }
    for (unsigned short i_5 = 2; i_5 < 12; i_5 += 1) 
    {
        var_24 |= ((/* implicit */unsigned short) var_1);
        var_25 -= ((/* implicit */short) (-(var_12)));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (arr_0 [i_5 + 3] [i_5 + 4])))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)213)))))))));
    }
    for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 2) 
    {
        var_27 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (arr_9 [i_6] [i_6 - 2] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) (+(var_12)))) : (min((((/* implicit */unsigned long long int) arr_11 [i_6 + 1] [i_6] [i_6] [i_6])), (var_5))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) var_6)), (var_16)))))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((int) (unsigned short)33096)))));
                    var_29 -= ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_11 [i_6] [i_6 + 1] [i_6 - 2] [i_6]), (var_18))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned char) arr_15 [i_6]);
                        arr_33 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) max((((/* implicit */short) arr_11 [i_6 - 2] [(short)4] [7U] [i_9])), (var_1)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 12; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) arr_23 [i_10 + 4])))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))))));
                                arr_38 [i_6 + 1] [i_10] [i_8] [i_11] [(unsigned short)8] |= ((/* implicit */_Bool) arr_11 [(signed char)11] [(signed char)11] [16] [i_11]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
