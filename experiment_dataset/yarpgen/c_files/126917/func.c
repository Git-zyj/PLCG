/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126917
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [i_2] |= ((/* implicit */_Bool) ((int) arr_3 [i_2]));
                        arr_13 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 3859389816U)) ? (3859389816U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107)))))));
                        arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((_Bool) arr_5 [i_0]));
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        arr_17 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)115);
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_22 [i_0] [i_0] [(_Bool)1] [i_2] [i_4] [i_5] = ((/* implicit */unsigned long long int) (((+(var_7))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)45735)) > (((/* implicit */int) (signed char)-107)))))));
                            arr_23 [i_0 - 1] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(524294412465037617LL)))) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_1] [i_0])) : (((/* implicit */int) ((unsigned char) var_7)))));
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            arr_26 [(unsigned short)6] [i_1] [i_2] [i_2] [i_2] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)123));
                            arr_27 [i_0] [i_2] = ((/* implicit */_Bool) var_11);
                        }
                    }
                    arr_28 [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
        arr_29 [i_0] = ((/* implicit */_Bool) (+(3859389816U)));
        arr_30 [i_0] = ((/* implicit */_Bool) (+(arr_5 [i_0])));
        arr_31 [(_Bool)1] = (short)2156;
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 9; i_7 += 3) /* same iter space */
    {
        arr_34 [i_7] = ((/* implicit */_Bool) ((var_7) / ((+(var_7)))));
        arr_35 [i_7] = ((/* implicit */_Bool) ((435577479U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)8])))));
    }
    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-2156)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_13))))) % (min((435577480U), (((/* implicit */unsigned int) 957416130))))));
    var_15 = (+(260046848));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            {
                arr_41 [i_9] [i_8] &= ((/* implicit */long long int) arr_37 [i_8] [i_9]);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 2) 
                    {
                        {
                            arr_46 [i_8] [i_8] [(unsigned char)8] &= ((/* implicit */unsigned int) var_13);
                            /* LoopSeq 1 */
                            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                            {
                                arr_50 [i_8] [15U] [i_8] [i_9] [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) (short)-13444)), (var_2)))) == (435577479U)));
                                arr_51 [8ULL] [i_11] [i_10] [(unsigned char)12] [8ULL] = ((/* implicit */short) max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 260046848)) ? (arr_44 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_8] [i_8] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                            }
                            arr_52 [(_Bool)1] [i_9] [i_10] [i_11] = ((/* implicit */signed char) (short)0);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        for (long long int i_14 = 1; i_14 < 15; i_14 += 2) 
        {
            {
                arr_57 [i_13] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((((/* implicit */unsigned int) -1281638022)) % (1U)))), (4100644481050976884LL))) / (((/* implicit */long long int) max((((arr_45 [i_13] [i_13] [i_13] [i_14] [i_14 + 2]) / (((/* implicit */int) arr_42 [i_14] [i_13])))), (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_56 [i_13]))))))))));
                arr_58 [i_13] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_38 [i_13] [i_13])), ((+(((/* implicit */int) arr_42 [i_14 - 1] [4ULL]))))));
            }
        } 
    } 
}
