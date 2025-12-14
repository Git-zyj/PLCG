/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165254
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (unsigned char)0))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (unsigned char)75);
                    arr_6 [i_0] = ((/* implicit */unsigned int) (unsigned char)193);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                for (unsigned int i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) (unsigned char)71);
                            var_15 -= ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_16 -= (_Bool)1;
            var_17 += ((/* implicit */unsigned int) (unsigned char)181);
            var_18 = ((/* implicit */unsigned int) (unsigned char)166);
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (unsigned char)75))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (unsigned int i_9 = 4; i_9 < 10; i_9 += 2) 
                {
                    {
                        arr_23 [i_7] [i_7] = ((/* implicit */unsigned int) (_Bool)0);
                        arr_24 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) 755850165U);
                        arr_25 [i_0] [i_0] [i_8] [i_7] [i_7] [i_0] &= ((/* implicit */unsigned int) (unsigned char)79);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                var_20 -= ((/* implicit */_Bool) (unsigned char)181);
                var_21 = ((/* implicit */unsigned int) (unsigned char)74);
                arr_33 [i_0] [i_0] [i_11] [i_0] = (_Bool)0;
                var_22 = (_Bool)0;
            }
            arr_34 [i_0] = ((/* implicit */unsigned short) 3290932581U);
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                arr_37 [i_0] [i_10] [i_0] = (unsigned char)181;
                var_23 = ((/* implicit */unsigned int) (unsigned char)73);
            }
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_47 [i_15] [i_0] [i_14] [i_13] [i_0] [i_0] &= ((/* implicit */unsigned int) (unsigned char)166);
                            arr_48 [i_13] [(_Bool)1] [i_13] [i_14] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) (unsigned char)88);
                            arr_49 [i_0] [i_10] [7U] [i_15] [i_15] = (_Bool)1;
                        }
                    } 
                } 
            } 
        }
    }
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) (unsigned short)57344);
        arr_54 [i_16] = (unsigned char)75;
        var_25 = ((/* implicit */unsigned short) 1827165331U);
    }
    /* vectorizable */
    for (unsigned int i_17 = 0; i_17 < 18; i_17 += 2) 
    {
        var_26 *= (unsigned char)91;
        arr_58 [i_17] [i_17] = 0U;
        /* LoopNest 2 */
        for (unsigned int i_18 = 1; i_18 < 15; i_18 += 4) 
        {
            for (unsigned int i_19 = 0; i_19 < 18; i_19 += 1) 
            {
                {
                    var_27 -= ((/* implicit */unsigned short) 616387446U);
                    arr_64 [(unsigned char)15] [i_17] [i_18 + 2] [i_17] = ((/* implicit */_Bool) (unsigned char)181);
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        for (unsigned int i_21 = 0; i_21 < 18; i_21 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) 3385555250U);
                                arr_69 [8U] [i_18 + 3] [i_17] = ((/* implicit */unsigned int) (unsigned char)0);
                            }
                        } 
                    } 
                    arr_70 [i_17] [i_18] [i_19] [i_18 + 2] = ((/* implicit */unsigned short) 0U);
                }
            } 
        } 
        arr_71 [i_17] [i_17] = ((/* implicit */unsigned int) (unsigned char)107);
    }
    for (unsigned char i_22 = 0; i_22 < 13; i_22 += 4) 
    {
        var_29 = (unsigned short)12185;
        arr_75 [i_22] = ((/* implicit */unsigned char) 0U);
        var_30 = ((/* implicit */unsigned int) (unsigned char)246);
    }
    var_31 = (unsigned char)255;
    var_32 = 3290932581U;
}
