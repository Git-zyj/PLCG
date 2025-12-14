/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142685
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) (_Bool)1);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)29041)) : (((/* implicit */int) var_8)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) var_6)))));
    }
    for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)16368))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_2)))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (min((var_0), (((/* implicit */unsigned long long int) var_5)))) : (arr_8 [i_2])))) ? (((/* implicit */int) ((short) var_2))) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (var_4) : (arr_3 [i_2])))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 3; i_4 < 14; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_6 = 4; i_6 < 17; i_6 += 1) 
                        {
                            arr_20 [i_2] [i_2] [i_3] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59342))) : (var_11)))) ? (arr_18 [i_6] [i_5] [i_5] [i_4 + 1] [i_4]) : (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                            arr_21 [i_3] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)60061))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_15 = var_6;
                            arr_25 [i_7] [i_3] [i_4] [i_3] [i_2] = ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_23 [i_5] [i_3] [i_4] [i_4 - 2] [i_7] [i_5] [i_3])), (var_8))))) : (((arr_23 [i_2] [i_3] [i_4] [i_4 + 2] [i_7] [i_4] [i_7]) ? (arr_24 [i_2] [i_3] [i_4] [i_3] [i_7] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))));
                        }
                        var_16 = ((/* implicit */unsigned short) arr_16 [i_3] [i_4] [i_3] [i_3]);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 2; i_8 < 18; i_8 += 2) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */_Bool) arr_3 [i_8]);
        arr_30 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) arr_26 [i_8 - 2])) : (min((((/* implicit */unsigned int) arr_27 [i_8])), (4294967295U)))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))));
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)27129)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) << (((((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (unsigned char)255))))) - (247)))))) ? (((/* implicit */unsigned long long int) var_4)) : (var_0)));
}
