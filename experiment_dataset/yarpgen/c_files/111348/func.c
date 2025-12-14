/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111348
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
    var_17 |= ((/* implicit */_Bool) (+(((((254U) / (898622500U))) - (var_1)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                arr_8 [i_0] [i_2] = ((/* implicit */_Bool) var_15);
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    for (short i_4 = 3; i_4 < 10; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */short) (((~(arr_10 [i_0] [i_0] [i_2 - 2] [i_3]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8))))));
                            arr_17 [i_0] [i_0] [i_0] [i_1] [i_4] [i_4] [i_1] = ((/* implicit */int) ((2043241323U) % (arr_10 [i_0] [i_1] [i_2 + 1] [i_1])));
                        }
                    } 
                } 
                arr_18 [8U] [i_2] = ((/* implicit */_Bool) ((int) var_10));
            }
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 4; i_7 < 10; i_7 += 3) 
                    {
                        {
                            arr_26 [i_0] [(short)1] [i_5] [i_6] [i_7] = ((short) arr_25 [i_7 - 3] [i_7 - 3] [i_7] [i_7 - 3] [i_7 - 2] [i_7]);
                            arr_27 [i_7] [i_7] [i_5] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */int) var_13)) == (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            arr_28 [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                            arr_29 [i_0] [(_Bool)1] [i_6] [i_6] [i_6] [i_7 - 3] [i_1] = (short)-20057;
                        }
                    } 
                } 
                arr_30 [i_0] [i_1] [i_0] = ((((((/* implicit */_Bool) (unsigned short)30965)) ? (((/* implicit */unsigned int) 1099458881)) : (1048576U))) >> (((((/* implicit */int) arr_23 [i_0] [i_0] [i_5])) - (17834))));
                arr_31 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (short)0)) | (1649649290)));
            }
            arr_32 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)1024)) << (((/* implicit */int) var_10)))) % (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_8 = 3; i_8 < 9; i_8 += 4) 
        {
            arr_35 [i_0] [i_8] [i_8] &= ((/* implicit */_Bool) var_12);
            arr_36 [i_8] = ((/* implicit */_Bool) ((unsigned int) (~(arr_34 [i_8] [i_8] [(short)3]))));
        }
        /* LoopSeq 1 */
        for (short i_9 = 1; i_9 < 7; i_9 += 1) 
        {
            arr_39 [i_0] [i_9] [i_9 + 1] = ((/* implicit */unsigned short) min(((!((((_Bool)0) || (((/* implicit */_Bool) (unsigned short)40643)))))), ((!(((/* implicit */_Bool) (short)9193))))));
            arr_40 [i_0] [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_37 [i_0] [i_0] [i_9 + 2])) + (((/* implicit */int) arr_2 [i_9 + 3] [i_0]))));
            /* LoopNest 3 */
            for (unsigned short i_10 = 1; i_10 < 9; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        {
                            arr_48 [i_0] [i_9] [i_10] [i_9] [i_9] [i_10] = (-(max((((/* implicit */unsigned int) -901428695)), (arr_45 [i_0] [i_0] [i_9 + 1] [i_10 + 1] [i_11] [4U] [(unsigned short)2]))));
                            arr_49 [8U] [3] [i_10 + 2] [3] [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
            } 
        }
    }
    var_18 = ((/* implicit */unsigned short) ((min((var_1), (min((((/* implicit */unsigned int) (short)20911)), (327671290U))))) << (((((/* implicit */int) var_13)) - (20807)))));
}
