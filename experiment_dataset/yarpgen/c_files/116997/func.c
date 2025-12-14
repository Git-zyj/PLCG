/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116997
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (+(((unsigned long long int) (~(var_3)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_0])) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))) : (min((arr_0 [i_0 - 1] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) var_4)))))))));
                    var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1])) != (((/* implicit */int) arr_3 [i_1] [i_1])))))));
                    var_15 = ((/* implicit */short) var_11);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_16 = (((~(((/* implicit */int) (signed char)101)))) / (-324977950));
                                var_17 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_0] [i_3] [i_0] [i_0] [i_0 + 4] [i_3]))))));
                                arr_12 [i_1] [5] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3] [i_4])) < (var_6))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_3))) + ((~(((/* implicit */int) var_7))))))) && (((/* implicit */_Bool) ((unsigned int) 6645808799795308820ULL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))));
            var_19 = ((/* implicit */unsigned int) (!(var_9)));
            arr_18 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (+(arr_16 [i_6])));
            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) 324977943))));
        }
        arr_19 [9LL] [i_5] = ((/* implicit */unsigned short) var_3);
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            var_21 ^= ((/* implicit */unsigned short) (short)-13774);
            /* LoopNest 2 */
            for (unsigned int i_8 = 1; i_8 < 23; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15144879562561415531ULL)) && (((/* implicit */_Bool) -324977968))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)1735)) ? (((/* implicit */unsigned long long int) arr_15 [i_7])) : (arr_27 [i_8 - 1] [(_Bool)1] [i_8 + 1] [i_8 + 1])));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) ((arr_22 [(short)17] [(signed char)13] [i_7] [(short)17]) ? (((((/* implicit */int) arr_17 [i_5] [i_5])) - (14))) : (var_5)));
        }
        for (short i_10 = 2; i_10 < 23; i_10 += 4) 
        {
            var_25 -= ((/* implicit */unsigned int) (short)-13767);
            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5904328174218472415LL)) ? (((/* implicit */int) var_7)) : (var_3)));
        }
    }
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
    {
        arr_34 [11U] = ((/* implicit */unsigned char) 7);
        var_27 = ((/* implicit */short) var_8);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            arr_39 [i_11] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 21)) ? (((/* implicit */unsigned long long int) 1579386052U)) : (arr_30 [i_11] [i_12] [i_12])));
            var_28 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_11]))));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) var_7);
                        var_30 = ((/* implicit */short) 468047072U);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            var_31 = ((/* implicit */unsigned long long int) (unsigned char)40);
            /* LoopSeq 1 */
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
            {
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((unsigned int) var_1))));
                var_33 |= ((15768831066276855626ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))));
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)58078)) >> (((2147483647) - (2147483617)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 1; i_18 < 22; i_18 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)19))));
                        arr_56 [i_11] [i_11] [15LL] [20] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((var_10) > (8604917587125452759ULL)));
                        var_36 ^= ((/* implicit */int) var_1);
                        var_37 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)-25)))) == (((/* implicit */int) (unsigned short)47077))));
                    }
                }
                for (short i_19 = 4; i_19 < 23; i_19 += 3) 
                {
                    var_38 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2))) * (((/* implicit */unsigned long long int) -10))));
                    arr_60 [i_19] [i_16] [i_19] &= ((/* implicit */unsigned long long int) arr_42 [i_11] [i_11]);
                }
                var_39 &= (~(6242178000700826975ULL));
            }
        }
    }
}
