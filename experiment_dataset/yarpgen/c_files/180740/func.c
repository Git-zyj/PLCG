/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180740
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_1)));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_13 [i_3] [(_Bool)1] [(_Bool)1] [i_3] = ((/* implicit */long long int) max((var_2), ((-(((/* implicit */int) (unsigned char)253))))));
                        arr_14 [i_0] [i_3] [(_Bool)1] |= ((/* implicit */long long int) ((((max(((_Bool)0), (var_1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) <= ((-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_9))))))));
                        arr_15 [i_0] [8] [i_2] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_20 [i_0] = ((/* implicit */unsigned int) (short)3584);
                        arr_21 [i_0] [i_2] [i_0] = ((/* implicit */long long int) (_Bool)1);
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_24 [i_0] [i_0] [i_2] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                            arr_25 [i_0] [i_2] [(_Bool)1] [i_5] = ((/* implicit */int) var_1);
                            arr_26 [i_0] = ((/* implicit */signed char) max((-5218896217667804903LL), (((/* implicit */long long int) ((int) var_1)))));
                        }
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_31 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)4836)) << (((/* implicit */int) (_Bool)1))));
                            arr_32 [i_7] [i_6] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1766606146)) ? (121732626) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (27219983U))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (var_5)))))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_1] [i_1] [i_2] [24] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -121732627)) % (12536412657458968187ULL)));
                            arr_36 [i_8] [i_0] [i_6] [2U] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (2185459116U)))));
                            arr_37 [i_0] = ((((-121732654) + (2147483647))) >> (((-121732629) + (121732631))));
                        }
                        for (int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                        {
                            arr_40 [i_0] [i_1] [i_2] [i_2] [i_6] [i_9] |= ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) (_Bool)1))))) - (max((((/* implicit */unsigned int) var_0)), (var_5))));
                            arr_41 [i_9] [i_9] = ((/* implicit */_Bool) ((((var_1) && (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_7))))));
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) (unsigned short)37205)) : ((~(((/* implicit */int) var_9))))))), (max((((/* implicit */unsigned int) var_0)), (var_5)))));
                            arr_43 [i_0] [i_1] [20] [i_6] [23ULL] = ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)14523)))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((((/* implicit */int) var_1)) != (((/* implicit */int) (short)0))))))));
                        }
                        arr_44 [i_2] [7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)234)) / (((/* implicit */int) ((_Bool) 3233808191558182307LL)))))) ? ((+(((((/* implicit */int) (short)-18)) / (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_4))));
                    }
                }
            } 
        } 
        arr_45 [12] = ((/* implicit */unsigned int) var_3);
        arr_46 [i_0] = ((((/* implicit */_Bool) max((((unsigned char) 2147483647)), (((/* implicit */unsigned char) var_0))))) || (((((/* implicit */int) var_0)) >= (((/* implicit */int) var_7)))));
        arr_47 [i_0] = var_0;
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_50 [i_10] = ((/* implicit */int) (_Bool)1);
        arr_51 [i_10] [i_10] = ((/* implicit */short) (~(var_2)));
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 17; i_11 += 4) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (int i_15 = 0; i_15 < 17; i_15 += 3) 
                        {
                            {
                                arr_68 [i_11] [i_12] [i_13] [i_12] [8U] = ((/* implicit */int) (_Bool)0);
                                arr_69 [i_11] [i_12] [i_13] [i_11] [i_15] [i_14] [(_Bool)1] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_1)))), ((-(((/* implicit */int) var_0))))));
                                arr_70 [i_11] [3] [i_15] [3] [i_15] [i_12] = ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 3) 
                        {
                            {
                                arr_75 [i_11] [i_17] [i_17] [i_16] [i_17] [i_16] [i_12] = ((/* implicit */unsigned int) max(((_Bool)0), ((_Bool)1)));
                                arr_76 [i_11] [i_12] [i_11] [i_16] [i_17] = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    arr_77 [8] = (~(((((/* implicit */_Bool) 121732638)) ? (((/* implicit */int) (short)14)) : (1133167807))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_6)) : (max((((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_4)) : (var_2)))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 121732626))))))));
}
