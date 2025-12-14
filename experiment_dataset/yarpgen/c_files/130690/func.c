/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130690
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = var_15;
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [10U] = ((/* implicit */long long int) var_18);
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            var_20 -= ((/* implicit */unsigned long long int) var_16);
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_13))));
                            var_22 = ((/* implicit */unsigned char) var_12);
                            var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_12)) : (var_3)))) ? (((((/* implicit */_Bool) var_14)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_4))));
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))));
                            var_26 &= ((/* implicit */unsigned int) var_15);
                        }
                        arr_19 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_14);
                        arr_20 [19ULL] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_0);
                        var_27 = ((/* implicit */short) ((var_4) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        var_28 = ((/* implicit */int) var_15);
                    }
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
            arr_23 [(unsigned char)13] [i_6] = ((/* implicit */unsigned char) var_1);
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) var_7))));
        }
        arr_24 [i_0] = var_11;
        /* LoopSeq 4 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */unsigned int) var_3))));
            var_32 -= ((/* implicit */unsigned long long int) var_3);
            var_33 = ((/* implicit */unsigned int) var_18);
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) var_17);
                        arr_32 [i_8] = ((/* implicit */signed char) var_0);
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            var_35 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_16))));
            var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13)));
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    {
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) var_7))));
                        var_38 -= ((/* implicit */long long int) var_15);
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (var_6)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_13)) : (var_10))))))));
        }
        for (int i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) var_8))));
            arr_43 [i_13] = var_14;
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned int) var_10);
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_43 = var_19;
            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) var_15))));
        }
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (signed char i_20 = 0; i_20 < 21; i_20 += 2) 
            {
                {
                    arr_64 [i_18] [20U] [(unsigned char)12] = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))));
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 21; i_22 += 2) 
                        {
                            {
                                var_45 *= ((/* implicit */unsigned int) var_7);
                                arr_71 [i_18] [i_18] [i_20] [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((var_4) ? (var_19) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))))));
        arr_72 [5LL] = ((/* implicit */unsigned char) var_10);
    }
    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) max((((/* implicit */long long int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (max((((/* implicit */long long int) var_18)), (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))))))))));
    var_48 = var_2;
}
