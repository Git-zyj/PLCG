/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169634
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
    var_15 *= ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) (~(arr_1 [i_0])));
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 14; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_16 |= ((/* implicit */unsigned char) var_11);
                        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                    }
                } 
            } 
            arr_10 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
            arr_11 [i_0] [i_0] [(short)9] |= ((/* implicit */short) (-((+(((/* implicit */int) var_6))))));
            arr_12 [(unsigned char)14] [i_0] [15U] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_1]))));
        }
        for (short i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5537827344564349521ULL)) || (((/* implicit */_Bool) -8876030913888087330LL))));
            var_19 = ((/* implicit */unsigned char) (short)-3281);
            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
            arr_15 [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((var_0) == (var_0)))) + (((/* implicit */int) (unsigned char)31))));
        }
        for (short i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
        {
            var_21 *= (((-(var_10))) * (18428559595485404344ULL));
            /* LoopSeq 4 */
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                var_22 = ((/* implicit */signed char) (short)20656);
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_9))));
            }
            for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                var_24 = ((/* implicit */long long int) var_1);
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    arr_27 [i_7] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                    var_25 *= ((/* implicit */long long int) ((-8876030913888087347LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)3258)))));
                    var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_3)) ? (18428559595485404357ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78)))))));
                    var_27 = ((/* implicit */unsigned char) ((signed char) arr_16 [i_0] [2LL] [i_8]));
                }
                for (short i_9 = 1; i_9 < 15; i_9 += 4) 
                {
                    var_28 |= ((/* implicit */unsigned int) ((var_7) % (arr_6 [i_5 + 1])));
                    arr_30 [i_0] [i_5] [i_0] [i_7] [i_7] = ((((/* implicit */long long int) ((/* implicit */int) arr_8 [9] [i_5] [i_5] [i_5 - 1] [i_5]))) % (-4984161852462272070LL));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned char)6))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) 6376871681121193919LL)))) : (var_10))))));
                        var_30 = ((/* implicit */int) (((~(18184478224147271ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_21 [i_0] [i_0] [i_0]))))));
                        var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)25347)) + (((/* implicit */int) var_8))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [10U] [3ULL] [17U]))) - (arr_22 [i_0] [(unsigned char)2] [i_0])))));
                        arr_33 [i_10] [i_10] [i_10] [i_7] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 12U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167))) : (-8876030913888087330LL)));
                    }
                    for (unsigned char i_11 = 1; i_11 < 17; i_11 += 3) 
                    {
                        var_32 *= ((/* implicit */unsigned long long int) var_0);
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2020764740U)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_11 + 1] [i_9] [i_0] [i_5 + 3] [i_0]))))) : (((((/* implicit */_Bool) 8876030913888087322LL)) ? (((/* implicit */unsigned long long int) var_9)) : (13793110177292023939ULL))))))));
                        var_34 = ((/* implicit */long long int) (~(((/* implicit */int) (short)13933))));
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) var_13))));
                    }
                    for (unsigned int i_12 = 1; i_12 < 17; i_12 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_9]))));
                        var_37 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_31 [i_0] [i_5] [i_9] [i_9] [i_12] [i_9 - 1] [i_9])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [(unsigned char)16]))))) % (((/* implicit */long long int) (~(var_9))))));
                        var_38 = ((/* implicit */unsigned int) arr_37 [i_7]);
                        var_39 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
                    }
                }
            }
            for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                arr_41 [i_0] [i_0] [i_13] |= (+(((/* implicit */int) var_6)));
                arr_42 [7U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [3U] [i_5 + 4] [i_5 + 2] [i_5])) ? (arr_29 [8U] [i_5 + 4] [i_5 + 4] [(unsigned char)14]) : (arr_29 [i_0] [i_5 + 2] [i_5 + 3] [i_5 + 3])));
                arr_43 [i_0] [i_0] [i_5] [i_13] |= ((/* implicit */int) ((4580779309970344483ULL) * (4653633896417527676ULL)));
                var_40 = ((/* implicit */long long int) ((unsigned int) var_4));
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */int) var_1)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2))))))))));
                    arr_47 [i_0] [11ULL] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (arr_16 [i_5] [i_13] [i_14]))));
                }
            }
            for (unsigned int i_15 = 4; i_15 < 15; i_15 += 2) 
            {
                var_42 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_9 [i_15] [i_0] [i_0] [i_15]))))))));
                var_43 = arr_36 [3] [i_5 + 4] [i_15] [(unsigned char)6];
                var_44 = ((/* implicit */unsigned char) 1022395387U);
                /* LoopNest 2 */
                for (unsigned char i_16 = 1; i_16 < 17; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 1; i_17 < 16; i_17 += 2) 
                    {
                        {
                            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) var_13))));
                            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) arr_54 [i_0] [13] [i_0] [i_16 - 1] [i_17]))));
                            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_17 - 1])) ? (arr_1 [i_16 + 1]) : (arr_44 [i_0] [2U] [i_0] [i_0] [i_0])));
                            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_0] [i_5 - 1])))))));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned char i_18 = 0; i_18 < 18; i_18 += 2) /* same iter space */
    {
        var_49 = ((/* implicit */short) max(((+(((unsigned long long int) 11660244837664547511ULL)))), (((/* implicit */unsigned long long int) min((max((-3664506029380105145LL), (((/* implicit */long long int) arr_21 [i_18] [i_18] [i_18])))), (((/* implicit */long long int) ((short) 11033445051984556156ULL))))))));
        var_50 = ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)250))));
        var_51 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_56 [i_18] [i_18] [i_18] [i_18] [i_18])), (18428559595485404357ULL)));
    }
    var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) min(((unsigned char)3), ((unsigned char)0)))) : ((+(((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) : ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-1LL)))))));
}
