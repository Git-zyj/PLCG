/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185814
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned short)16352)) : (((/* implicit */int) var_12))));
                                var_19 &= ((/* implicit */signed char) var_0);
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            {
                                arr_24 [i_1 + 1] [(_Bool)1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(4725269008905978741LL)))) + (var_3)));
                                arr_25 [i_6] [i_1] [i_0] [i_6] [i_7 + 1] [i_5] [i_0] = ((/* implicit */unsigned char) ((signed char) max((((((/* implicit */_Bool) (unsigned short)29423)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)193)))), (((/* implicit */int) max((arr_1 [i_7]), (((/* implicit */unsigned char) (signed char)101))))))));
                                arr_26 [i_0] [i_1 + 1] [i_1 + 1] [i_7] [i_7] = ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_8 = 2; i_8 < 16; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (int i_10 = 3; i_10 < 16; i_10 += 2) 
            {
                for (unsigned int i_11 = 2; i_11 < 14; i_11 += 2) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) var_2);
                        arr_35 [i_8] [(signed char)2] [i_8] [i_11] [i_8] &= ((/* implicit */int) min((var_3), (((/* implicit */unsigned long long int) arr_31 [i_8 + 1]))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */long long int) var_8);
        arr_36 [i_8 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (1136099612)));
    }
    var_22 = ((/* implicit */int) var_13);
    var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37440))) > (((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
}
