/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189581
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
    var_16 = ((/* implicit */short) var_11);
    var_17 &= var_12;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((-7687818828099486817LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */int) var_12)) > (((/* implicit */int) var_2)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                        var_19 = ((/* implicit */int) var_1);
                        var_20 = ((/* implicit */long long int) var_15);
                        arr_11 [i_0] [i_1] [i_1] [i_3] = (~(((/* implicit */int) (signed char)-72)));
                    }
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_18 [i_5] [i_4] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) (~(var_8)));
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)));
                        }
                        arr_20 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) ((var_4) - (var_4)));
                    }
                    arr_21 [i_0] [i_1] = var_7;
                    arr_22 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (var_10)));
                }
            } 
        } 
        var_21 = ((((/* implicit */int) var_0)) > (((/* implicit */int) var_14)));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        arr_25 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 629934002)) ? (6938606243761606869ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (long long int i_8 = 4; i_8 < 14; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_34 [i_9] [i_8] [i_7] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
                        arr_35 [i_6] [i_7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            arr_38 [i_6] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) var_1);
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7033)) < (((/* implicit */int) (signed char)72)))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                            arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                        }
                        arr_42 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                    }
                } 
            } 
        } 
    }
    var_25 &= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)84))) <= (6499898077037483289LL))))) ^ (((var_1) ? (var_10) : (var_3))))) >> (((((/* implicit */int) var_0)) - (45)))));
}
