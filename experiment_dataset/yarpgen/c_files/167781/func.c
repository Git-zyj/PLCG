/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167781
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
    var_17 = ((/* implicit */unsigned int) (-((+(var_4)))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (unsigned short)65535)))))) && (((/* implicit */_Bool) var_1))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        }
        for (signed char i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 8959718789605653920LL)) && (((/* implicit */_Bool) min(((short)-30786), (((/* implicit */short) ((((/* implicit */unsigned long long int) -1LL)) != (1099165515703300632ULL)))))))));
            arr_11 [i_0] [i_0] [i_2 + 2] = ((/* implicit */short) var_15);
        }
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        arr_19 [i_0] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */short) max((-1LL), (((/* implicit */long long int) ((arr_1 [i_5]) != (arr_1 [i_5]))))));
                        arr_20 [i_0 - 1] [i_5] [i_0 - 1] [i_5] = -317433757;
                        arr_21 [i_5] [i_5] [i_4] [i_5] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_7 [i_0] [(_Bool)1]) >= (((/* implicit */int) var_8))))) + (((/* implicit */int) var_3))));
                        arr_22 [16LL] [i_5] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)11]))) > (arr_17 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0]))))) <= (((((/* implicit */_Bool) arr_9 [i_5] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63210))) : (3500304403118037557LL)))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_27 [i_6] [i_3] [i_0] [i_4] [i_6] [i_5] = ((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_8 [i_0 - 2] [i_0] [i_0 + 1]))))) ^ ((~(((/* implicit */int) ((((/* implicit */int) arr_25 [(_Bool)1] [i_0] [(signed char)12] [i_6])) > (((/* implicit */int) var_0))))))));
                            arr_28 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (short)4139)) - (((/* implicit */int) (short)28559))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_32 [i_0 - 2] [i_0 - 2] [22] [i_0] [i_5] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_3] [i_4]))));
                            arr_33 [i_0] [i_0] [i_4] [i_5] [i_7] = ((/* implicit */int) ((unsigned long long int) arr_25 [i_0] [i_0] [i_0 + 1] [i_4]));
                            arr_34 [i_0] [i_0] [i_4] [i_0] [i_0] [i_4] [(unsigned short)6] = ((/* implicit */unsigned short) ((arr_3 [i_0 + 1] [i_0 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            arr_35 [i_0] [i_3] [i_5] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_12 [i_0 - 2] [i_5] [i_0 - 2])) / (arr_2 [i_3] [i_5])));
                            arr_36 [18] [i_3] [i_5] [6] [i_4] = ((/* implicit */unsigned char) arr_3 [i_5] [(short)1]);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        arr_39 [12] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)22] [i_8])) ? ((~(arr_23 [i_8] [i_8] [i_8] [i_8] [(_Bool)1] [6] [10LL]))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)28559)) : (((/* implicit */int) arr_30 [i_8] [i_8] [(unsigned short)12]))))))) & ((+(arr_9 [16] [i_8]))));
        arr_40 [10] = ((/* implicit */_Bool) (short)28559);
    }
    for (short i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        arr_44 [i_9] [i_9] = ((/* implicit */_Bool) var_4);
        arr_45 [(_Bool)1] [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-28560)))))));
    }
}
