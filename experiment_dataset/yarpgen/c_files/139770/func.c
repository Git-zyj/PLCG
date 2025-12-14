/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139770
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)3127)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_1 [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_15 &= ((/* implicit */signed char) -6037966871982404267LL);
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_1 [i_0]))));
            var_17 = ((/* implicit */unsigned short) (-(arr_3 [i_0] [i_1] [i_1 + 1])));
        }
        var_18 += ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22240))) : (-8327749647475036148LL)));
        var_19 |= ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)95)) || (((/* implicit */_Bool) arr_2 [i_2])))) ? (arr_2 [i_2]) : (max((2047698351206957027ULL), (((/* implicit */unsigned long long int) (unsigned char)25))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (var_13)))) ? (min((-6037966871982404267LL), (((/* implicit */long long int) (unsigned short)63)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [17ULL] [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((int) (_Bool)1))));
        var_22 = ((/* implicit */long long int) max((var_22), (var_0)));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (unsigned char)255))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) arr_12 [i_3 + 1]);
        arr_13 [i_3] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3 + 2] [i_3])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_4))));
        arr_14 [i_3] = arr_1 [i_3 + 2];
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */_Bool) arr_16 [i_4] [i_4]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
        {
            arr_22 [i_4] [i_4] = ((/* implicit */long long int) (_Bool)1);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_5] [i_5] [i_4])) ^ (((/* implicit */int) arr_15 [i_5]))));
            var_26 = ((/* implicit */signed char) var_7);
            var_27 ^= ((/* implicit */unsigned long long int) ((1608232532) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-28)) : (var_2)))));
        }
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            var_28 += ((/* implicit */unsigned short) var_3);
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-110))))) ? (((((/* implicit */_Bool) 34579955)) ? ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (16777184ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            arr_25 [i_4] [16] |= ((/* implicit */unsigned short) (_Bool)1);
        }
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_16 [(unsigned char)3] [i_4])) ? (arr_16 [i_4] [i_4]) : (arr_16 [i_4] [i_4]))) : ((-(((((/* implicit */_Bool) arr_15 [i_4])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_4])))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                arr_33 [i_4] [i_4] = ((/* implicit */long long int) arr_19 [22] [i_7]);
                /* LoopSeq 1 */
                for (signed char i_9 = 3; i_9 < 23; i_9 += 2) 
                {
                    var_31 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                    var_32 = ((arr_24 [15ULL]) == (arr_32 [i_4] [i_7] [i_8] [(unsigned short)14]));
                }
            }
            for (signed char i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                arr_39 [i_4] [i_4] = (((!(((/* implicit */_Bool) arr_28 [i_4] [i_4])))) ? (arr_32 [i_10 - 1] [(unsigned short)2] [i_10] [i_10]) : (((/* implicit */unsigned long long int) 864119219)));
                var_33 ^= ((/* implicit */_Bool) (((((-(((/* implicit */int) (signed char)15)))) + (2147483647))) << (((((-6037966871982404262LL) + (6037966871982404292LL))) - (30LL)))));
                var_34 = ((/* implicit */unsigned short) 16399045722502594588ULL);
                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) var_0))));
            }
            for (int i_11 = 4; i_11 < 22; i_11 += 2) 
            {
                arr_42 [i_4] [(signed char)16] [i_4] [i_11 - 1] = ((/* implicit */long long int) (~(0ULL)));
                var_36 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_11 - 2] [i_4]))) * (16777183ULL));
            }
            arr_43 [i_4] [i_4] = ((/* implicit */int) var_12);
            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 576459652791795712ULL)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [(_Bool)1] [i_7]))) : (var_8)))));
            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (~(arr_16 [i_4] [18ULL]))))));
            var_39 = ((/* implicit */unsigned short) var_8);
        }
        for (short i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            arr_47 [i_4] [i_12] = ((/* implicit */long long int) (~(((((/* implicit */int) arr_20 [i_4] [i_4])) - (((/* implicit */int) arr_20 [i_4] [i_4]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_13 = 2; i_13 < 21; i_13 += 1) 
            {
                arr_51 [i_13] [i_4] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_13 + 3] [i_13 - 1] [i_13 + 3]))));
                arr_52 [i_4] [i_12] [16U] = ((/* implicit */long long int) arr_36 [i_13] [i_13] [i_13 + 1] [i_13 + 3]);
            }
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                arr_55 [8] [i_12] [i_4] [19ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                var_40 = ((((/* implicit */_Bool) arr_38 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383))) : (var_8));
            }
        }
        /* vectorizable */
        for (signed char i_15 = 2; i_15 < 23; i_15 += 2) 
        {
            arr_58 [i_4] [i_4] = ((/* implicit */unsigned char) (short)30872);
            arr_59 [i_4] [i_15] = ((/* implicit */unsigned short) ((arr_48 [19U] [19U] [i_15 + 1] [i_4]) / (((/* implicit */int) ((signed char) -1209849871)))));
            arr_60 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((signed char) arr_31 [i_15] [i_4]));
        }
    }
    var_41 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((short) (_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */int) (signed char)58))))))));
    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)0)))));
    var_43 = ((/* implicit */_Bool) var_5);
    var_44 = var_1;
}
