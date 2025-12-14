/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149732
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */signed char) var_18);
                            arr_14 [i_0] [i_1] [i_2] [i_4] = var_1;
                            arr_15 [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_12)) == ((+(((/* implicit */int) var_0)))))));
                        }
                        arr_16 [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) (+(arr_2 [i_2 + 3] [i_1 + 2]))));
                        arr_17 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) (((+(((/* implicit */int) ((_Bool) arr_5 [i_0]))))) - (((/* implicit */int) var_19))));
                    }
                    arr_18 [i_0] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) var_14)))) : (((((/* implicit */int) var_16)) << ((((+(((/* implicit */int) var_16)))) - (35680))))));
                    arr_19 [i_1] [i_1] = ((/* implicit */short) var_18);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_9))));
                                var_21 += (-((-(arr_21 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))));
                                var_22 = ((/* implicit */signed char) (_Bool)0);
                            }
                        } 
                    } 
                }
                for (int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    arr_27 [i_1] [i_1] [i_7] = ((/* implicit */signed char) var_13);
                    arr_28 [i_1] [i_1] = ((/* implicit */short) (!(arr_11 [i_1] [i_1] [i_7] [i_7] [i_7 + 1])));
                }
                for (signed char i_8 = 3; i_8 < 10; i_8 += 3) 
                {
                    arr_31 [i_1] [i_8 - 1] [i_1 + 2] [i_1] = (!(((/* implicit */_Bool) arr_29 [i_8] [i_0] [i_0])));
                    arr_32 [i_0] [i_1] = ((/* implicit */unsigned char) ((var_18) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12))))));
                }
                arr_33 [i_0] [i_1] [i_1] = ((/* implicit */int) var_15);
                /* LoopNest 2 */
                for (unsigned int i_9 = 2; i_9 < 9; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        {
                            arr_40 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (319534887U)))));
                            arr_41 [i_1] [i_0] [i_1] [i_9] [i_10] = ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    arr_46 [i_1] [i_1] [i_1] = ((/* implicit */short) var_6);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 11; i_12 += 4) 
                    {
                        arr_49 [i_12] [i_1] [i_1] [i_1] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) % (arr_6 [i_1] [i_1] [i_1 + 1] [i_12 - 2]));
                        arr_50 [i_1] [i_1] [i_11] [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) ((signed char) var_15));
                    }
                    for (unsigned char i_13 = 1; i_13 < 11; i_13 += 3) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((short) var_16))));
                        var_24 = ((/* implicit */_Bool) ((short) ((int) var_12)));
                    }
                    var_25 = ((/* implicit */int) (-(((arr_53 [i_0] [i_1 + 1] [i_1] [i_0] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                }
            }
        } 
    } 
    var_26 = 2972292049U;
}
