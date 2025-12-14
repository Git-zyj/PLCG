/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108534
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */long long int) var_2)), (var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((15259194792548539230ULL) >> (((15259194792548539230ULL) - (15259194792548539200ULL)))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_6))))) : (min((17700516165923744794ULL), ((((_Bool)0) ? (var_0) : (746227907785806811ULL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (min((arr_1 [5LL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (-6965233429176607956LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                    arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12164))) : (var_8))))) ? (((((/* implicit */_Bool) ((arr_1 [i_2]) * (((/* implicit */unsigned long long int) 1618302952U))))) ? (((/* implicit */long long int) 1618302952U)) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [2ULL]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (max((((/* implicit */long long int) arr_0 [i_1])), (var_1))) : (((/* implicit */long long int) ((1618302948U) | (3610870285U))))))));
                    arr_7 [i_0] [i_0] [i_1 - 3] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_2] [i_1 - 4])) - (((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 3] [i_0 - 1] [i_1 - 3])))));
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned int) 229376)) : (868781673U))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1 + 1] [(signed char)0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_1)))));
                                arr_13 [i_0 - 1] [i_1 + 1] [i_1] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */signed char) (~((-(arr_1 [i_0 + 1])))));
                                arr_14 [i_0] [i_1 - 3] [(short)11] [(short)11] [i_0] [i_3] [i_3] = ((/* implicit */signed char) arr_3 [i_2] [i_3] [i_4 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
            {
                for (int i_7 = 3; i_7 < 12; i_7 += 4) 
                {
                    for (short i_8 = 3; i_8 < 13; i_8 += 4) 
                    {
                        {
                            arr_24 [i_0] [i_8 - 3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_6])) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((short) (signed char)-84))) : (var_5)));
                            arr_25 [3ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))) <= ((+(2676664333U)))));
                            arr_26 [(signed char)1] [i_5 + 3] [i_5 + 3] [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)66)) * (((/* implicit */int) arr_19 [i_8 - 1] [i_0]))));
                        }
                    } 
                } 
            } 
            arr_27 [i_0] [i_5 + 4] = ((/* implicit */_Bool) ((arr_21 [i_5] [i_0] [i_5 + 4] [i_5 - 1] [i_0] [6U]) ? (942449060U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1])))));
        }
    }
    var_16 = var_0;
    var_17 = ((unsigned char) (~(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (short i_9 = 1; i_9 < 14; i_9 += 3) 
    {
        for (short i_10 = 4; i_10 < 15; i_10 += 2) 
        {
            {
                arr_34 [0LL] [i_9] = ((/* implicit */short) arr_30 [4LL] [16ULL] [i_10 - 1]);
                arr_35 [i_9] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_32 [i_9] [i_10 - 1] [i_9 + 3])) ? (arr_32 [i_9 + 3] [i_10 - 2] [i_9 + 2]) : (arr_32 [i_9] [i_10 + 1] [i_9 + 2]))), (((((arr_32 [(_Bool)1] [i_10 - 4] [i_9 + 3]) + (2147483647))) >> (((arr_32 [i_9 + 2] [i_10 + 2] [i_9 + 1]) + (453351843)))))));
                arr_36 [i_9] [i_9] [4ULL] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) 2402117869U)) - (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-6965233429176607978LL))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3671669883U), (((/* implicit */unsigned int) (unsigned short)12164))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((3187549281161012386ULL) == (((/* implicit */unsigned long long int) arr_32 [i_9] [(unsigned char)8] [(unsigned char)8])))))))) : ((+(13796135860379574131ULL)))));
                var_19 = ((/* implicit */signed char) (short)29297);
            }
        } 
    } 
}
