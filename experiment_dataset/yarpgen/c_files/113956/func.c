/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113956
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (var_7))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */signed char) ((unsigned int) ((int) (unsigned short)1787)));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (var_7)));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_12 = ((/* implicit */signed char) var_8);
            var_13 ^= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8)))));
            arr_14 [i_3] = ((/* implicit */unsigned char) var_8);
        }
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_5))))))));
    }
    /* LoopSeq 4 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) var_8)));
        arr_17 [i_5] = ((/* implicit */unsigned short) ((((int) var_5)) % (((/* implicit */int) ((short) ((unsigned int) var_2))))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) ((unsigned char) ((_Bool) (!(((/* implicit */_Bool) var_0))))));
            var_17 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) ^ (var_7))) | (((/* implicit */unsigned int) ((int) ((unsigned char) var_3))))));
        }
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_7))) % (((/* implicit */int) var_5)))))));
    }
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) ((short) var_9))))));
                    var_20 = ((long long int) ((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63749))) : (9223372036854775807LL)));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 2; i_10 < 23; i_10 += 1) /* same iter space */
                    {
                        arr_32 [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((int) (unsigned short)63749))));
                        arr_33 [i_7] [i_8] [i_9] [i_9] [i_10] = ((/* implicit */int) ((short) var_9));
                        var_21 *= ((/* implicit */unsigned long long int) var_9);
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 2; i_11 < 23; i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_7] [i_8] [i_9] [i_11] = ((/* implicit */unsigned int) ((unsigned short) var_6));
                        var_22 ^= ((/* implicit */unsigned int) ((short) var_5));
                    }
                    arr_38 [i_7] [i_8] &= ((((/* implicit */_Bool) ((-904454428121007651LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63739)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63749))) / (904454428121007651LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((~(var_8))))));
                }
            } 
        } 
        arr_39 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        var_23 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)27)) ^ (((/* implicit */int) (unsigned short)1787)))));
    }
    for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            var_24 = ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (var_6)))) ? (((/* implicit */unsigned int) var_6)) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_7))));
            var_25 = ((/* implicit */int) ((unsigned long long int) var_4));
        }
        arr_45 [i_12] [i_12] = ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)63749))));
        var_26 = ((/* implicit */unsigned char) var_2);
    }
    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
    {
        var_27 &= ((((/* implicit */_Bool) ((short) var_1))) ? (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))));
        arr_49 [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))));
        arr_50 [i_14] [i_14] = ((/* implicit */int) ((unsigned short) var_5));
    }
    /* LoopNest 2 */
    for (unsigned int i_15 = 4; i_15 < 16; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) ((long long int) var_0));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((unsigned short) var_0)))));
                        }
                    } 
                } 
                arr_62 [i_15] [i_15] [i_16] = ((/* implicit */long long int) ((int) (unsigned short)1769));
                var_30 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) var_7)))));
                /* LoopSeq 2 */
                for (unsigned int i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        for (unsigned short i_21 = 3; i_21 < 17; i_21 += 2) 
                        {
                            {
                                arr_73 [i_15] [i_16] [i_19] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((unsigned int) 17989740498941912902ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6))))));
                                var_31 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                                var_32 = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1787))))) ? ((~(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_1))))))));
                            }
                        } 
                    } 
                    var_33 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? ((~(1887391856))) : (((/* implicit */int) (unsigned short)63749))));
                }
                for (unsigned short i_22 = 0; i_22 < 18; i_22 += 3) 
                {
                    var_34 = ((/* implicit */int) var_4);
                    /* LoopSeq 3 */
                    for (short i_23 = 2; i_23 < 17; i_23 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(var_6)))))) ? (((/* implicit */int) ((short) (unsigned short)65521))) : (((/* implicit */int) var_4))));
                        var_36 |= ((/* implicit */_Bool) var_9);
                    }
                    for (long long int i_24 = 1; i_24 < 17; i_24 += 1) 
                    {
                        arr_82 [i_15] [i_15] = var_4;
                        var_37 = ((/* implicit */unsigned long long int) var_0);
                    }
                    /* vectorizable */
                    for (unsigned short i_25 = 0; i_25 < 18; i_25 += 2) 
                    {
                        var_38 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
                        arr_85 [i_22] [i_25] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_0)))) / (((/* implicit */int) var_0))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 0; i_26 < 18; i_26 += 1) 
                    {
                        for (unsigned long long int i_27 = 0; i_27 < 18; i_27 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_8)))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) ((signed char) var_1)))));
                                var_40 = ((/* implicit */unsigned char) var_2);
                                arr_90 [i_15] [i_15] [i_16] [i_22] [i_26] [i_27] [i_27] = ((/* implicit */unsigned long long int) var_3);
                            }
                        } 
                    } 
                }
                var_41 = ((/* implicit */signed char) var_1);
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned int) var_2);
}
