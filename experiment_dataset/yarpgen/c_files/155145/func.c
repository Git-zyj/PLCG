/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155145
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
    var_10 = ((/* implicit */short) ((int) ((long long int) ((unsigned char) var_8))));
    var_11 = ((/* implicit */short) ((int) var_8));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) var_6);
        arr_5 [(signed char)4] &= ((/* implicit */long long int) ((signed char) var_6));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] = ((/* implicit */short) ((long long int) var_2));
                        arr_14 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_9);
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_12 = ((/* implicit */long long int) ((unsigned char) var_2));
            arr_19 [i_4] = ((/* implicit */signed char) ((unsigned char) var_9));
        }
        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (int i_7 = 3; i_7 < 8; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */int) var_7);
                            var_14 = ((/* implicit */short) var_2);
                            var_15 = var_4;
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                arr_32 [(unsigned char)8] [i_6] [i_6] [i_4] = ((/* implicit */short) ((unsigned char) var_4));
                arr_33 [i_4] [i_4] = ((/* implicit */int) ((unsigned char) ((unsigned char) (signed char)-96)));
                var_16 = ((/* implicit */long long int) ((short) var_1));
            }
            var_17 = ((/* implicit */unsigned char) ((unsigned short) ((int) var_2)));
            /* LoopSeq 4 */
            for (long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */short) ((unsigned char) var_7));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            arr_44 [i_4] [i_6] [i_6] [i_4] [i_13] = ((/* implicit */long long int) var_8);
                            arr_45 [i_4] [i_13] [i_13] = ((/* implicit */long long int) var_6);
                        }
                    } 
                } 
                var_19 = ((long long int) var_0);
            }
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */long long int) var_7);
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    for (signed char i_16 = 2; i_16 < 10; i_16 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((unsigned char) ((int) var_7)));
                            arr_52 [i_4] [i_4] [i_14] [i_15] [i_4] [i_16] = ((int) var_4);
                        }
                    } 
                } 
            }
            for (long long int i_17 = 0; i_17 < 11; i_17 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) ((int) ((long long int) ((int) var_7))));
                var_23 = ((/* implicit */unsigned char) ((signed char) ((unsigned short) var_7)));
                arr_55 [2LL] [i_4] = ((/* implicit */unsigned char) var_7);
                var_24 *= ((unsigned char) ((signed char) var_3));
                arr_56 [i_4] = ((/* implicit */unsigned char) ((int) ((unsigned char) ((unsigned short) var_0))));
            }
            for (long long int i_18 = 0; i_18 < 11; i_18 += 1) /* same iter space */
            {
                arr_60 [i_6] [i_6] [i_4] = ((/* implicit */unsigned char) ((short) ((unsigned short) ((long long int) var_5))));
                var_25 = ((/* implicit */short) ((int) ((signed char) ((short) var_2))));
                arr_61 [9] [i_4] = ((/* implicit */unsigned char) var_5);
            }
            arr_62 [i_4] [i_6] = ((/* implicit */int) ((short) var_8));
        }
        arr_63 [i_4] [i_4] = ((/* implicit */long long int) var_0);
        arr_64 [i_4] = ((/* implicit */int) ((signed char) ((short) var_9)));
    }
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 20; i_19 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_20 = 0; i_20 < 20; i_20 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                for (unsigned short i_22 = 0; i_22 < 20; i_22 += 3) 
                {
                    for (signed char i_23 = 0; i_23 < 20; i_23 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (var_0)));
                            var_27 = ((/* implicit */unsigned char) var_5);
                            arr_78 [i_20] [i_20] = ((short) ((signed char) var_6));
                        }
                    } 
                } 
            } 
            arr_79 [i_20] = ((/* implicit */short) var_4);
        }
        for (signed char i_24 = 2; i_24 < 19; i_24 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) ((unsigned char) ((int) -5889110545903277540LL)));
            arr_83 [i_19] = ((/* implicit */int) var_0);
            arr_84 [i_19] [17LL] [i_24] |= ((/* implicit */unsigned short) var_1);
        }
        for (signed char i_25 = 2; i_25 < 19; i_25 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_26 = 2; i_26 < 17; i_26 += 3) 
            {
                for (int i_27 = 3; i_27 < 17; i_27 += 1) 
                {
                    {
                        var_29 *= ((/* implicit */unsigned char) ((long long int) var_6));
                        /* LoopSeq 2 */
                        for (unsigned char i_28 = 0; i_28 < 20; i_28 += 3) 
                        {
                            arr_96 [i_25] [i_25 + 1] [i_26] [(short)16] [i_28] &= ((/* implicit */long long int) var_4);
                            var_30 = ((/* implicit */short) ((signed char) var_9));
                        }
                        for (int i_29 = 2; i_29 < 19; i_29 += 4) 
                        {
                            arr_99 [i_27] [i_27] [i_26] [i_25] [i_27] = ((/* implicit */unsigned short) var_2);
                            arr_100 [i_19] [4LL] [i_25] [16LL] [i_27 + 3] [i_27] [i_29 + 1] = ((/* implicit */unsigned short) var_9);
                            var_31 = var_9;
                            var_32 = ((/* implicit */long long int) var_0);
                        }
                        var_33 += ((/* implicit */unsigned char) ((long long int) ((unsigned char) 9212238693002942342LL)));
                        arr_101 [i_25] &= ((/* implicit */short) ((long long int) var_8));
                    }
                } 
            } 
            var_34 = ((/* implicit */long long int) ((unsigned char) ((short) var_9)));
        }
        arr_102 [i_19] = ((short) ((signed char) var_8));
    }
}
