/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157651
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = (_Bool)1;
                                var_12 = ((/* implicit */unsigned short) arr_7 [(_Bool)1] [i_2] [i_3] [i_4]);
                                var_13 -= ((/* implicit */signed char) (~((+(((/* implicit */int) arr_4 [i_1] [9U] [i_4]))))));
                                arr_11 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) arr_3 [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_18 [i_5 - 3] [i_5] [i_5] [i_2] [i_5] = (unsigned short)65531;
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_9 [i_0] [i_6] [i_0] [i_5] [i_6] [i_0])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */int) (!((!(((/* implicit */_Bool) 4294967295U))))));
                                arr_30 [(unsigned short)19] [i_7] = ((/* implicit */signed char) arr_24 [(unsigned short)4]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    for (unsigned short i_13 = 1; i_13 < 17; i_13 += 2) 
                    {
                        {
                            arr_36 [i_7] [(_Bool)1] [i_7] [(_Bool)1] [i_12] [14] = ((/* implicit */unsigned long long int) arr_27 [i_7] [12] [(_Bool)0] [12] [i_7]);
                            var_16 += (_Bool)1;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (signed char i_16 = 1; i_16 < 20; i_16 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) arr_33 [i_7] [i_7]);
                                var_18 = ((/* implicit */int) min((var_18), (arr_32 [i_16 + 1])));
                                arr_44 [i_7] [i_8] [i_7] [i_15] [(unsigned short)4] [i_16] = arr_35 [i_7] [i_7] [i_7];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 21; i_20 += 3) 
                    {
                        for (int i_21 = 0; i_21 < 21; i_21 += 2) 
                        {
                            {
                                arr_60 [(unsigned char)7] [i_20] [i_19] [i_18] [i_17] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_49 [i_17]))))));
                                var_19 &= ((/* implicit */unsigned char) arr_52 [i_17] [(unsigned short)19] [(unsigned short)19] [1]);
                                var_20 = ((/* implicit */signed char) arr_32 [i_17]);
                                var_21 = ((/* implicit */unsigned char) (unsigned short)0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_22 = 1; i_22 < 19; i_22 += 1) 
                    {
                        for (unsigned short i_23 = 2; i_23 < 18; i_23 += 4) 
                        {
                            {
                                arr_67 [i_19] [i_18] [i_18] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) (unsigned short)5);
                                var_22 = ((/* implicit */unsigned char) (_Bool)0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 0; i_24 < 21; i_24 += 2) 
                    {
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_64 [i_17] [i_18] [i_18] [i_18]))));
                                arr_74 [i_19] [(_Bool)1] [i_17] [i_19] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                                arr_75 [i_19] [i_24] [19] [i_19] [(_Bool)1] [i_19] = arr_40 [i_25] [(unsigned char)5] [i_19] [i_18] [i_17];
                                var_24 -= ((/* implicit */int) (unsigned short)6);
                                var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_17] [i_18] [i_19] [(unsigned short)17]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_26 = 0; i_26 < 21; i_26 += 4) 
                    {
                        for (unsigned long long int i_27 = 0; i_27 < 21; i_27 += 2) 
                        {
                            {
                                var_26 = arr_71 [(signed char)2] [(signed char)2];
                                arr_80 [i_19] [i_19] [i_19] [i_19] [i_27] = ((/* implicit */unsigned char) (unsigned short)16829);
                                var_27 = ((/* implicit */_Bool) arr_25 [i_17] [i_19] [i_26] [i_27]);
                                var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_79 [i_17] [(_Bool)1] [0ULL] [0ULL] [(unsigned short)10] [i_18] [i_26]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 23; i_28 += 4) 
    {
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    for (signed char i_31 = 0; i_31 < 23; i_31 += 4) 
                    {
                        {
                            arr_91 [i_28] [i_29] [i_29] [i_30] [i_28] = ((/* implicit */unsigned short) (unsigned char)113);
                            var_29 += ((/* implicit */_Bool) arr_86 [i_28] [i_28] [i_30] [i_28]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_32 = 0; i_32 < 23; i_32 += 2) 
                {
                    for (unsigned short i_33 = 0; i_33 < 23; i_33 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) arr_82 [i_28]);
                            arr_98 [6ULL] [(unsigned short)4] [i_29] = ((/* implicit */unsigned short) arr_94 [i_28] [i_29] [i_28] [(_Bool)1]);
                            var_31 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_90 [i_33]))));
                            var_32 *= ((/* implicit */signed char) arr_95 [i_32]);
                            var_33 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)16829))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                {
                    for (unsigned char i_35 = 0; i_35 < 23; i_35 += 4) 
                    {
                        for (unsigned short i_36 = 0; i_36 < 23; i_36 += 1) 
                        {
                            {
                                var_34 |= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)113))));
                                arr_107 [i_28] [i_28] [i_29] [i_34] [i_35] [(unsigned short)22] [i_36] = ((/* implicit */signed char) (-(((/* implicit */int) arr_105 [i_29] [i_36]))));
                                var_35 = ((/* implicit */unsigned short) arr_82 [i_28]);
                                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) arr_100 [(_Bool)1]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_37 = 0; i_37 < 23; i_37 += 1) 
                {
                    for (_Bool i_38 = 1; i_38 < 1; i_38 += 1) 
                    {
                        {
                            arr_114 [i_28] [i_29] [i_37] [i_29] = ((/* implicit */signed char) arr_101 [i_38 - 1] [i_29] [(_Bool)1]);
                            var_37 += ((/* implicit */signed char) (-(arr_106 [i_28] [i_29] [i_29] [i_29] [i_38])));
                            arr_115 [i_29] [i_29] = (_Bool)0;
                            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (unsigned short)40582))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_39 = 0; i_39 < 23; i_39 += 2) 
                {
                    for (unsigned short i_40 = 0; i_40 < 23; i_40 += 3) 
                    {
                        {
                            var_39 -= ((/* implicit */_Bool) arr_117 [i_28]);
                            var_40 *= ((/* implicit */_Bool) (-(arr_82 [i_29])));
                            var_41 = ((/* implicit */unsigned char) arr_97 [i_28] [i_29] [(_Bool)1] [i_40]);
                        }
                    } 
                } 
            }
        } 
    } 
}
