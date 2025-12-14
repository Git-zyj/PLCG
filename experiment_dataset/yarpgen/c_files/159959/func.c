/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159959
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1 - 2] = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 4; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(unsigned char)1] [i_3] [i_0] = ((/* implicit */unsigned char) min((((max((16352U), (4294967267U))) > (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (((arr_1 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
                                arr_19 [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (!((_Bool)1)));
                                arr_20 [i_0] [i_1 - 2] [(unsigned char)6] [i_3 + 1] [i_4 + 3] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) min(((unsigned char)2), (var_10)))), (min((arr_1 [i_0]), (((/* implicit */unsigned int) var_9)))))) + (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)110))))) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_4] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (_Bool)1)))))))), (max((((/* implicit */unsigned int) arr_17 [i_4 + 1] [i_4] [i_4 + 1] [7U] [i_4 - 4] [i_3])), (var_0)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        arr_25 [i_0] [i_1 - 2] [(unsigned char)10] [i_0] [i_0] &= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((unsigned int) arr_14 [(unsigned short)10] [i_0 + 2] [i_1 - 1] [(signed char)3] [i_0 + 2]))), (((long long int) 2260633557U)))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1 + 1] [i_1]))))));
                        arr_26 [i_0] [i_1 - 2] [i_1 - 2] [i_0] [i_5 - 1] [i_5] = arr_17 [i_0] [i_1 + 1] [10U] [i_5] [i_1 + 1] [i_2 + 2];
                        arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_5 [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        arr_28 [i_0] [i_0] [i_0] [i_0 - 1] = 2147483647;
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_7] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0] [i_1]))));
                            arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0]) > (arr_1 [i_0])));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_37 [6U] [i_1 + 1] [i_1] [i_1] [i_1 + 2] [(unsigned char)4] |= ((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)0))))));
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) arr_0 [i_0]);
                            arr_39 [i_8 + 1] [i_0] [i_2] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((arr_12 [i_0]) + (arr_12 [i_0])))) : (((/* implicit */unsigned int) ((arr_12 [i_0]) - (arr_12 [i_0]))));
                            arr_40 [i_8 + 1] [i_6 - 1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((4294967293U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6 + 3] [i_0 + 1])))));
                        }
                        for (int i_9 = 1; i_9 < 17; i_9 += 1) 
                        {
                            arr_45 [i_0] [i_1 - 1] [i_1 - 1] [i_6 + 2] [i_0] = ((/* implicit */unsigned char) ((var_0) + (arr_23 [i_0] [i_0 + 1] [i_0 - 1])));
                            arr_46 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_6 + 3] [i_9 + 1] [i_9] [(unsigned char)0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)13))));
                        }
                        arr_47 [i_0] = ((signed char) ((((/* implicit */_Bool) (unsigned char)243)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        arr_48 [i_0] [2] [i_0] [i_0 + 2] |= ((/* implicit */signed char) -1);
                    }
                    arr_49 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) ((var_11) | (((/* implicit */long long int) ((int) arr_5 [i_0] [i_0])))));
                    arr_50 [(_Bool)1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((var_7) + (((/* implicit */unsigned int) ((((arr_22 [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 1]) < (arr_5 [i_0] [i_1]))) ? (((/* implicit */int) (unsigned short)42978)) : (((/* implicit */int) var_2)))))));
                }
            } 
        } 
        arr_51 [0U] = ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) arr_24 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0])))));
        arr_52 [i_0] = ((/* implicit */unsigned short) ((_Bool) (-(arr_43 [i_0] [10U] [i_0] [i_0] [i_0]))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_55 [(signed char)0] &= ((/* implicit */_Bool) ((((((/* implicit */int) ((unsigned char) arr_53 [18U]))) > (((/* implicit */int) (_Bool)0)))) ? (arr_54 [i_10]) : ((+(arr_54 [i_10])))));
        arr_56 [i_10] [i_10] = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned int) arr_53 [i_10])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_10]))) / (arr_54 [i_10]))))));
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) + (var_15)));
    var_18 = ((unsigned int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-91))))), (min((((/* implicit */unsigned int) (unsigned char)24)), (var_0)))));
}
