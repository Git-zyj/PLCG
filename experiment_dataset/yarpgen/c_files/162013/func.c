/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162013
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) ((_Bool) var_5));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) var_10));
    }
    for (long long int i_1 = 3; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1 - 1] = (~((~(var_10))));
        var_16 = ((unsigned long long int) ((unsigned long long int) var_0));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) var_11);
        arr_8 [i_1 - 3] = ((/* implicit */int) ((short) ((long long int) ((unsigned int) var_3))));
    }
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 12; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) & (((/* implicit */int) var_7)))))))));
                var_18 += ((unsigned long long int) var_2);
                arr_18 [i_2] [i_4] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) var_5)))));
            }
            for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned short) var_2)))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 9; i_7 += 4) 
                    {
                        {
                            arr_26 [i_2] [i_3 - 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(var_5))))));
                            var_21 &= ((/* implicit */short) ((unsigned char) var_13));
                            arr_27 [i_2] [(unsigned short)10] = ((/* implicit */unsigned char) ((signed char) var_15));
                        }
                    } 
                } 
            }
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                arr_31 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_1)))));
                var_22 *= ((/* implicit */unsigned long long int) var_1);
                var_23 = ((/* implicit */long long int) var_15);
                var_24 = ((/* implicit */int) (~(var_0)));
                arr_32 [i_2 + 1] [i_2] = ((/* implicit */unsigned int) (((-(var_3))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14))))));
            }
            var_25 = ((/* implicit */unsigned char) (-(var_4)));
        }
        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
        {
            arr_35 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
            var_26 = ((int) var_11);
            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_1)))));
        }
        for (long long int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (long long int i_12 = 1; i_12 < 12; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_13))))))));
                            var_29 = ((/* implicit */unsigned char) ((unsigned short) var_10));
                            arr_46 [i_2] [i_2] [i_11] [i_12] [i_11] = ((/* implicit */unsigned short) ((var_0) / (var_9)));
                            var_30 -= ((/* implicit */unsigned short) var_14);
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8)))))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */short) ((_Bool) var_9));
            var_33 = var_6;
        }
        var_34 = ((/* implicit */_Bool) ((long long int) var_12));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                arr_53 [(_Bool)0] [4] [4LL] &= ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4))))));
            }
        } 
    } 
}
