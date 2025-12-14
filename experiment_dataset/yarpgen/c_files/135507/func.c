/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135507
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] [(unsigned short)14] [i_3] = ((/* implicit */signed char) ((unsigned short) ((short) var_2)));
                        arr_13 [i_1] [i_2] [i_3] = ((/* implicit */int) ((unsigned short) ((signed char) (unsigned short)13)));
                        arr_14 [(unsigned short)4] [12] [i_0] [10] [i_2] &= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) var_1)));
                        var_10 *= ((/* implicit */unsigned short) ((long long int) ((int) (unsigned short)21559)));
                    }
                    for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
                    {
                        var_11 = ((/* implicit */int) ((_Bool) ((unsigned short) var_2)));
                        var_12 -= ((/* implicit */signed char) ((unsigned long long int) ((int) 52669933)));
                        arr_18 [i_4] [10] [10] [i_0] &= ((/* implicit */short) ((int) ((unsigned int) arr_0 [(short)2] [i_1])));
                        arr_19 [i_2] [8] [i_1] [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((_Bool) var_3)));
                    }
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_22 [i_0] [i_0] [i_2] [i_0] [(unsigned short)4] = ((/* implicit */long long int) ((short) ((unsigned short) var_7)));
                        arr_23 [i_0] [13] [4LL] [i_2] = ((/* implicit */signed char) ((unsigned short) ((signed char) var_9)));
                    }
                    var_13 = ((/* implicit */short) ((unsigned char) ((int) var_3)));
                    var_14 = ((/* implicit */unsigned int) ((short) ((unsigned short) var_2)));
                    var_15 *= ((/* implicit */signed char) ((unsigned short) ((unsigned long long int) arr_5 [i_0] [(signed char)14] [15ULL])));
                    var_16 += ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) var_5)));
                }
            } 
        } 
        var_17 = ((unsigned short) ((long long int) (signed char)0));
    }
    for (int i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) ((int) arr_17 [(unsigned char)0] [(unsigned short)2] [(unsigned char)0] [(short)4] [i_6]))));
        var_19 = ((/* implicit */_Bool) ((int) ((unsigned short) ((unsigned int) arr_20 [i_6] [i_6]))));
        arr_26 [i_6] = ((/* implicit */_Bool) ((unsigned long long int) ((short) ((short) var_6))));
        arr_27 [i_6] = ((/* implicit */int) ((unsigned short) ((signed char) ((unsigned int) (unsigned short)43970))));
        arr_28 [i_6] = ((/* implicit */unsigned short) ((_Bool) ((unsigned int) ((unsigned short) var_5))));
    }
    for (int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
    {
        arr_31 [i_7] [(signed char)5] = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)-64));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 17; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 2; i_10 < 17; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                arr_43 [i_7] [i_7] [i_9] [17U] [i_11] [i_9] [(signed char)14] = ((/* implicit */short) ((int) ((unsigned long long int) ((unsigned short) (short)0))));
                                var_20 = ((unsigned short) ((unsigned short) ((int) 750218769929209034ULL)));
                                var_21 = ((/* implicit */long long int) ((unsigned int) ((unsigned short) ((short) arr_25 [(unsigned short)17]))));
                                arr_44 [(unsigned short)4] [14U] [(unsigned short)8] [i_7] [(_Bool)1] = ((/* implicit */unsigned long long int) ((unsigned short) ((int) ((unsigned long long int) var_8))));
                                var_22 = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) ((_Bool) arr_4 [i_9]))));
                            }
                        } 
                    } 
                    arr_45 [i_7] [i_7] [2LL] [i_7] = ((unsigned short) ((unsigned long long int) ((unsigned short) var_7)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_12 = 3; i_12 < 14; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                {
                    var_23 = ((/* implicit */int) ((unsigned char) ((unsigned long long int) ((int) arr_47 [i_13] [i_7]))));
                    var_24 = ((/* implicit */int) ((short) ((int) ((signed char) (short)-4384))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 3; i_14 < 15; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) ((short) (short)-1))));
                                var_26 = ((/* implicit */long long int) ((signed char) ((unsigned short) ((unsigned int) arr_46 [i_15] [i_15]))));
                            }
                        } 
                    } 
                    arr_57 [i_7] = ((/* implicit */unsigned short) ((_Bool) ((int) ((signed char) (unsigned char)255))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */signed char) ((unsigned long long int) (short)6));
    var_28 = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) ((unsigned char) var_8))));
}
