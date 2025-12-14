/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124967
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
    var_14 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_7);
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_1 + 3] [i_1 + 3])) : (((/* implicit */int) arr_6 [i_2 + 2] [i_1 + 3] [i_1 + 3]))));
                        var_16 = ((/* implicit */unsigned short) arr_6 [i_1 - 2] [i_1 - 3] [i_1 + 2]);
                        var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 2] [i_1 - 2] [i_3] [i_2 + 2])) ? (((/* implicit */int) arr_7 [(unsigned short)12] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1 - 2]))));
                        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_1 + 1] [i_2 + 4]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        arr_12 [i_4] = ((/* implicit */unsigned short) (~(11160568556522255002ULL)));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) 3389773493U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (7286175517187296613ULL))), (((/* implicit */unsigned long long int) var_2)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))))))));
        arr_15 [i_5] = ((/* implicit */short) (~(1048575LL)));
        var_21 |= ((/* implicit */long long int) ((unsigned short) ((unsigned short) var_0)));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)44597)))), (((((/* implicit */int) arr_4 [i_5])) ^ (((/* implicit */int) arr_4 [i_5])))))))));
    }
    var_23 = ((/* implicit */short) 0LL);
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            {
                var_24 = ((/* implicit */signed char) arr_9 [i_7]);
                arr_21 [i_7] [i_7] [3LL] = ((/* implicit */_Bool) (unsigned short)16831);
            }
        } 
    } 
}
