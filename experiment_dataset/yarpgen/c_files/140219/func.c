/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140219
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = (_Bool)1;
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(var_9)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 2; i_4 < 11; i_4 += 4) 
                    {
                        var_15 = ((var_8) - (6797824758445766352LL));
                        var_16 = var_7;
                        arr_14 [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (+(arr_12 [i_3] [i_4] [i_4] [i_4 + 1])));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        for (long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((long long int) (signed char)56));
                                arr_19 [i_3] [i_2] [i_1] [i_5 + 2] [i_6] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_5 + 2] [i_6 - 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_20 [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) ((2441237999U) >> (((3280357655U) - (3280357625U))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [3] [i_7]))));
                    arr_28 [i_1] [i_8] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((75938739U) < (1855487795U)))) : ((-(((/* implicit */int) (unsigned char)105))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                {
                    var_19 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_11)))))));
                    arr_33 [i_10] = ((/* implicit */short) arr_12 [i_1] [2U] [2U] [10U]);
                    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_1])))))) & (arr_3 [i_10] [i_10])));
                    var_21 = (-(-1525238900));
                    var_22 = (signed char)97;
                }
            } 
        } 
    }
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((2786049523U) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}
