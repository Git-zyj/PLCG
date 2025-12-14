/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12014
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_10 -= ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_3 [i_0])))), ((+(((/* implicit */int) var_0))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (((arr_0 [i_0]) + (((/* implicit */unsigned int) var_1))))))));
        var_11 -= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)41158))));
        var_12 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 17746387416336324352ULL)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (unsigned char)51)))), ((-(arr_5 [i_1] [i_1])))));
        arr_8 [i_1] = ((/* implicit */signed char) max((var_2), (((/* implicit */unsigned char) ((arr_5 [i_1] [i_1]) < (arr_5 [i_1] [i_1]))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_13 = var_3;
                arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_2]))));
                arr_14 [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2])) / (((/* implicit */int) arr_6 [i_2]))))), (max((4294967295U), (((/* implicit */unsigned int) arr_6 [i_2]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_29 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) max((arr_5 [i_5] [i_5]), (((/* implicit */int) var_3))))) != (((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (arr_6 [i_6]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_4]))) & (arr_17 [i_5] [i_5])))))));
                                var_14 = ((/* implicit */unsigned char) arr_22 [i_4] [i_4]);
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (+(arr_21 [i_4] [i_4] [i_4]))))) ? (((/* implicit */int) ((signed char) ((var_1) << (((arr_15 [i_6]) - (8682208688960395477ULL))))))) : (min((arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), (((arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) + (((/* implicit */int) var_2))))))));
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >= ((-((+(((/* implicit */int) var_6))))))));
                    var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_6)), ((~((-9223372036854775807LL - 1LL))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned char) (-((-((~(arr_2 [i_9] [i_9])))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + ((-(((unsigned long long int) arr_18 [i_9] [i_9] [i_9]))))));
        var_18 = ((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_31 [i_9] [i_9])) : (arr_22 [i_9] [i_9]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)5407)))))))) ^ (((/* implicit */int) var_5)));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_4)), (var_8)))) : ((~(((/* implicit */int) var_8))))))) && (((((/* implicit */int) var_8)) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))));
    }
}
