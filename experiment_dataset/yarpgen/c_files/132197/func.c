/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132197
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
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) ((unsigned char) var_13)))))), ((~((-(((/* implicit */int) var_15))))))));
    var_17 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned char) (+(arr_6 [i_0] [i_1] [i_1])));
                    arr_9 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)0)), (max((((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0])))), (min((((/* implicit */long long int) (short)-20698)), (arr_4 [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)246))));
        arr_12 [(unsigned short)2] [i_3 + 1] |= ((/* implicit */unsigned char) arr_7 [i_3] [i_3] [i_3]);
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-25))));
        var_19 = arr_5 [i_3] [i_3] [i_3 - 1];
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) (+(3868806215U)));
        var_20 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)12))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), ((unsigned short)60814)));
    }
}
