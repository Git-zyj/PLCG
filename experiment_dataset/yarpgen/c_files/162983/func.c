/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162983
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
    var_15 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((2299560049U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)11167)))))), (((long long int) (short)11167))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1] [i_0]);
                                var_17 = ((/* implicit */long long int) (+(((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (var_6))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((unsigned long long int) (+(((/* implicit */int) var_9))))))))));
                    arr_11 [(_Bool)0] [i_0] [i_1] = ((/* implicit */unsigned char) (!((!((_Bool)1)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (short i_6 = 2; i_6 < 15; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 15; i_8 += 4) 
                    {
                        {
                            arr_28 [15LL] [i_6] [i_6 - 1] [i_7] [i_6 - 1] [i_5] = ((/* implicit */long long int) (+((+((+(((/* implicit */int) (_Bool)0))))))));
                            /* LoopSeq 1 */
                            for (short i_9 = 3; i_9 < 13; i_9 += 4) 
                            {
                                var_19 += (+(((/* implicit */int) (short)11167)));
                                arr_31 [i_5] [i_5] [i_5] [i_5] [(short)1] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                                var_20 *= ((/* implicit */short) ((int) (+(((/* implicit */int) var_9)))));
                            }
                        }
                    } 
                } 
                arr_32 [i_5] = ((/* implicit */long long int) var_6);
                var_21 &= ((/* implicit */long long int) arr_29 [i_6] [0LL] [12LL] [i_6]);
                var_22 += ((/* implicit */short) ((((/* implicit */int) (short)11167)) >> (((/* implicit */int) ((_Bool) (+(arr_29 [i_5] [i_5] [(unsigned char)0] [i_5])))))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        {
                            var_23 = (i_5 % 2 == zero) ? ((+((((((+(var_1))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_22 [7U] [i_5])) - (129))))))) : ((+((((((+(var_1))) + (9223372036854775807LL))) << (((((((((/* implicit */int) arr_22 [7U] [i_5])) - (129))) + (125))) - (58)))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+((+(((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_11);
    var_26 = ((/* implicit */_Bool) var_6);
}
