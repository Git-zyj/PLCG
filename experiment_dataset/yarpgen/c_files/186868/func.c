/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186868
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
    var_18 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = arr_5 [i_1 + 1];
                var_20 = ((/* implicit */short) 2047);
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_21 = ((/* implicit */long long int) arr_4 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) arr_8 [i_1 - 1] [i_1 - 1] [i_2] [i_3]);
                                var_22 = ((/* implicit */short) ((((arr_12 [i_1 - 1] [i_1 - 1] [i_1] [i_1]) + (2147483647))) >> (((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) + (775362007)))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) var_1);
                }
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_24 = (unsigned short)51864;
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)44724)) ? (((/* implicit */int) max((arr_7 [i_1 - 1] [i_1 - 1] [i_5] [i_1 + 1]), (arr_7 [i_0] [i_0] [i_1 + 1] [i_5])))) : (((/* implicit */int) var_7))));
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 144115188075855871ULL)))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) arr_25 [i_8] [i_9]);
                        var_26 = ((/* implicit */signed char) arr_29 [i_6] [i_7] [i_8] [i_8]);
                        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) ((int) (unsigned short)20812))))))));
                        var_28 = ((/* implicit */unsigned char) (+((((_Bool)1) ? (-2147483627) : (((/* implicit */int) (signed char)-1))))));
                    }
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_17 [i_6] [i_7] [i_8] [i_10]) + (arr_17 [i_6] [i_7] [i_8] [i_10])))) ? (((long long int) arr_17 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */long long int) max((arr_17 [i_6] [i_7] [i_8] [i_10]), (arr_17 [i_6] [i_7] [i_8] [i_10]))))));
                        var_30 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_9 [i_6] [i_7] [i_8] [i_10])) || (((/* implicit */_Bool) (unsigned short)20811))))));
                        arr_38 [i_8] [i_7] [i_8] [i_10] [i_8] [i_6] = ((/* implicit */unsigned long long int) arr_19 [i_7] [i_7]);
                    }
                    var_31 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (short)-8192)) | (((/* implicit */int) arr_2 [i_6])))));
                }
            } 
        } 
    } 
}
