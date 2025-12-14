/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122560
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (var_7))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (((unsigned long long int) var_5))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_0)) ? (var_6) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))))))));
        arr_4 [i_1] = ((/* implicit */signed char) var_12);
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            var_17 = ((/* implicit */long long int) var_0);
            arr_11 [i_3] = ((/* implicit */unsigned char) ((_Bool) var_2));
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_1))));
            var_19 = ((/* implicit */unsigned char) ((_Bool) ((long long int) var_9)));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 2; i_4 < 12; i_4 += 3) /* same iter space */
            {
                arr_16 [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((int) ((short) var_8)));
                var_20 ^= ((/* implicit */long long int) var_9);
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                    arr_20 [i_3] [i_3] [i_5 - 1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_5)) ? (var_6) : (var_12))));
                }
                for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((short) var_3));
                    var_23 &= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((unsigned int) ((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((long long int) var_7))) ? (((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    arr_28 [i_3] [(_Bool)1] [(_Bool)1] [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2973662003U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) : (2973662003U)));
                    var_24 = ((/* implicit */_Bool) ((unsigned short) ((var_2) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))))));
                    var_25 = ((/* implicit */long long int) var_11);
                }
            }
            for (unsigned char i_8 = 2; i_8 < 12; i_8 += 3) /* same iter space */
            {
                arr_32 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)125)) ? (var_4) : (((/* implicit */int) (signed char)-1))));
                var_26 = ((/* implicit */signed char) ((short) ((unsigned char) ((short) var_5))));
            }
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            var_27 = ((/* implicit */unsigned long long int) var_4);
            /* LoopNest 3 */
            for (unsigned char i_10 = 2; i_10 < 10; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    for (short i_12 = 2; i_12 < 11; i_12 += 4) 
                    {
                        {
                            var_28 *= ((/* implicit */long long int) var_6);
                            var_29 = ((/* implicit */_Bool) ((int) var_6));
                            var_30 = ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
            } 
            arr_43 [i_9] = ((((/* implicit */_Bool) ((signed char) var_9))) ? (var_7) : (var_12));
            var_31 *= ((/* implicit */long long int) var_0);
        }
        /* vectorizable */
        for (unsigned short i_13 = 1; i_13 < 11; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    {
                        var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1)))) ? (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) var_9)))) : (((int) var_2))));
                        var_33 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)111));
                    }
                } 
            } 
            var_34 |= var_3;
            /* LoopSeq 1 */
            for (long long int i_16 = 1; i_16 < 10; i_16 += 1) 
            {
                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) var_4))));
                arr_57 [7LL] [i_13] [i_2] [i_2] = ((/* implicit */signed char) var_12);
                arr_58 [i_2] [(_Bool)1] [i_16 + 3] [i_16] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10)))) ? (var_7) : (((/* implicit */unsigned long long int) var_4))));
                /* LoopSeq 2 */
                for (unsigned int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    var_36 ^= var_4;
                    arr_62 [i_17] [i_16 + 3] [i_16 + 3] [i_13] [i_17] = ((/* implicit */unsigned short) ((long long int) ((signed char) var_7)));
                    arr_63 [i_2] [i_17] [i_17] [i_17] = ((long long int) (unsigned char)111);
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) var_8))));
                }
                for (long long int i_18 = 1; i_18 < 10; i_18 += 1) 
                {
                    var_38 = ((/* implicit */unsigned long long int) var_11);
                    var_39 *= ((((_Bool) var_4)) ? (var_8) : (((((/* implicit */_Bool) var_4)) ? (var_12) : (var_10))));
                    var_40 = ((/* implicit */unsigned short) var_12);
                }
                var_41 = ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) var_9)));
            }
            arr_66 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */int) ((short) var_12))) : (var_5)));
        }
        arr_67 [i_2] = ((/* implicit */short) ((long long int) var_8));
        var_42 *= ((/* implicit */_Bool) ((signed char) ((signed char) ((unsigned int) var_1))));
    }
    /* LoopNest 2 */
    for (signed char i_19 = 1; i_19 < 22; i_19 += 4) 
    {
        for (int i_20 = 1; i_20 < 20; i_20 += 4) 
        {
            {
                arr_74 [6] [i_20 + 3] [i_19] = ((/* implicit */unsigned long long int) ((unsigned short) var_10));
                arr_75 [i_19] [i_20 + 4] = var_2;
                var_43 -= ((/* implicit */_Bool) ((signed char) var_4));
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 1; i_21 < 22; i_21 += 1) 
                {
                    for (short i_22 = 4; i_22 < 23; i_22 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (var_1) : (var_3)));
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((unsigned short) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((short) var_3))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7)))))));
                            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_1)) : (var_10)))) ? (((long long int) var_3)) : (((/* implicit */long long int) var_4))))) ? (((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2973662014U)))) : (((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) var_3))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned int) ((var_11) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
}
