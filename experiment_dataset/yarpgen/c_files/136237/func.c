/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136237
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
    var_16 = ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_12))));
    var_17 = var_1;
    var_18 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]);
                    var_20 = ((/* implicit */long long int) (((+(arr_3 [i_0]))) * (((-489155837) / (arr_3 [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned short) (~(((140737488355327LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-21643)))))))))));
                var_22 += ((/* implicit */signed char) ((((/* implicit */long long int) arr_2 [i_4])) % ((-(-140737488355317LL)))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (arr_2 [i_3])))) ? (((/* implicit */int) (short)32767)) : (arr_2 [i_3])));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) var_6);
                    arr_18 [i_3] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_5] [i_4] [i_3]))))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_5])) ? (2387926468193492221LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_4]))))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1))))));
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_26 [i_3] [i_8] = ((/* implicit */long long int) 2147483647);
                                var_25 ^= ((/* implicit */unsigned short) var_12);
                                var_26 = ((/* implicit */signed char) ((long long int) arr_10 [i_3]));
                                var_27 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_4 [i_6] [i_4] [i_6]))))) > ((((_Bool)1) ? (((/* implicit */int) var_0)) : (arr_2 [i_8]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_14) : (var_14))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4] [i_3] [i_4] [i_4])) / ((-(((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) var_11)))))) : (((int) var_12))));
                }
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_29 ^= ((/* implicit */_Bool) arr_27 [i_9] [i_4] [i_9] [i_4]);
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                    {
                        arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) (-(((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_10]))) | (var_8))) % (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161)))))))));
                        arr_34 [i_3] [i_3] = ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (arr_31 [i_10] [i_9] [i_4] [6])))) > (((int) arr_29 [i_9])));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [6] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (arr_32 [i_10] [i_9] [i_3] [i_3]) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_0 [i_3] [i_10])) : (((/* implicit */int) var_12))));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2147483647)))))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                    {
                        arr_38 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((unsigned char) var_3));
                        arr_39 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_32 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_9] [(_Bool)1] [i_9] [i_9])) && (((/* implicit */_Bool) var_13)))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) -2553606237848722268LL);
                            var_33 = ((/* implicit */int) (-(var_7)));
                            var_34 = ((/* implicit */short) ((((/* implicit */_Bool) -1828874914729108323LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (arr_35 [i_12] [i_12] [i_12] [i_12]))))) : (140737488355316LL)));
                            arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((signed char) (-(var_3))));
                            var_35 = ((/* implicit */unsigned short) (-(-72877299)));
                        }
                        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_36 = ((/* implicit */long long int) arr_32 [9] [i_9] [i_14] [i_12]);
                            var_37 = ((/* implicit */_Bool) var_1);
                            var_38 = ((/* implicit */long long int) arr_1 [i_12] [i_12]);
                        }
                        arr_50 [i_3] [i_12] [i_4] [i_4] [i_3] = ((/* implicit */long long int) var_4);
                        var_39 = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) var_11))) | (6571726579394079689LL)))));
                        arr_51 [i_3] [i_3] [i_3] [i_3] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) && (((/* implicit */_Bool) var_11))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_15 = 4; i_15 < 12; i_15 += 2) 
                    {
                        for (long long int i_16 = 0; i_16 < 15; i_16 += 2) 
                        {
                            {
                                arr_58 [i_3] [i_3] [i_9] [i_4] [i_4] [i_3] [i_3] = var_8;
                                arr_59 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (arr_15 [i_3] [i_3] [i_9] [i_15 + 2]))))));
                                arr_60 [i_3] [i_15 + 1] [i_9] [i_4] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_54 [i_3] [i_15 - 3] [i_15 - 3] [i_3])) ? (((/* implicit */int) arr_54 [i_3] [i_15 - 3] [i_15 - 3] [i_3])) : (((/* implicit */int) arr_54 [i_3] [i_15 - 3] [i_15 - 3] [i_3])))) & (((/* implicit */int) arr_17 [i_3] [i_15 - 3] [i_15 - 3] [i_3]))));
                                var_40 &= ((/* implicit */unsigned char) var_6);
                            }
                        } 
                    } 
                }
                for (long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    arr_63 [i_3] [i_3] [i_17] [i_3] = ((((/* implicit */_Bool) arr_41 [i_3] [i_4] [i_3])) ? (((((/* implicit */int) arr_11 [i_3] [i_4] [i_3])) + (((/* implicit */int) arr_42 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_4])));
                    arr_64 [i_3] [i_4] [i_3] = ((/* implicit */int) (unsigned short)31);
                }
            }
        } 
    } 
}
