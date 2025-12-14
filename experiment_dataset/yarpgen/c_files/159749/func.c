/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159749
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)252)) ? (3912577279U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98)))))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_2 - 2] [i_3] [i_0]);
                        var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_0 - 2]))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 - 2]))));
        /* LoopNest 3 */
        for (long long int i_4 = 4; i_4 < 9; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 1; i_6 < 7; i_6 += 3) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_6 + 3])) ? (arr_14 [7] [i_4 - 3] [i_4 + 1] [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)0))))));
                        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 - 2])) ? (((/* implicit */int) arr_8 [i_0 - 2])) : (((/* implicit */int) arr_5 [i_4 - 2] [i_4 - 3] [i_4 + 1]))));
                        var_17 = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
        } 
        var_18 = arr_16 [8LL] [i_0 + 1] [i_0 + 1];
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)97));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) ((unsigned char) var_8));
        var_22 ^= ((/* implicit */_Bool) var_7);
    }
    var_23 |= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) max((var_9), (((/* implicit */short) (signed char)-106))))), (var_6))), (max((((/* implicit */unsigned short) var_3)), (min((var_6), ((unsigned short)38124)))))));
}
