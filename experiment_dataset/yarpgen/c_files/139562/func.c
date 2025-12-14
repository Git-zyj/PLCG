/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139562
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
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_12 -= ((/* implicit */unsigned char) ((short) ((unsigned char) arr_2 [i_0])));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */signed char) ((short) ((short) arr_0 [(_Bool)1] [(_Bool)1])));
            var_14 = ((long long int) ((short) arr_7 [i_0] [i_0]));
            var_15 = ((int) ((_Bool) (unsigned short)144));
            arr_8 [(_Bool)1] [8ULL] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) var_10)));
        }
        for (signed char i_2 = 1; i_2 < 13; i_2 += 2) /* same iter space */
        {
            var_16 &= ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) arr_2 [i_2])));
            arr_11 [i_2] = ((/* implicit */unsigned long long int) ((short) ((int) var_10)));
        }
        var_17 = ((unsigned char) ((signed char) var_6));
        var_18 = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) var_8)));
        arr_12 [(_Bool)1] = ((unsigned char) ((signed char) (short)1418));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned char) ((long long int) ((unsigned short) ((unsigned long long int) 578875434))));
        var_20 = ((/* implicit */long long int) ((unsigned char) ((unsigned char) ((int) var_4))));
        arr_16 [i_3] [i_3] = ((unsigned char) 70368744177663LL);
        var_21 ^= ((/* implicit */int) ((_Bool) ((signed char) (short)-24658)));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
        {
            arr_19 [(unsigned char)15] [(unsigned char)15] [i_4] = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) ((unsigned short) (unsigned short)56024))));
            var_22 = ((signed char) ((int) ((unsigned long long int) (short)-24658)));
        }
        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
        {
            arr_22 [i_3] [i_3] |= ((int) 2715672045201181186ULL);
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) (signed char)-1)));
                        arr_31 [i_5] [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((short) ((signed char) var_4)));
                    }
                    var_24 &= ((/* implicit */int) ((signed char) ((signed char) var_2)));
                }
                for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    arr_36 [i_3] [i_3] [i_5] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) var_10)));
                    var_25 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)255));
                }
                for (unsigned short i_10 = 2; i_10 < 14; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((_Bool) ((_Bool) var_9)));
                        arr_41 [i_3] [i_5] [i_6] [i_3] |= ((/* implicit */signed char) ((unsigned int) ((unsigned char) arr_17 [(_Bool)1] [i_5])));
                    }
                    var_27 = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) arr_32 [i_3] [i_5] [i_5] [i_5])));
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                    {
                        arr_44 [i_5] [i_5] = ((/* implicit */_Bool) ((signed char) ((long long int) arr_25 [i_5] [i_5] [i_6])));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((long long int) ((int) (signed char)-1))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
                    {
                        arr_47 [i_5] [i_6] [i_10] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) arr_21 [i_3] [(unsigned char)2])));
                        var_29 = ((/* implicit */unsigned char) ((int) ((_Bool) arr_46 [i_3] [i_3] [i_3] [i_3] [i_3])));
                        var_30 ^= ((/* implicit */long long int) ((unsigned short) ((long long int) arr_30 [i_3] [(unsigned short)8] [i_13])));
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((unsigned long long int) ((int) var_8))))));
                    }
                    var_32 = ((/* implicit */short) ((int) ((unsigned short) var_7)));
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((int) ((unsigned char) arr_35 [i_3] [i_3] [6] [i_3] [i_3] [i_3]))))));
                }
                var_34 = ((/* implicit */int) ((unsigned long long int) ((unsigned int) var_10)));
            }
            var_35 += ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) ((short) arr_20 [i_3] [i_3]))));
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_36 = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) ((unsigned short) 134217728))));
        arr_52 [i_14] = ((/* implicit */unsigned long long int) ((unsigned char) ((short) ((unsigned char) (signed char)-109))));
        var_37 = ((unsigned long long int) ((int) ((int) arr_40 [i_14] [i_14] [i_14] [5ULL] [i_14] [i_14])));
        arr_53 [i_14] [(signed char)6] |= ((signed char) ((signed char) ((short) arr_20 [i_14] [i_14])));
    }
    var_38 |= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) ((signed char) var_3))));
}
