/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101722
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
    var_16 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_4))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) (-(var_2)));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) arr_5 [i_2] [i_2] [i_1]))))) ? (((210656798U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3425416666U)) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                }
            } 
        } 
        arr_6 [i_0] = ((/* implicit */long long int) var_14);
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_19 = ((/* implicit */signed char) ((((long long int) arr_8 [i_5])) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                arr_20 [(unsigned char)11] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-32763))));
                                arr_21 [i_7] [i_7] [i_6] [i_5] [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned int) var_12);
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) + (4084310498U)));
                    arr_22 [i_5] [i_3] [i_4] [i_3] = ((/* implicit */int) var_12);
                }
                arr_23 [i_3] [i_3] [5LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_10 [i_3]))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) ((short) arr_10 [i_4])))));
                arr_24 [i_3] [i_3] [3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_11 [i_4] [4LL]))) ? (((((/* implicit */_Bool) var_5)) ? (arr_14 [i_4] [0] [i_4]) : (6815899672467299963LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (4294967295U) : (841106377U))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((((/* implicit */int) ((unsigned char) var_12))) + (var_2)))));
                arr_25 [i_4] [7U] [i_3] = (-(210656798U));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(9340306U)))) ? (((/* implicit */unsigned int) ((int) arr_18 [(short)11] [i_4] [0U] [(unsigned char)3] [i_4] [i_4] [i_4]))) : (min((18U), (((/* implicit */unsigned int) (unsigned char)150))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_8))))));
}
