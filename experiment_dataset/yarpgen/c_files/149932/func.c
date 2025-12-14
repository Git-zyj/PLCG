/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149932
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
    var_13 = var_8;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_14 = ((unsigned int) ((((/* implicit */_Bool) var_12)) && (((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_8))))));
            var_15 = max((((unsigned int) max((var_12), (arr_0 [i_0])))), (max((2108451867U), (max((2225429569U), (2069537737U))))));
            arr_4 [i_0] [i_0] = 262144U;
        }
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_16 = ((((/* implicit */_Bool) min((var_10), (arr_6 [i_0 + 2])))) ? ((+(679129979U))) : (min((((((/* implicit */_Bool) 2104178828U)) ? (2455368616U) : (2840896804U))), ((+(arr_0 [i_2]))))));
            var_17 *= var_1;
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                var_18 = ((/* implicit */unsigned int) ((3591723865U) > (3296941418U)));
                /* LoopSeq 4 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    var_19 = var_0;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (var_3)));
                        var_21 = var_7;
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        arr_18 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0] [i_0 - 1] = ((((/* implicit */_Bool) arr_11 [i_2] [0U] [i_4] [16U])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_13 [i_0])))))) : ((+(var_4))));
                        var_22 = (+(var_1));
                    }
                }
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    arr_21 [i_0] [i_2] [i_0] [i_7] = (+(((arr_0 [i_0]) * (arr_0 [i_3]))));
                    arr_22 [i_2] [i_3] [i_0] = ((((/* implicit */_Bool) ((max((3687877283U), (3U))) & (((((/* implicit */_Bool) 398271535U)) ? (2108451856U) : (1562172255U)))))) ? (arr_1 [i_0]) : ((~(arr_7 [i_0 - 1] [i_2]))));
                }
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    var_23 |= (+(arr_3 [16U]));
                    var_24 = ((((/* implicit */_Bool) 1846596751U)) ? (17U) : (2667130806U));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (arr_13 [i_8])));
                }
                /* vectorizable */
                for (unsigned int i_9 = 2; i_9 < 17; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((((/* implicit */_Bool) ((var_2) & (3976751339U)))) ? (arr_13 [i_0 + 3]) : (arr_19 [i_9 + 2] [i_2] [i_3] [i_0 + 1] [i_3])))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */_Bool) var_6)) ? (((arr_12 [i_0] [i_0]) << (((3168938440U) - (3168938434U))))) : (3591723876U)))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), ((~((-(arr_26 [i_10] [i_10] [i_10])))))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 18; i_11 += 2) 
                    {
                        var_29 = arr_32 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 2];
                        var_30 = (~(var_9));
                        var_31 = ((2069537739U) << (((2840896792U) - (2840896771U))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        arr_37 [i_12] [i_0] [i_9] [3U] [i_0] [i_0] = ((unsigned int) 2922235552U);
                        arr_38 [i_0] [13U] [i_2] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) 3591723856U)) ? (var_6) : (1U));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3896695757U)) && (((/* implicit */_Bool) arr_36 [i_0] [i_0] [17U]))));
                    }
                    var_33 ^= ((unsigned int) 293447862U);
                    arr_39 [i_0 + 2] [i_2] [i_3] [i_0] = (+(2225429543U));
                    var_34 = var_7;
                }
            }
            /* vectorizable */
            for (unsigned int i_13 = 1; i_13 < 18; i_13 += 1) 
            {
                var_35 &= ((((/* implicit */_Bool) 1260197201U)) ? (4294967295U) : (2922235566U));
                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((arr_16 [i_13 - 1] [i_0 + 2]) >= (arr_16 [i_0 - 1] [i_2]))))));
            }
            /* LoopNest 2 */
            for (unsigned int i_14 = 2; i_14 < 18; i_14 += 4) 
            {
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    {
                        var_37 = (((-(3896695751U))) % (arr_9 [i_0] [i_15]));
                        var_38 = ((((/* implicit */_Bool) 2190444650U)) ? (max((max((var_9), (var_8))), (var_0))) : (1073733632U));
                        var_39 = min(((~(var_1))), (((/* implicit */unsigned int) ((arr_41 [6U] [i_0 + 2] [i_0 + 3] [i_14 + 1]) <= (arr_26 [i_0] [i_0 + 1] [i_0 + 3])))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_16 = 1; i_16 < 18; i_16 += 4) 
        {
            var_40 = ((/* implicit */unsigned int) max((var_40), ((~(3800703555U)))));
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    {
                        var_41 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_16 + 2] [i_17] [i_17] [i_18])) || (((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0 + 3]))));
                        arr_56 [i_0] [i_16] [i_17] [i_17] = (-(arr_2 [i_0 + 3] [i_17]));
                    }
                } 
            } 
            var_42 = (((-(arr_29 [i_0] [i_0] [i_16] [i_16] [i_16]))) >> (((var_10) - (1256107533U))));
            var_43 += 607721442U;
            var_44 = ((/* implicit */unsigned int) min((var_44), (var_10)));
        }
        var_45 *= arr_16 [i_0 - 1] [i_0];
        var_46 = (~(857345267U));
    }
}
