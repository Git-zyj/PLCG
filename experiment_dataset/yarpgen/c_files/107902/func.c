/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107902
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
    var_18 += ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_4)), (var_3)))) ? (arr_2 [i_2]) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_3])))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((arr_5 [i_3]), ((+(((/* implicit */int) arr_4 [i_1] [i_2] [i_3] [i_4]))))))) != ((~(4294967295U))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_16))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned char) var_4);
                        arr_20 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) min((arr_15 [i_6]), (((/* implicit */unsigned char) (signed char)31))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_9 = 2; i_9 < 15; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                {
                    arr_26 [i_10] [i_10] [i_10] &= ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) arr_12 [i_5 + 4])))));
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 16; i_11 += 2) 
                    {
                        for (long long int i_12 = 2; i_12 < 15; i_12 += 3) 
                        {
                            {
                                arr_32 [i_5 + 1] [i_5 + 1] [i_9] = ((/* implicit */unsigned char) var_5);
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_14))));
                                arr_33 [i_5] [i_9 - 2] [i_10] [i_10] [i_9] = ((/* implicit */unsigned int) (!((!(arr_29 [i_5 + 1] [i_9 + 2] [i_9] [i_12 - 1])))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_16 [i_5] [(unsigned char)6] [i_10] [i_10]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 -= ((/* implicit */signed char) ((unsigned short) arr_31 [i_5 - 1] [i_5 + 1] [(unsigned short)1] [i_5 - 1] [i_5 + 1] [i_5] [(unsigned char)15]));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((long long int) arr_34 [i_13])))));
    }
}
