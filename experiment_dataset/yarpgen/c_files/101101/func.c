/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101101
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
    var_10 = ((/* implicit */int) var_3);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_6)) : (var_5))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_9)))))) >= (var_1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_1);
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (int i_4 = 3; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) (((_Bool)1) ? (3405701983U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63)))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                        {
                            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) > (((/* implicit */unsigned int) var_6))))))));
                            var_13 += ((/* implicit */long long int) ((min((((/* implicit */int) var_8)), (var_6))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))));
                        }
                    }
                } 
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */long long int) (((-(max((var_4), (((/* implicit */unsigned int) var_9)))))) + (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (var_5)));
        /* LoopSeq 1 */
        for (int i_7 = 1; i_7 < 19; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 4; i_9 < 17; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            arr_30 [i_6] [i_6] [i_6] [i_7] [i_9] [i_9] [i_10] = ((/* implicit */_Bool) ((unsigned int) var_6));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))));
                            arr_31 [i_6] [i_7] [i_8] [i_7] [i_7] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)113)))));
                            var_16 = ((/* implicit */int) ((_Bool) (-(var_1))));
                        }
                        for (long long int i_11 = 1; i_11 < 18; i_11 += 2) 
                        {
                            var_17 ^= ((/* implicit */unsigned char) ((var_2) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (var_6)));
                            var_18 |= ((/* implicit */int) (-(var_4)));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) var_0))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
                            var_21 = ((/* implicit */long long int) (-(var_4)));
                        }
                        var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4)));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                var_24 *= ((/* implicit */short) (~(((((/* implicit */_Bool) 1989161384U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-399))))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (var_4)));
            }
            for (short i_13 = 1; i_13 < 19; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        {
                            var_26 *= ((/* implicit */signed char) ((unsigned short) var_6));
                            var_27 |= ((/* implicit */short) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_9))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_0))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    arr_48 [i_7] [i_7 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1)))) || (((/* implicit */_Bool) var_0))));
                    var_30 = ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) var_6)));
                }
            }
            for (signed char i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                arr_51 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                /* LoopNest 2 */
                for (long long int i_18 = 3; i_18 < 17; i_18 += 3) 
                {
                    for (int i_19 = 2; i_19 < 19; i_19 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */short) var_9);
                            arr_58 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_7)) > (var_6))))));
                        }
                    } 
                } 
                var_32 ^= ((/* implicit */unsigned char) var_4);
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    for (unsigned int i_21 = 3; i_21 < 17; i_21 += 2) 
                    {
                        {
                            arr_63 [i_6] [i_7] [i_7] [(unsigned char)11] [i_21] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) var_9))));
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            }
            for (unsigned char i_22 = 1; i_22 < 17; i_22 += 3) 
            {
                arr_66 [i_6] [i_7] = ((/* implicit */short) ((unsigned short) var_0));
                var_34 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))));
                var_36 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_0))));
            }
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))));
        }
        /* LoopSeq 2 */
        for (long long int i_23 = 0; i_23 < 20; i_23 += 2) 
        {
            arr_70 [i_6] [i_23] = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_0)) + (9857)))));
            var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((var_2) && (var_2))))));
            var_39 -= ((/* implicit */unsigned long long int) ((var_2) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))));
        }
        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 2) 
        {
            var_40 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
            /* LoopSeq 1 */
            for (unsigned int i_25 = 2; i_25 < 18; i_25 += 3) 
            {
                var_41 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5));
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1)));
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))));
            }
        }
        arr_77 [i_6 - 1] = ((/* implicit */long long int) var_2);
    }
}
