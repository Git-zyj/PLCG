/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164570
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) var_9);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) var_9);
                        arr_14 [i_1] [i_3] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1 + 1]) ? (var_6) : (((var_8) - (((/* implicit */long long int) arr_13 [i_0] [i_2] [(unsigned short)15]))))));
                    }
                    var_14 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_21 [i_0] [i_0] [i_1] [i_0] [i_0] = ((unsigned char) (short)27050);
                            arr_22 [i_0] [i_1] [i_2 + 1] [i_4] [i_5] = ((/* implicit */long long int) 365566488);
                            arr_23 [i_4 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)27063)) ? (((/* implicit */int) (short)17)) : (((/* implicit */int) (unsigned short)65535))));
                            arr_24 [14] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (2165307778U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        }
                        for (unsigned short i_6 = 3; i_6 < 14; i_6 += 1) 
                        {
                            var_15 = (!(((/* implicit */_Bool) (unsigned char)248)));
                            arr_29 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_1 + 1] [i_2 - 1] [i_4 + 2] [i_1]);
                        }
                        for (unsigned short i_7 = 4; i_7 < 16; i_7 += 1) 
                        {
                            var_16 = (unsigned char)136;
                            arr_32 [i_0] [i_1] [i_2] [i_2] [i_7] = (!(((/* implicit */_Bool) (unsigned char)255)));
                        }
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1])))) <= (var_6))))));
                            arr_36 [i_2] [i_1 + 1] [i_2] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) var_2);
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 3) 
                        {
                            arr_41 [i_9 + 1] [(unsigned char)14] [i_2] [(unsigned char)14] [i_0] &= ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) var_5)))));
                            var_18 = ((/* implicit */long long int) ((arr_3 [i_9 - 2] [i_9 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_26 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_4] [i_4] [i_4 + 1] [i_1] [i_4] [i_4] [i_4]))))))) : ((+(arr_16 [i_0] [i_0] [i_0] [i_1])))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (var_0)));
                            var_20 = ((/* implicit */signed char) var_0);
                        }
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_48 [i_0] [i_0] [i_2] [i_1] [i_11] = ((((/* implicit */_Bool) arr_28 [i_0] [i_2 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_1)));
                        arr_49 [i_1] = ((/* implicit */unsigned int) -3165018241396608625LL);
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((_Bool) arr_46 [i_0] [i_1] [i_1 + 1] [i_1 + 1])))));
                        arr_50 [i_1] [i_1] = arr_33 [i_1];
                        arr_51 [i_1] = ((/* implicit */unsigned char) arr_28 [i_0] [i_0]);
                    }
                    arr_52 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_0] [i_2 - 2] [i_2 - 2] [i_0] [i_1 + 1]))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) 134217728))) && (((/* implicit */_Bool) min((((/* implicit */signed char) var_0)), (((signed char) var_8)))))));
    var_23 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65512));
    var_24 = ((/* implicit */long long int) (unsigned char)22);
    var_25 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_2)) : (((int) var_4)))));
}
