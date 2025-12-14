/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180611
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
    var_15 += ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_16 = ((((/* implicit */int) arr_5 [i_0] [(signed char)6] [(unsigned short)5])) << (((/* implicit */int) ((unsigned char) (_Bool)1))));
                    var_17 = ((/* implicit */unsigned char) ((arr_0 [i_0 + 1]) + (arr_0 [i_0 - 1])));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            arr_13 [i_3] [i_1] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) (unsigned short)2032)))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) (short)16572)) ^ (((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */unsigned char) (-(arr_9 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2])));
                        }
                        for (short i_5 = 1; i_5 < 7; i_5 += 2) 
                        {
                            arr_16 [i_0] [i_5] [i_0] [(signed char)0] = ((/* implicit */int) arr_15 [i_2 - 1] [i_2 - 1] [i_2] [i_0 - 1] [i_1] [i_5 + 1] [(_Bool)1]);
                            arr_17 [i_0] [i_0] [(short)7] [i_0] [(short)1] [i_0] [i_5] = ((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                            arr_18 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))));
                        }
                        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_2 + 1]);
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1658396547)) && (((/* implicit */_Bool) (signed char)127))));
                            arr_23 [i_1] [i_1] [i_1] [i_3] [i_1] [i_6] = ((/* implicit */unsigned char) 8941289842132188273ULL);
                        }
                        for (unsigned short i_7 = 4; i_7 < 9; i_7 += 1) 
                        {
                            var_22 += ((/* implicit */unsigned char) (((_Bool)1) ? (1658396574) : (((/* implicit */int) (signed char)32))));
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_7] = ((/* implicit */signed char) ((unsigned short) arr_12 [i_2 + 1]));
                        }
                        arr_27 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-89)) % (((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_3] [i_2] [(signed char)1] [i_2 - 2]))));
                    }
                    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_0 - 1] [i_8] [i_0 - 1] [i_2 + 1] [i_2 + 1] [(unsigned char)3] [i_1]))));
                        var_24 = ((/* implicit */unsigned long long int) arr_12 [i_0 + 1]);
                        var_25 += ((/* implicit */_Bool) (+(((/* implicit */int) ((11938403428435639024ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */int) (short)32394);
                        arr_33 [i_9 + 1] [i_9] [i_0] = ((/* implicit */unsigned char) (short)28171);
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_2 - 2] [i_0 - 1])))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */short) ((unsigned long long int) (~(arr_11 [i_0] [(unsigned char)5] [i_0]))));
                        arr_37 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) (short)21854));
                        var_29 += ((/* implicit */short) ((833148892) + (((/* implicit */int) arr_30 [i_0] [i_1] [(short)6] [i_0 + 1] [i_1]))));
                    }
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((unsigned short) arr_14 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [(short)8])))));
        arr_38 [i_0] = ((short) arr_35 [i_0 - 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (unsigned short i_11 = 3; i_11 < 14; i_11 += 1) 
    {
        var_31 += ((/* implicit */unsigned long long int) ((_Bool) (signed char)-48));
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            for (int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    {
                        var_32 = ((/* implicit */short) ((int) (unsigned short)14397));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_14] [i_11 - 1] [i_12] [i_11 - 1])) < (411365315)));
                    }
                } 
            } 
        } 
        arr_49 [i_11] [i_11 - 2] = (-(2873790476290657904ULL));
    }
}
