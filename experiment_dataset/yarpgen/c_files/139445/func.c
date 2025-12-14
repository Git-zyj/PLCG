/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139445
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_6))))))) % ((~(((var_11) % (4095)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_1 + 4] [i_1 + 3] [i_1 + 1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_17 [i_4] [i_3] [i_2 - 2] [i_1 - 2] [i_0] = ((/* implicit */short) 1984408502);
                                arr_18 [i_4] [i_3] [i_2 - 1] [i_1 + 3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_2 + 2])) ? (var_6) : (((/* implicit */long long int) -1984408502))));
                                var_17 += ((/* implicit */long long int) (-(1984408502)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 11; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_27 [i_6] = ((/* implicit */unsigned int) ((((-1984408494) + (2147483647))) << ((((-(1984408502))) + (1984408505)))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((_Bool) ((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_2] [i_5 - 1] [i_6])))))))));
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */int) ((arr_15 [i_1 + 4] [i_1 - 2] [i_1 + 3]) > (var_1)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) -1984408494);
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_14 [i_2 + 1] [i_2]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) ((1984408497) - (((1984408493) + (((/* implicit */int) var_9))))));
                        arr_36 [i_8] [i_8] = ((((/* implicit */_Bool) arr_6 [i_1 + 2])) ? (((/* implicit */int) arr_11 [i_2 - 2] [i_2 + 2] [i_2] [i_2])) : (((/* implicit */int) arr_19 [i_2 - 1] [i_2 - 1] [i_1] [i_1 + 3] [i_1 - 1])));
                        arr_37 [i_8] = -1984408512;
                    }
                }
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_1] [i_9]) << (((((((/* implicit */int) arr_23 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1])) | (((/* implicit */int) arr_39 [i_1 - 2] [i_1 - 1] [i_1])))) + (37)))));
                        arr_43 [i_0] [i_1 + 2] [i_9] [i_9] [i_10] = ((/* implicit */short) (((((-(var_12))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_22 [i_10] [i_10] [i_10] [i_9] [i_1] [i_0])))))) * (((/* implicit */long long int) max(((-(1984408494))), (((((/* implicit */int) arr_16 [i_10] [i_9] [i_9] [i_9] [i_1] [i_0] [i_0])) % (-1984408507))))))));
                        arr_44 [i_10] [i_9] [i_1 - 1] [i_0] = max(((-(1984408533))), (((/* implicit */int) ((((((((/* implicit */int) var_14)) + (2147483647))) << (((1984408494) - (1984408494))))) < (((((/* implicit */int) arr_24 [i_10] [i_10] [i_9] [i_1] [i_1 - 2] [i_0])) >> (((((/* implicit */int) arr_41 [i_9])) - (61959)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        arr_49 [i_0] [i_0] [i_1] [i_9] [i_11] |= ((/* implicit */signed char) (-(((unsigned int) 1984408502))));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            arr_52 [i_0] [i_1] [i_9] [i_12] [i_12] = ((/* implicit */long long int) (+((~(1984408476)))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_1))));
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 4) 
                    {
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_26 [i_1 + 3] [i_1 - 2] [i_1 + 4] [i_13 + 2] [i_13 - 1])) ? (((/* implicit */long long int) 1984408494)) : (arr_26 [i_1 + 3] [i_1 - 1] [i_1 + 4] [i_13 + 2] [i_13 - 1]))), (((/* implicit */long long int) ((signed char) arr_50 [i_1 + 3] [i_1 - 2])))));
                        arr_56 [i_13] [i_9] [i_1 + 4] [i_0] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0]);
                        arr_57 [i_0] [i_1 + 4] [i_9] [i_13] = ((/* implicit */unsigned short) 1984408514);
                        arr_58 [i_0] [i_9] [i_13 - 1] = arr_10 [i_13] [i_9] [i_1] [i_0];
                    }
                    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        arr_63 [i_14] [i_14] [i_14] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_28 [i_0] [i_1] [i_1 + 3] [i_1] [i_1] [i_1 + 2]), (arr_28 [i_1] [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 1])))), ((~(var_0)))));
                        arr_64 [i_0] [i_1 + 4] [i_9] [i_14] [i_14] = ((/* implicit */signed char) -1984408494);
                        arr_65 [i_14] [i_1 + 3] [i_9] [i_14] [i_0] = ((/* implicit */unsigned long long int) ((var_1) < (((/* implicit */unsigned long long int) (-(1984408491))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_60 [i_1] [i_1 + 2] [i_1] [i_15])))), (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 + 4]) : (-1984408504)))));
                        arr_68 [i_15] [i_15] [i_15] [i_0] = ((/* implicit */unsigned long long int) var_11);
                        arr_69 [i_15] [i_15] [i_1 + 1] [i_15] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_15] [i_9] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_15] [i_0] [i_0] [i_0]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_1 + 3] [i_1 + 4])) || (((/* implicit */_Bool) arr_50 [i_1 - 2] [i_9]))))))));
                        var_26 *= ((/* implicit */signed char) arr_59 [i_9] [i_9]);
                        arr_70 [i_9] [i_9] [i_9] [i_15] [i_9] [i_9] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_42 [i_1 - 1] [i_1 + 4] [i_1 - 1] [i_1 + 3] [i_1 + 2] [i_9])) ? (((/* implicit */int) arr_20 [i_9] [i_1] [i_9] [i_15] [i_0] [i_15])) : (((((/* implicit */int) var_15)) + (1984408488))))));
                    }
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_50 [i_0] [i_1]) <= (arr_54 [i_0] [i_0] [i_0] [i_0] [i_0])))) <= (((/* implicit */int) ((signed char) arr_45 [i_16] [i_16] [i_9] [i_9] [i_1 + 1] [i_0])))));
                        arr_74 [i_1] [i_1] [i_9] [i_1] [i_1 + 1] |= ((/* implicit */_Bool) ((unsigned int) ((long long int) arr_71 [i_0] [i_1 + 3] [i_1] [i_16])));
                    }
                    arr_75 [i_0] [i_1] [i_9] = ((/* implicit */unsigned long long int) (((+(-1984408489))) <= ((((+(1984408515))) / (max((1984408476), (1984408488)))))));
                    arr_76 [i_9] [i_1 + 1] [i_9] = ((/* implicit */unsigned long long int) max((-1984408504), (-1984408477)));
                    arr_77 [i_9] [i_1] [i_0] = ((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) 1984408502)))) && (((/* implicit */_Bool) arr_45 [i_1 + 4] [i_1] [i_1 + 1] [i_1 + 4] [i_1 - 1] [i_1])))), (((((/* implicit */_Bool) ((int) arr_67 [i_0] [i_1 + 4] [i_9]))) && (((/* implicit */_Bool) ((int) var_2)))))));
                }
                var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (-1984408494)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_0] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (var_6))))) * (((/* implicit */long long int) ((var_11) / ((-(((/* implicit */int) var_14)))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) max((((/* implicit */short) ((((var_2) < (((/* implicit */unsigned int) 1984408476)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))), (((short) (+(1984408528))))));
    var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((max((-1984408497), (1984408494))), ((~(-1984408530)))))), (var_12)));
}
