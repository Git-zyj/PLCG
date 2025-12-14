/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178772
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
    var_13 = ((/* implicit */long long int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) arr_1 [i_3]);
                            var_14 = arr_8 [i_0 + 2] [i_2] [i_2 + 1] [i_4 - 1];
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-(-740838265))))));
                            var_16 |= ((/* implicit */signed char) 740838265);
                            var_17 = ((/* implicit */_Bool) -740838271);
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [(unsigned short)12] |= ((/* implicit */short) ((((/* implicit */long long int) arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0])) ^ (-1035664813602994457LL)));
            }
            arr_15 [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [9ULL] [9ULL] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_6 [i_0 + 1] [12] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 2]))));
        }
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            arr_20 [i_0] = ((/* implicit */signed char) (~(((long long int) arr_7 [i_0]))));
            arr_21 [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (~(1)));
        }
        var_18 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1]))));
        arr_22 [i_0] = ((/* implicit */unsigned int) arr_19 [i_0]);
    }
    for (long long int i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (int i_8 = 1; i_8 < 17; i_8 += 4) 
            {
                {
                    arr_32 [i_6 - 1] [i_6] [i_8] = ((/* implicit */_Bool) (unsigned short)9747);
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 4) 
                        {
                            {
                                var_19 |= 740838244;
                                arr_40 [i_6] [i_7] [i_7] [2LL] [i_6] [i_10] = ((int) (_Bool)1);
                                var_20 = (!(((/* implicit */_Bool) (~(arr_11 [i_6 + 2] [i_8 + 2] [i_10 + 1] [i_10])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) 18446744073709551615ULL))));
                }
            } 
        } 
        var_22 |= ((/* implicit */short) ((((/* implicit */int) arr_18 [(_Bool)1] [i_6])) <= (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)55799)) - (((/* implicit */int) (unsigned short)9747))))))));
        var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_6]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            arr_45 [i_6] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_6 + 2] [i_6 + 1])))))));
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                arr_48 [i_6] [(unsigned char)5] [i_12] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9747))) - (5348388686106152799LL)));
                var_24 = ((/* implicit */long long int) ((unsigned short) (short)6477));
            }
            for (unsigned char i_13 = 1; i_13 < 19; i_13 += 1) 
            {
                arr_51 [i_6] [i_11] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_11] [i_11] [i_11])) / (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((_Bool) (unsigned short)11605))) : (((/* implicit */int) ((unsigned short) arr_37 [i_13 - 1] [i_6 + 2] [i_6 + 2] [i_6 + 2])))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) arr_18 [i_6 + 1] [i_13 - 1]);
                            arr_57 [i_14] [i_6] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (short)-31618)) + (((/* implicit */int) (unsigned short)59849))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                for (unsigned int i_17 = 1; i_17 < 19; i_17 += 3) 
                {
                    {
                        var_26 -= ((/* implicit */unsigned int) (unsigned char)227);
                        arr_62 [(signed char)5] [i_11] [i_6] = ((/* implicit */unsigned short) (~(arr_58 [i_6 + 2])));
                        arr_63 [i_6] [i_16] = ((/* implicit */unsigned short) (unsigned char)14);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) var_4)))))));
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    for (int i_21 = 0; i_21 < 20; i_21 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) (~(arr_35 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 + 1])));
                            arr_75 [i_21] [0LL] [i_6] [i_18] [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_69 [i_6 + 2] [(unsigned char)12] [(unsigned char)12])))));
                            var_29 = ((/* implicit */unsigned int) ((_Bool) -740838265));
                            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_58 [i_6 + 2]))));
                        }
                    } 
                } 
                arr_76 [i_6] = ((/* implicit */short) (signed char)-40);
            }
            for (signed char i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                arr_79 [i_6] [i_22] = ((/* implicit */unsigned long long int) (unsigned short)55783);
                arr_80 [i_18] [i_18] |= ((/* implicit */unsigned int) 9223372036854775786LL);
                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (_Bool)1))));
            }
            arr_81 [1ULL] [i_6] [i_18] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_6] [i_18] [i_6 - 1] [i_6] [i_18]))));
            var_32 ^= ((/* implicit */long long int) var_6);
        }
    }
}
