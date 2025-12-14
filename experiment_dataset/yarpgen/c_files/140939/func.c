/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140939
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
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) arr_6 [(short)5] [i_4] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) (short)20698)) ? (134217664) : (((/* implicit */int) (unsigned char)227))))));
                                var_14 &= ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_11 [i_4] [i_2] [i_0 + 1] [i_2] [i_3 - 4])));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (arr_5 [i_0 - 2] [i_1] [i_2] [i_0 - 2])));
                }
            } 
        } 
    } 
    var_16 = var_12;
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_12)))))));
}
