/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18219
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (unsigned short)4629);
                    arr_7 [i_2] [(unsigned char)1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned char) arr_2 [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 2; i_3 < 12; i_3 += 1) 
    {
        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)44)) / (((((/* implicit */int) var_10)) - (((/* implicit */int) ((unsigned short) (signed char)-59)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_26 [i_3] [i_3] = (unsigned char)128;
                                arr_27 [i_3] [i_4] [i_3] = max((((((/* implicit */_Bool) 1001460502)) ? (799096119U) : (799096119U))), (((/* implicit */unsigned int) min((arr_24 [i_3 + 1]), (arr_5 [i_5 + 1] [i_5 + 1] [i_4 + 1] [i_3 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_32 [13] [i_3] [(short)6] [i_4 + 2] [i_4 + 1] [i_3] [i_3 + 1] = ((((/* implicit */unsigned int) max(((-(-1001460502))), (((/* implicit */int) arr_19 [i_3] [i_9]))))) ^ (((((/* implicit */_Bool) 3478451468U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (799096119U))));
                                arr_33 [i_3] [i_8] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_31 [i_3 - 2] [i_3] [i_5 + 1])), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_4 [i_9])) : (((/* implicit */int) arr_3 [(unsigned char)0] [i_4 + 2] [i_5])))))) >= (((((/* implicit */int) arr_13 [i_3] [i_3 + 1])) * (((/* implicit */int) arr_13 [i_3] [i_3 + 1]))))));
                                arr_34 [i_3 + 2] [i_8] [i_8] [i_3] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_11 [i_3] [i_3])), (min((((/* implicit */unsigned int) arr_2 [(unsigned char)4])), (3495871162U)))))) ? (((/* implicit */int) arr_31 [i_4 + 1] [i_3] [i_8 + 1])) : (((/* implicit */int) var_1))));
                                arr_35 [i_3] [i_3] [i_3] [3LL] [i_9] = ((/* implicit */short) min(((-(((arr_24 [i_3]) ? (3495871192U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)14762)), (1001460502))))));
                            }
                        } 
                    } 
                    arr_36 [i_3 + 1] [i_4 + 1] [i_5 + 1] [i_3] = ((/* implicit */unsigned char) (+(816515828U)));
                }
            } 
        } 
    } 
}
