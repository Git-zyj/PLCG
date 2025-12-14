/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10735
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (unsigned char)71)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_20 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)65280)) ? (2160240701750426116LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))))), (max((max((var_6), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])))), (((/* implicit */unsigned long long int) var_3))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_2 = 4; i_2 < 18; i_2 += 3) 
            {
                var_21 += ((/* implicit */short) (-(((/* implicit */int) var_7))));
                var_22 += ((/* implicit */unsigned short) var_18);
            }
            /* vectorizable */
            for (unsigned short i_3 = 2; i_3 < 18; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 2] [i_3 - 2]))));
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-32758))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_3 + 1] [i_1] [i_3 + 1])))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] [i_1] [i_3 - 2] = (+(arr_10 [i_3 - 2] [i_3 + 1] [i_3 + 1]));
                var_26 += ((/* implicit */unsigned short) (-(arr_12 [i_3 + 1] [i_1] [i_0] [i_0])));
            }
        }
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0]);
            var_28 = ((/* implicit */unsigned char) (-((-(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_6] [i_6])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))))));
            var_29 = ((/* implicit */short) ((unsigned int) min((arr_19 [i_6] [i_6] [i_0]), (arr_19 [i_0] [i_6] [i_6]))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            arr_23 [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_17))))));
            var_30 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_7])) ? (arr_22 [i_7] [i_0]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_7])))));
            arr_24 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_5 [i_7])));
        }
    }
    for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            var_32 = ((/* implicit */short) arr_0 [i_8]);
            /* LoopNest 3 */
            for (signed char i_10 = 2; i_10 < 17; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_10 - 2] [i_10 + 1] [i_10 + 1]))));
                            var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_10 - 1] [i_10 - 2])) ? (arr_28 [i_10 - 2] [i_10 - 2]) : (arr_28 [i_10 + 1] [i_10 - 2])));
                            var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((arr_19 [i_9] [i_9] [i_11]) ? ((+(arr_4 [i_11]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))))))));
                        }
                    } 
                } 
            } 
        }
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_8] [i_8] [i_8])) <= ((~(((/* implicit */int) (unsigned short)231))))));
        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_32 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) ? (min((((var_7) ? (arr_22 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_18)))) : (min((((/* implicit */unsigned long long int) ((long long int) var_13))), (arr_2 [i_8] [i_8] [i_8])))));
    }
    var_38 = (signed char)60;
    var_39 = ((/* implicit */unsigned int) (-(max((var_2), (((/* implicit */long long int) ((int) var_15)))))));
}
