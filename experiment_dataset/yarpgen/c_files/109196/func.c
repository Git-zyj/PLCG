/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109196
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_7) : (arr_6 [i_1 + 2] [i_1] [i_1 + 3])));
                    var_17 |= ((/* implicit */unsigned long long int) (unsigned short)0);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-11)) ? (arr_11 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
            arr_13 [i_0] = var_12;
            var_19 += ((/* implicit */long long int) ((signed char) arr_2 [i_3]));
        }
        arr_14 [i_0] = ((/* implicit */_Bool) (-(137304735744ULL)));
        arr_15 [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]);
    }
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        var_20 |= ((/* implicit */int) ((unsigned short) ((signed char) ((unsigned short) 1269630452))));
        var_21 += max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14888))) : (var_8)))) ? (((unsigned long long int) (unsigned short)65535)) : (((((/* implicit */_Bool) arr_3 [i_4])) ? (arr_11 [i_4]) : (((/* implicit */unsigned long long int) var_16)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (var_1)))) ? (10902473062977011566ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1572864)) ? (arr_5 [(_Bool)1] [i_4] [i_4] [(_Bool)1]) : (((/* implicit */int) var_15))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        var_22 = ((/* implicit */int) 576460752303423488LL);
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (long long int i_7 = 2; i_7 < 19; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        arr_31 [i_5] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */unsigned long long int) var_15);
                        arr_32 [i_5] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_16), (8LL))))));
                        arr_33 [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_13))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)27), (((/* implicit */signed char) (_Bool)1))))) ? (var_3) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (max((((/* implicit */long long int) var_13)), (arr_19 [i_5])))));
                            arr_37 [i_5] [i_6] [10ULL] [10ULL] [i_5] = ((/* implicit */_Bool) ((unsigned short) arr_22 [13] [i_6]));
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_27 [i_7] [i_6] [i_7] [i_7 + 1]), (0))))));
                            arr_38 [i_5] [i_6] [i_7] [17LL] [i_9] = ((/* implicit */signed char) arr_36 [i_5] [i_6] [i_6] [i_5]);
                        }
                        for (unsigned long long int i_10 = 4; i_10 < 20; i_10 += 3) 
                        {
                            arr_41 [i_10] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) (unsigned short)28672)))) : (max(((+(((/* implicit */int) arr_36 [i_5] [i_7] [i_6] [i_10 - 3])))), (max((var_3), (var_13)))))));
                            var_25 += ((long long int) ((_Bool) arr_40 [i_7 + 1] [i_8] [i_8] [i_10] [i_10]));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                arr_48 [i_5] [i_5] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_5] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_35 [i_5] [i_11] [i_5])))) : (arr_43 [i_12] [20ULL] [20ULL])));
                var_26 += ((/* implicit */unsigned short) (~(var_1)));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 3) 
                    {
                        {
                            var_27 += ((/* implicit */unsigned long long int) (signed char)32);
                            arr_57 [i_5] [i_11] [i_12] [i_13] [i_13] [i_14] |= ((((/* implicit */_Bool) 9403594220532740834ULL)) ? (var_12) : (18446744073709551615ULL));
                            var_28 += ((unsigned long long int) arr_23 [i_14 + 1] [i_14 - 3] [i_5]);
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) ((unsigned long long int) arr_30 [3] [i_11] [19] [i_12] [i_12]));
            }
            var_30 = ((/* implicit */unsigned short) var_2);
        }
        arr_58 [i_5] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_5] [i_5] [i_5] [i_5]))))) > ((~(((/* implicit */int) var_9))))));
    }
    var_31 = ((/* implicit */unsigned char) ((min((var_15), ((!(((/* implicit */_Bool) (unsigned short)36863)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8191)) ? (var_11) : (var_5)))) ? (((/* implicit */unsigned long long int) var_7)) : (max((var_4), (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) >= (var_11)))))));
}
