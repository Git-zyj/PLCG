/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176519
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 &= ((/* implicit */signed char) max(((+(((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) (short)23615))));
        var_16 &= ((/* implicit */long long int) max((5887222239713731629ULL), (((/* implicit */unsigned long long int) arr_3 [(signed char)7] [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    var_17 = (~(((((/* implicit */_Bool) -1413705891)) ? (((/* implicit */long long int) arr_6 [i_0] [(_Bool)1])) : (8424885920531414734LL))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [15ULL] [i_1])) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_4 - 1] [1] [i_2] [1] [i_4])) : (arr_11 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_3] [i_4])));
                        var_19 = ((/* implicit */_Bool) (-(arr_7 [i_1] [i_4 + 2] [i_4 + 1] [i_4])));
                        var_20 |= ((((/* implicit */_Bool) arr_1 [i_4 + 1] [i_4 + 2])) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) arr_1 [i_4 + 2] [i_4 + 1])));
                    }
                }
                for (short i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [(unsigned char)8] [i_5] [i_5 - 1] [i_5])) ? (-8424885920531414735LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) -8424885920531414735LL))));
                    var_23 = ((((/* implicit */_Bool) 370847145269459726ULL)) ? (((/* implicit */int) arr_4 [i_5 + 1])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_14 [i_1] [i_2])) : (((/* implicit */int) var_2)))));
                    var_24 *= ((/* implicit */_Bool) arr_13 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]);
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 3; i_6 < 15; i_6 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) arr_13 [i_6] [i_6 - 2] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_13 [i_6 - 1] [i_6 - 2] [i_5 - 1] [i_5 - 1])))))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_1] [i_6 - 2] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_6 - 2] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_6 - 2] [i_1] [i_5 - 1]))));
                        arr_18 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                    }
                    for (unsigned short i_7 = 3; i_7 < 15; i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_0] [i_0] [11ULL] [i_0] [15LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(12577651344411399006ULL)))) ? (((/* implicit */int) arr_9 [i_5 + 1] [10] [i_5 + 1] [i_5 - 1] [i_5 - 1])) : (-110866024)));
                        var_27 = ((/* implicit */_Bool) (-(arr_17 [i_0])));
                    }
                }
                for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_28 [i_8] [i_8] &= ((/* implicit */int) var_6);
                        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(-6611399590410797682LL))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [10] [5] [i_8] [10])) ? (((/* implicit */int) (unsigned short)4456)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [(unsigned char)4] [i_0] [i_0] [i_0])))))));
                        arr_33 [(unsigned char)14] = ((arr_27 [i_0] [i_0] [i_1] [i_2] [i_8] [i_10]) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_0] [i_10])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_2] [i_2] [i_10])));
                        var_30 = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                        var_31 = ((/* implicit */int) min((var_31), ((-(((/* implicit */int) arr_16 [(unsigned short)1] [6LL] [i_2] [i_1] [i_0]))))));
                    }
                    var_32 = ((/* implicit */_Bool) -2);
                }
                arr_34 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [(unsigned short)7]))));
                var_33 = ((/* implicit */unsigned short) (-(5887222239713731628ULL)));
                arr_35 [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_0);
            }
            arr_36 [i_0] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_0] [i_0])) ? (7113265816574910328LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1])))))));
            arr_37 [i_0] = var_7;
        }
    }
    var_34 = ((/* implicit */unsigned short) var_0);
    var_35 = ((/* implicit */signed char) var_4);
}
