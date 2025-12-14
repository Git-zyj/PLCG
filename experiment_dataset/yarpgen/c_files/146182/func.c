/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146182
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
    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)32768))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_13 [(unsigned char)12] [i_3] [(unsigned char)12] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65535))));
                                arr_14 [i_4] [i_0] [i_4] [i_3] [i_0] = (unsigned short)59683;
                            }
                        } 
                    } 
                    arr_15 [12] [(unsigned char)1] [i_0] [i_1] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_6] [i_2 - 1] [i_5] [i_6] [i_6 - 4] = (_Bool)1;
                                arr_22 [(unsigned short)10] [14] [i_2] [i_2] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) 2046289132);
                                arr_23 [i_6] [i_5] [i_2] [i_5] [(unsigned short)6] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
                                arr_24 [i_0] [i_1] [i_5] [i_0] [i_6] [(signed char)4] = ((/* implicit */unsigned short) (_Bool)0);
                                arr_25 [i_0] [i_1] [i_1] [i_1] [i_1] [(unsigned short)0] [(unsigned short)0] = (_Bool)1;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [4U] [4U] = ((/* implicit */unsigned char) -291198810);
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (unsigned int i_8 = 3; i_8 < 15; i_8 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_33 [i_0] [i_8] [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                        arr_34 [i_0] [i_9] [i_8] [i_9] [(unsigned short)8] [i_7] = ((/* implicit */_Bool) (unsigned char)200);
                        arr_35 [i_0] = ((/* implicit */unsigned int) (unsigned short)14783);
                        arr_36 [i_9] [i_0] = (!((!((_Bool)1))));
                    }
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 3) 
                    {
                        arr_39 [i_0] [i_0] [i_0] = (-(((/* implicit */int) (_Bool)1)));
                        arr_40 [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) (~((~(702947963)))));
                        arr_41 [12] [12] [i_0] [i_10 + 1] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)30085))))));
                        arr_42 [(_Bool)1] [i_7] [i_8 - 2] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) 745946618);
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 3; i_11 < 15; i_11 += 4) 
                        {
                            arr_46 [i_0] [i_0] = ((/* implicit */int) (unsigned short)1728);
                            arr_47 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)65535);
                            arr_48 [i_0] [i_7] [(_Bool)1] [i_8 - 1] [i_11] = ((/* implicit */unsigned short) (+((+(-14052397)))));
                            arr_49 [i_11 - 3] [i_10] [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((-(1674599960)))));
                        }
                        for (int i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            arr_53 [i_0] [i_7] [i_8 - 3] [i_0] [i_0] [11] = ((/* implicit */unsigned short) -690421221);
                            arr_54 [i_0] [i_0] [i_0] [i_10] = 1869644351;
                            arr_55 [i_0] [i_7] [i_8] [i_7] [12] = (unsigned short)59445;
                        }
                    }
                    for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        arr_58 [i_0] [i_0] [i_7] [i_8 - 3] [i_13] = (unsigned short)62789;
                        arr_59 [i_0] [i_8 + 1] [i_7] [i_0] = (unsigned short)65515;
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 1; i_14 < 15; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            {
                                arr_64 [(signed char)9] [i_0] [i_15] [i_15] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned short)6092))))));
                                arr_65 [i_0] [i_7] [i_8 - 2] [i_0] [(_Bool)0] = ((/* implicit */int) (unsigned short)64994);
                                arr_66 [(unsigned short)8] [i_7] [i_8 - 1] [i_8 - 1] = (-((-(-690421223))));
                                arr_67 [i_7] [i_14 - 1] [(unsigned short)2] [(unsigned short)2] [i_7] &= ((/* implicit */_Bool) (+(26U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            {
                                arr_72 [i_17] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)63813);
                                arr_73 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_18 = 0; i_18 < 24; i_18 += 1) 
    {
        arr_76 [i_18] = 505691584;
        arr_77 [15] = ((/* implicit */unsigned char) 0U);
        arr_78 [i_18] [i_18] = ((/* implicit */_Bool) -1751770021);
    }
}
