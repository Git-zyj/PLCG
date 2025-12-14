/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11166
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
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [1] [i_4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0])), (arr_10 [i_0] [i_2] [i_0] [i_4])))))) ? (min((arr_6 [i_0] [i_2] [i_2] [i_2 + 1]), (arr_6 [i_0] [i_0] [i_0] [i_2 + 1]))) : (max(((+(-121009820))), (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) var_9)) : (arr_6 [i_0] [i_1] [i_2 - 1] [i_4])))))));
                                arr_17 [i_2 + 2] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0]))))), (min((arr_7 [(_Bool)1] [i_2] [i_3] [i_4]), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) ((int) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_2 [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        for (long long int i_6 = 3; i_6 < 18; i_6 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 2; i_7 < 18; i_7 += 3) 
                {
                    arr_27 [i_6] [i_6 - 2] [i_6] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)62362)))) + (((((/* implicit */_Bool) arr_20 [i_5] [i_5 - 1] [i_7 - 2])) ? (((/* implicit */int) arr_20 [i_5] [i_5 + 2] [i_6])) : (1524628825)))));
                    arr_28 [i_6] = ((/* implicit */signed char) (-(min((arr_18 [i_7 - 1]), (arr_18 [i_7 - 2])))));
                    arr_29 [i_5] [i_6] [i_6] = ((/* implicit */int) 4075236941829498325ULL);
                }
                for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 3) 
                {
                    arr_33 [i_5] [i_6] [i_8] = ((/* implicit */long long int) ((int) (+(((/* implicit */int) arr_26 [i_6 - 2] [i_6] [i_8 + 2])))));
                    var_10 += ((/* implicit */signed char) ((long long int) (~(max((((/* implicit */unsigned long long int) 4151752842U)), (arr_19 [i_6]))))));
                }
                arr_34 [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_23 [i_5 + 2]);
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 3) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            {
                                var_11 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1067067132))));
                                arr_45 [i_6] [i_6] [i_6] [i_10] [i_11] = var_3;
                            }
                        } 
                    } 
                } 
                var_12 -= ((/* implicit */long long int) arr_26 [i_5] [(unsigned short)16] [i_6 - 2]);
            }
        } 
    } 
}
