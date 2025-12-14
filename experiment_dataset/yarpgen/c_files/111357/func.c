/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111357
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
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) min((min((var_3), (var_0))), (((/* implicit */unsigned char) var_4))));
                    var_10 = ((/* implicit */long long int) var_9);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_11 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */signed char) var_4))))), (var_9)));
            var_12 = ((/* implicit */int) var_6);
            var_13 -= ((/* implicit */long long int) min((min((((/* implicit */unsigned short) var_2)), (var_8))), (((/* implicit */unsigned short) var_2))));
            var_14 *= ((/* implicit */unsigned char) min((min((var_7), (((/* implicit */unsigned short) var_4)))), (((/* implicit */unsigned short) var_4))));
        }
        var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_4)), (var_3)))), (var_8)));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_16 = ((/* implicit */signed char) min((min((var_9), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_4)), (var_8))))));
        var_17 = ((/* implicit */signed char) var_7);
        var_18 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_0)), (var_6))), (min((var_1), (((/* implicit */long long int) var_8))))));
        var_19 = ((/* implicit */unsigned char) var_5);
    }
    for (unsigned char i_5 = 1; i_5 < 7; i_5 += 2) 
    {
        var_20 &= var_4;
        arr_20 [0LL] = ((/* implicit */_Bool) min((min((var_9), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_1))))));
        /* LoopSeq 3 */
        for (long long int i_6 = 2; i_6 < 10; i_6 += 3) 
        {
            var_21 = ((/* implicit */int) min((var_9), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */unsigned char) var_2)))))));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    for (signed char i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) var_1);
                            arr_30 [(_Bool)1] [i_7] [(_Bool)1] [i_8] [i_9] = ((/* implicit */unsigned short) var_1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 10; i_10 += 2) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) var_7);
                            var_24 = ((/* implicit */signed char) min((min((((/* implicit */unsigned short) var_0)), (var_7))), (((/* implicit */unsigned short) var_3))));
                            var_25 = ((/* implicit */signed char) min((min(((unsigned char)13), (((/* implicit */unsigned char) (signed char)9)))), (min((((/* implicit */unsigned char) var_2)), (var_3)))));
                            var_26 = ((/* implicit */unsigned char) var_9);
                            var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)))), (min((var_8), (((/* implicit */unsigned short) var_2))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_12 = 1; i_12 < 8; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) min((((/* implicit */int) min((var_5), (((/* implicit */signed char) var_4))))), (min((((/* implicit */int) (_Bool)1)), (18)))));
                            var_29 = ((/* implicit */long long int) var_2);
                        }
                    } 
                } 
                arr_44 [(_Bool)1] [(unsigned char)8] [i_12] |= ((/* implicit */signed char) min((min((((/* implicit */unsigned short) var_3)), (var_8))), (min((((/* implicit */unsigned short) var_2)), (min((((/* implicit */unsigned short) var_3)), (var_7)))))));
            }
            for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                var_30 = var_4;
                arr_48 [(_Bool)1] [i_6] [i_15] [i_5] = ((/* implicit */short) min((min((var_7), (var_8))), (((/* implicit */unsigned short) min((var_4), (var_4))))));
            }
            /* vectorizable */
            for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                var_31 = ((/* implicit */unsigned char) var_2);
                var_32 = ((/* implicit */int) var_2);
                var_33 = ((/* implicit */int) var_5);
                arr_52 [i_5] [i_6] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) var_0);
            }
            var_34 = ((/* implicit */int) min((min((((/* implicit */long long int) var_4)), (var_1))), (min((var_6), (var_6)))));
            var_35 -= ((/* implicit */signed char) min((var_8), (var_7)));
        }
        for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            var_36 = ((/* implicit */long long int) min((min((var_8), (var_8))), (((/* implicit */unsigned short) var_2))));
            /* LoopNest 3 */
            for (unsigned char i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    for (int i_20 = 1; i_20 < 10; i_20 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (var_1)))), (min((var_9), (((/* implicit */unsigned long long int) var_3))))));
                            arr_64 [0] [(signed char)10] [i_18] [i_18] [i_20] = ((/* implicit */signed char) var_0);
                            var_38 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_3)), (var_1))), (((/* implicit */long long int) min((var_8), (var_8))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_21 = 2; i_21 < 7; i_21 += 2) 
        {
            var_39 = ((/* implicit */int) var_2);
            var_40 |= ((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) var_4))));
        }
        var_41 = min((min((var_9), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_0)), (var_7)))));
    }
    var_42 = ((/* implicit */_Bool) var_5);
    var_43 *= ((/* implicit */signed char) var_1);
    var_44 = ((/* implicit */short) min((((/* implicit */long long int) var_4)), (min((min((var_1), (((/* implicit */long long int) var_2)))), (var_1)))));
}
