/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179209
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0]))))) ? (((/* implicit */int) arr_3 [i_1] [(short)5] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_17 [i_3] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) var_2);
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) == (arr_5 [i_1] [i_2])));
                            }
                        } 
                    } 
                }
                var_14 = ((/* implicit */int) arr_15 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (int i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            {
                arr_22 [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) var_7);
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 17; i_9 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) arr_18 [i_8] [i_9]);
                                var_16 = ((((/* implicit */_Bool) (-(arr_20 [i_5] [i_5])))) ? (((((((((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_8] [i_9])) ? (((/* implicit */int) arr_27 [i_9] [i_8] [(unsigned char)11] [i_5])) : (((/* implicit */int) var_3)))) + (2147483647))) << (((((/* implicit */int) var_6)) - (48117))))) : (max((((/* implicit */int) ((unsigned char) 1435524589))), ((-(((/* implicit */int) arr_26 [i_9] [i_8] [i_6])))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_6))))))), (max((((/* implicit */long long int) var_3)), (var_10)))));
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            {
                                arr_39 [i_11] = ((/* implicit */short) var_4);
                                var_18 = (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_5] [i_6]))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((int) arr_18 [i_5] [i_5])) ^ (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) < (arr_21 [13U] [(unsigned short)1] [i_6]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned long long int) ((int) var_12))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_9)))))))));
}
