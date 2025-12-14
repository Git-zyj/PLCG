/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114059
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
    var_17 &= ((/* implicit */short) var_14);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [6] &= ((/* implicit */long long int) ((_Bool) ((unsigned short) var_7)));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                var_18 = ((/* implicit */unsigned long long int) ((int) 9223372036854775801LL));
                arr_8 [10U] [i_2] [1U] [10U] = ((/* implicit */short) ((int) arr_6 [i_0] [i_2 - 4] [(signed char)6] [(signed char)6]));
            }
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) ((short) ((long long int) var_16)));
                var_20 |= ((unsigned int) ((signed char) ((_Bool) (unsigned short)65535)));
                arr_11 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) ((long long int) arr_10 [i_0] [i_1] [i_1]))));
            }
            var_21 = ((unsigned short) ((_Bool) arr_1 [i_0] [i_1]));
            var_22 = ((/* implicit */unsigned int) ((long long int) ((int) arr_5 [(short)7])));
            var_23 = ((/* implicit */long long int) ((_Bool) ((int) var_15)));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_5 = 2; i_5 < 10; i_5 += 1) /* same iter space */
            {
                arr_17 [2] [8] [i_5] |= ((/* implicit */int) ((signed char) arr_12 [i_0] [(short)6] [i_5 - 1]));
                var_24 = ((/* implicit */unsigned int) ((short) var_9));
            }
            for (int i_6 = 2; i_6 < 10; i_6 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */short) ((signed char) -9223372036854775802LL));
                var_26 = ((/* implicit */int) ((_Bool) -9223372036854775802LL));
                var_27 = ((/* implicit */long long int) ((_Bool) var_2));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((unsigned short) 13263195537929616994ULL)))));
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((int) arr_15 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_4])))));
                }
                for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    var_30 = ((/* implicit */long long int) ((_Bool) (short)-6331));
                    var_31 = ((/* implicit */unsigned char) ((int) var_6));
                }
            }
            for (int i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((unsigned int) var_9)))));
                var_33 ^= ((unsigned int) 3722798102U);
            }
            arr_33 [i_0] [i_0] [i_0] = ((int) (_Bool)0);
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((short) (unsigned char)125)))));
            arr_34 [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_14 [(short)4] [i_4] [(short)4]));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 2; i_11 < 9; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) ((unsigned long long int) arr_39 [i_11 - 1] [i_11 + 2] [i_11 - 1]));
                        var_36 -= ((/* implicit */short) ((unsigned long long int) var_11));
                    }
                } 
            } 
            var_37 = ((/* implicit */short) ((unsigned int) arr_3 [i_0]));
        }
        arr_45 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((int) var_15)));
    }
    for (unsigned long long int i_13 = 3; i_13 < 14; i_13 += 1) 
    {
        var_38 = ((/* implicit */int) ((unsigned short) ((_Bool) var_5)));
        arr_48 [i_13] = ((/* implicit */unsigned int) ((long long int) ((short) var_6)));
        var_39 = ((/* implicit */unsigned long long int) ((int) ((signed char) (unsigned char)25)));
        var_40 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) arr_47 [i_13 - 3])));
    }
    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
    {
        var_41 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) var_16)));
        arr_51 [i_14] [i_14] = ((/* implicit */_Bool) ((int) ((long long int) var_6)));
    }
    var_42 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 4) 
    {
        for (short i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            {
                var_43 = ((long long int) ((int) ((unsigned int) arr_49 [i_15] [i_15])));
                var_44 = ((/* implicit */_Bool) ((signed char) ((int) (unsigned short)10247)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_17 = 1; i_17 < 12; i_17 += 3) 
                {
                    var_45 += ((/* implicit */unsigned int) ((long long int) var_7));
                    var_46 = ((/* implicit */unsigned int) ((short) var_8));
                }
                for (unsigned long long int i_18 = 1; i_18 < 12; i_18 += 3) 
                {
                    var_47 = ((/* implicit */_Bool) ((long long int) ((_Bool) arr_59 [i_18 + 1] [i_16] [(unsigned char)8])));
                    /* LoopSeq 3 */
                    for (int i_19 = 1; i_19 < 13; i_19 += 3) 
                    {
                        var_48 = ((/* implicit */signed char) ((unsigned char) ((long long int) ((signed char) arr_61 [i_15 + 2] [(_Bool)1] [5LL] [i_19]))));
                        arr_65 [i_15] [i_15] [2ULL] [i_19 - 1] [(unsigned char)2] = ((/* implicit */unsigned short) ((short) ((short) var_13)));
                    }
                    /* vectorizable */
                    for (unsigned short i_20 = 0; i_20 < 14; i_20 += 2) 
                    {
                        var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) ((_Bool) ((int) var_11))))));
                        var_50 = ((unsigned long long int) var_10);
                    }
                    /* vectorizable */
                    for (short i_21 = 0; i_21 < 14; i_21 += 3) 
                    {
                        arr_72 [i_15 - 1] [6] [12U] [12U] [12U] = ((/* implicit */unsigned short) ((short) (_Bool)1));
                        var_51 = ((/* implicit */unsigned short) ((int) var_2));
                    }
                    var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) ((long long int) ((long long int) arr_61 [i_15] [i_18 - 1] [i_18] [10U]))))));
                    var_53 = ((/* implicit */short) ((unsigned long long int) ((unsigned short) arr_60 [i_18 + 1] [i_18 + 1] [(signed char)9] [i_18 - 1])));
                }
            }
        } 
    } 
}
