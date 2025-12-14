/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151707
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
    var_16 = max((max((((long long int) 4569736269440928261LL)), (((/* implicit */long long int) (unsigned char)155)))), (max((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (var_15))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) arr_1 [i_0]);
                                var_18 = ((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) 9702693940637723228ULL);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_15 [i_1] [i_5 + 1] [i_5] [i_6 + 2] [(unsigned char)1] [i_6 - 1]))));
                                arr_17 [i_0] [i_6 - 2] = ((/* implicit */unsigned int) max((3821550264740678436ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_14 [i_0 - 1] [i_1] [i_1] [i_5] [i_1])))))))));
                                arr_18 [i_2] [i_6 + 1] [i_2] [i_2] [i_1] [i_0] &= ((/* implicit */unsigned long long int) 3137151593753099574LL);
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_6 [i_0]);
                    var_21 = ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_22 [i_7] [i_7] = ((/* implicit */long long int) ((unsigned long long int) ((signed char) var_2)));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_21 [i_7] [i_7]))));
        var_23 = ((/* implicit */_Bool) ((signed char) var_9));
        var_24 = ((/* implicit */short) (unsigned char)68);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) ((long long int) arr_14 [i_8] [i_8] [i_8] [i_8] [i_8]));
        /* LoopSeq 2 */
        for (unsigned short i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((signed char) ((unsigned char) var_5)));
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_27 = (short)-4886;
                            var_28 = ((/* implicit */long long int) ((unsigned long long int) arr_16 [i_9 + 2] [i_9 + 2] [i_9 + 1] [i_9 + 2] [i_9 + 2]));
                            arr_36 [i_8] [i_8] [i_9] [7ULL] [7LL] = ((/* implicit */short) (unsigned char)148);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_13 = 1; i_13 < 9; i_13 += 1) 
        {
            arr_41 [i_8] [i_13] = ((/* implicit */signed char) max((arr_32 [i_8] [i_8] [i_13 + 2]), ((+(arr_32 [i_8] [i_8] [i_13 + 2])))));
            var_29 = ((/* implicit */signed char) ((unsigned int) arr_2 [i_8] [i_13]));
        }
    }
    var_30 = ((/* implicit */unsigned short) var_3);
}
