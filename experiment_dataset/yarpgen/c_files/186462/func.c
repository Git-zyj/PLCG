/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186462
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_20 ^= ((short) ((short) var_13));
                    var_21 = ((/* implicit */short) min((var_21), ((short)-15164)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_22 = (short)0;
                                arr_11 [i_0] [i_1] = (short)0;
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            var_23 *= ((short) (short)-21261);
                            var_24 = ((/* implicit */short) max((var_24), (((short) ((short) var_15)))));
                            var_25 -= var_6;
                        }
                        for (short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                        {
                            var_26 *= var_1;
                            var_27 = (short)-8068;
                            arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] = ((short) ((short) ((short) var_12)));
                            arr_19 [i_1] [i_0] = ((short) (short)31);
                        }
                        for (short i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */short) max((var_28), ((short)32767)));
                            var_29 -= (short)3975;
                            var_30 &= (short)22391;
                        }
                        for (short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                        {
                            arr_24 [i_0 + 4] [i_0] [i_0 + 4] [i_5] [i_9] = ((short) var_1);
                            arr_25 [i_0] = (short)-17891;
                            var_31 += var_5;
                        }
                        arr_26 [i_0] [i_1] [i_5] = ((short) (short)-1);
                    }
                    for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((short) ((short) (short)8349)))));
                        arr_29 [i_0] [i_0] = (short)-32765;
                    }
                    var_33 = ((/* implicit */short) min((var_33), ((short)32767)));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            arr_32 [i_0] = ((short) ((short) ((short) (short)16383)));
            var_34 = ((short) ((short) (short)29227));
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    {
                        arr_38 [i_0] [i_12] = ((short) ((short) var_7));
                        var_35 &= (short)-4875;
                        arr_39 [i_11] [i_11] [i_11] [i_12] [i_11] [i_11] &= ((short) var_6);
                    }
                } 
            } 
            arr_40 [i_0] [i_0 - 1] [i_0] = var_3;
        }
        for (short i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            var_36 *= (short)3968;
            arr_43 [i_0] [i_0] [i_14] = var_12;
        }
        for (short i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            arr_46 [i_0 - 3] [i_15] [i_0] = ((short) var_9);
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                var_37 = ((short) var_15);
                var_38 -= (short)17;
            }
            arr_49 [i_0] [i_0] [i_0] = (short)-24691;
        }
    }
    var_39 -= ((short) ((short) ((short) var_19)));
}
