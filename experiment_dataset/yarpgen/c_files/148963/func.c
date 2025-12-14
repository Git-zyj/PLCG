/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148963
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
    var_18 += ((/* implicit */int) var_10);
    var_19 = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_17)))), (((/* implicit */int) (unsigned char)10))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_20 += (-(arr_0 [i_0 + 2] [i_0 + 3]));
        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (arr_2 [i_0])))) ? (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 2]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) ((arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1]) > (arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : (arr_1 [i_1 + 1])));
                    var_24 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1225427808U)) ? (16091175915791273319ULL) : (16091175915791273319ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (arr_2 [i_1]))))) : (arr_6 [i_0] [i_1 + 1] [i_2 + 1]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_25 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_2] [i_1 - 1])) ? (16091175915791273319ULL) : (31744ULL)))));
                                arr_13 [i_2] [i_2] [i_2] [i_2 + 1] = ((((/* implicit */_Bool) ((unsigned int) 9912781503629801306ULL))) ? (((/* implicit */unsigned long long int) ((int) var_12))) : (((31744ULL) >> (((arr_11 [i_0] [i_1] [i_1] [i_4]) - (3206462773U))))));
                                var_26 += ((/* implicit */unsigned short) ((int) arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0]));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned int) ((var_12) ^ (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
}
