/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135750
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)64853)), (var_6)))) ? (((/* implicit */int) (unsigned short)682)) : (((/* implicit */int) (unsigned char)51))));
    var_15 &= ((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_10)) >> (((var_6) - (1412542320U))))) == (var_3)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) max((((((/* implicit */int) (unsigned char)52)) * (((/* implicit */int) arr_1 [i_0 - 2])))), (((/* implicit */int) ((signed char) arr_1 [i_0 - 2])))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2 + 3])) | (((/* implicit */int) arr_1 [i_2 - 1]))))) ? (((/* implicit */int) min((arr_1 [i_1 - 1]), (arr_1 [i_0 - 1])))) : (((((/* implicit */int) (unsigned short)64853)) * (((/* implicit */int) arr_1 [i_1 - 1])))))))));
                    var_18 = ((/* implicit */unsigned int) (unsigned char)203);
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) min(((unsigned char)220), ((unsigned char)59)))), (max((2344396187145644397ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13)))));
    }
    for (int i_3 = 4; i_3 < 19; i_3 += 4) 
    {
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_3 - 2])) ? (17879277795330564861ULL) : (((/* implicit */unsigned long long int) arr_0 [i_3 + 1] [i_3])))))));
        arr_12 [i_3] [9U] = ((/* implicit */int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3 - 1] [15ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 - 4])) ? (((/* implicit */int) arr_4 [i_3] [8] [i_3])) : (((/* implicit */int) var_11))))) : (max((((/* implicit */unsigned long long int) (unsigned short)682)), (16102347886563907219ULL)))))));
    }
    for (long long int i_4 = 4; i_4 < 16; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((long long int) (short)609));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((_Bool) ((arr_15 [i_4]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [(unsigned short)8] [i_4]))))));
        var_21 = ((/* implicit */int) (~(max(((((_Bool)1) ? (10960879801837130341ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_7 [i_4] [i_4] [i_4] [i_4 - 1]))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 2]))) ^ (9411361869743682154ULL))) & (((/* implicit */unsigned long long int) (~(arr_13 [i_4 - 4] [i_5 - 1]))))));
                        var_23 = (+(((/* implicit */int) arr_6 [i_4] [i_4] [i_6 - 1])));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [i_4 - 3]), (arr_15 [i_4 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4 - 2])))))) : (((unsigned int) arr_15 [i_4 - 4]))));
                    }
                } 
            } 
        } 
        arr_25 [i_4] = ((/* implicit */unsigned int) (+(min((-8510977120688578389LL), (((/* implicit */long long int) arr_23 [i_4] [i_4] [i_4 - 1] [i_4 + 2]))))));
    }
    for (long long int i_8 = 4; i_8 < 16; i_8 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 2; i_9 < 17; i_9 += 2) 
        {
            for (long long int i_10 = 3; i_10 < 17; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 2; i_11 < 16; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 4; i_12 < 15; i_12 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) 1810571603U);
                                arr_41 [i_8 - 1] [i_8 - 2] [i_9] [i_10] [i_10] [i_11] [i_11] = (+(((/* implicit */int) arr_30 [i_8] [i_9] [i_10] [i_12])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 4; i_13 < 17; i_13 += 3) 
                    {
                        for (unsigned long long int i_14 = 3; i_14 < 16; i_14 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (~((+(arr_33 [i_8 - 2] [i_10 - 3] [i_13 - 1]))))))));
                                var_27 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                var_28 = max((min((((/* implicit */unsigned int) (unsigned short)696)), (2484395695U))), (((/* implicit */unsigned int) arr_9 [i_10])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_15 = 2; i_15 < 17; i_15 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_30 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)130))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-609)), ((unsigned short)63488)))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)123))))));
                    }
                    for (long long int i_16 = 2; i_16 < 17; i_16 += 1) 
                    {
                        var_31 = ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned char)130)));
                        var_32 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) + (max((((/* implicit */unsigned long long int) arr_22 [i_8] [8ULL] [i_8] [i_16])), (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_51 [i_8] [i_8] [i_8] [i_8 - 4])) != (max((((/* implicit */unsigned int) (unsigned short)1)), (arr_22 [6U] [(unsigned char)2] [i_10] [i_16 - 2]))))))));
                        var_33 = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */long long int) var_1)), (arr_16 [i_10 - 1]))));
                        var_34 = ((/* implicit */unsigned short) arr_6 [i_8] [i_9 + 1] [i_16]);
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 16; i_17 += 1) 
                    {
                        arr_55 [i_8 + 1] [i_8] [i_9] [i_10 - 2] [i_8 + 1] = ((/* implicit */unsigned int) arr_44 [10U] [i_9] [i_9]);
                        arr_56 [i_8] [i_9] [i_9] [i_10] [i_17 - 1] [i_9] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_8 + 1] [i_8 + 1] [i_17])) ? (arr_5 [i_8 - 1] [i_9 - 2] [14ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_8] [i_9 - 2] [i_10] [i_17 + 1] [i_17 - 1] [i_17 - 1])))))));
                    }
                    var_35 = ((/* implicit */int) var_0);
                    arr_57 [i_10 - 2] = ((/* implicit */long long int) -195608795);
                }
            } 
        } 
        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) min((((/* implicit */long long int) (unsigned short)63488)), (6993111060075373888LL))))));
    }
}
