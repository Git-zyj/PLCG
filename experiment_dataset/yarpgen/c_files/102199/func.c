/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102199
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (-(((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (_Bool)0))))));
                                var_14 += ((/* implicit */unsigned char) (+(max((arr_0 [i_2 - 1]), (((/* implicit */int) (unsigned char)102))))));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_1 + 2] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(1193554171)))) || (((/* implicit */_Bool) (unsigned short)41263))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 3; i_5 < 16; i_5 += 3) 
        {
            var_15 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)17356)) : (arr_10 [4U] [i_0] [i_5] [(unsigned char)10] [i_5 - 1])));
            arr_17 [16] = ((/* implicit */short) (-(((/* implicit */int) var_8))));
            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)13652))));
        }
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_1 [i_6] [i_7 + 1])), (1003946291714126954ULL)));
                    var_18 = ((/* implicit */short) ((unsigned long long int) arr_20 [i_0] [i_6] [i_7] [i_7 + 2]));
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        arr_25 [i_8] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) 8972042406640842508ULL))) < (((/* implicit */int) var_1))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                {
                    arr_33 [i_8] [i_9] [i_10] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 9; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 2; i_12 < 8; i_12 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_28 [i_8]))));
                                var_20 = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */long long int) arr_8 [i_12] [i_9] [i_10] [i_12 - 2])) < (arr_18 [i_12] [(unsigned char)14])))), (arr_28 [i_11 - 2])));
                                arr_39 [i_12] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_27 [i_11 + 1])) : (((/* implicit */int) max(((short)30378), (((/* implicit */short) arr_36 [i_8])))))))));
                                arr_40 [i_8] [i_12] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) arr_37 [i_8] [i_8] [i_12] [i_8] [i_8]);
                                var_21 = ((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [i_10] [i_11] [i_12]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15440))) | (((((/* implicit */_Bool) (short)2048)) ? (arr_1 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20))))))), (((/* implicit */unsigned int) (short)-2070)))))));
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 11; i_13 += 3) 
    {
        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_13]))))) >> (((/* implicit */int) (unsigned char)13))));
                        var_24 *= ((/* implicit */signed char) 1193554171);
                    }
                    var_25 += ((/* implicit */long long int) var_5);
                    var_26 = ((/* implicit */int) ((_Bool) (short)-19641));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
}
