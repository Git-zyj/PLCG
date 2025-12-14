/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135181
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) -136409482990310130LL)))))))));
        var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)62))));
        var_18 = ((/* implicit */unsigned long long int) var_9);
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))));
        var_20 = ((/* implicit */long long int) var_11);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_21 += ((/* implicit */unsigned int) var_14);
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) (~((-(((/* implicit */int) (!(var_3))))))));
                            var_23 = ((/* implicit */long long int) var_16);
                            var_24 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                            arr_22 [i_1] [i_2] [(unsigned short)4] [i_4] [i_4] = ((/* implicit */unsigned char) var_1);
                        }
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) var_13);
                            var_26 *= ((/* implicit */short) var_7);
                            var_27 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)98))))));
                            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                        }
                        arr_25 [i_1] [i_2] [i_1] [i_4] [(unsigned short)1] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
                        var_29 = ((/* implicit */_Bool) var_15);
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_5))));
                    }
                } 
            } 
        } 
        var_31 *= ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
        arr_26 [1LL] = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
    }
    /* LoopNest 2 */
    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 1) 
    {
        for (unsigned short i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            {
                var_32 = ((/* implicit */long long int) (~((+(((/* implicit */int) var_6))))));
                var_33 |= ((/* implicit */signed char) (-(var_14)));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned short) (!(var_0)));
    var_35 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned int i_10 = 3; i_10 < 9; i_10 += 1) 
        {
            for (long long int i_11 = 1; i_11 < 9; i_11 += 1) 
            {
                {
                    arr_41 [i_9] = ((/* implicit */unsigned short) var_2);
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 3; i_13 < 12; i_13 += 1) 
                        {
                            {
                                arr_48 [i_9] [i_10] [i_11] [(_Bool)1] [i_13] [i_9] = ((/* implicit */unsigned int) (+(var_10)));
                                arr_49 [i_9] [2U] &= ((/* implicit */int) var_11);
                                var_36 += var_4;
                            }
                        } 
                    } 
                    arr_50 [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_7))))))))));
                }
            } 
        } 
    } 
}
