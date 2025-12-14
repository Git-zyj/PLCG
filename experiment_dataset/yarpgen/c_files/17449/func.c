/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17449
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
    var_18 *= ((/* implicit */signed char) var_15);
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((_Bool) 268435454))))), ((+((+(((/* implicit */int) var_0))))))));
    var_20 = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), (var_6)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) arr_1 [(unsigned char)5]);
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_23 -= ((/* implicit */unsigned long long int) arr_2 [i_0]);
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_24 = ((/* implicit */_Bool) (~(min((((/* implicit */int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) arr_8 [i_0])) ? (-268435455) : (arr_2 [18LL])))))));
            arr_9 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((268435455), (268435461)))) ? (((/* implicit */int) arr_6 [5] [i_0])) : ((-(((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_2])))))) != (arr_2 [i_0 - 1])));
            arr_10 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-2))));
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)25055)), (268435452))))));
        }
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_26 = min((min((arr_2 [i_0 - 1]), (((/* implicit */int) (unsigned short)35255)))), ((+(((/* implicit */int) arr_4 [i_0 - 1])))));
            var_27 = ((/* implicit */long long int) max(((+(arr_11 [i_0] [17] [i_0 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)35255)) / (((/* implicit */int) (unsigned char)255)))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
            {
                var_28 = (i_0 % 2 == zero) ? (((/* implicit */short) ((var_7) << (((arr_7 [i_0] [i_0 - 1] [i_0]) - (10627166409507062671ULL)))))) : (((/* implicit */short) ((var_7) << (((((arr_7 [i_0] [i_0 - 1] [i_0]) - (10627166409507062671ULL))) - (16788627420442820437ULL))))));
                arr_16 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
            }
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
            {
                arr_19 [i_0] = ((/* implicit */unsigned char) (+(max((min((arr_11 [12] [i_3] [17U]), (((/* implicit */unsigned long long int) arr_13 [i_0])))), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [15ULL]))))));
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(-268435455))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (arr_14 [(short)6]))))))) ? (max((((/* implicit */int) arr_0 [i_0 + 1])), ((+(((/* implicit */int) arr_6 [i_0] [i_0])))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)2046)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) arr_1 [(_Bool)1]))))))));
                arr_20 [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) >= (arr_17 [i_0 - 1] [(unsigned char)11] [i_5]))))) >= (min((arr_13 [i_0]), ((+(arr_13 [i_0]))))));
                var_30 = ((/* implicit */long long int) arr_4 [i_0 - 1]);
                var_31 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(arr_18 [i_0 + 1] [i_0 - 1] [i_0 - 1])))), (((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) / (arr_13 [i_3])))) : (arr_7 [i_0] [i_3] [i_3])))));
            }
            /* vectorizable */
            for (unsigned short i_6 = 4; i_6 < 17; i_6 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) (+((~(var_16)))));
                var_33 = ((/* implicit */_Bool) ((arr_11 [i_6 - 1] [i_0 - 1] [i_0]) + (arr_11 [i_6 + 2] [i_0 - 1] [i_0])));
            }
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                var_34 -= ((/* implicit */_Bool) (+(-268435479)));
                arr_27 [i_0] [i_7] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) < (((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */long long int) arr_2 [i_0])) : (6674812643559840525LL)))));
            }
            arr_28 [i_0] [i_3] = var_13;
        }
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        arr_38 [i_9] [i_8] [i_10] [i_8] [i_8] [i_10] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_10] [i_0 - 1]))));
                        arr_39 [i_0] [i_0] = arr_23 [i_0] [i_9] [i_0 - 1] [i_9];
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        arr_42 [i_9] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)45))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_41 [i_0] [1]))));
                        var_36 = ((/* implicit */long long int) arr_14 [i_0]);
                        var_37 = ((/* implicit */_Bool) ((unsigned char) arr_29 [i_0 - 1] [i_8] [i_0]));
                        var_38 ^= ((/* implicit */long long int) arr_37 [i_0 + 1]);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        var_39 = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                        var_40 -= ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0 + 1]);
                        var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0 + 1] [1ULL] [i_0] [i_0 - 1] [i_0 - 1]))));
                    }
                }
                arr_46 [13] [i_8] [i_0] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_0] [i_8]))));
                arr_47 [i_0] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_43 [i_0 + 1] [6LL] [i_0 + 1] [i_0 - 1] [i_0 + 1]))));
            }
            var_42 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_13 [i_0]) : (arr_13 [i_0]))))));
            var_43 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), ((-(((/* implicit */int) arr_6 [i_0] [i_0]))))));
            arr_48 [i_0] [i_0] [i_0] = var_14;
            /* LoopSeq 1 */
            for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                var_44 = ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_36 [i_0 + 1] [(unsigned char)9] [i_14] [5ULL] [i_14]))))) ? (max((var_14), (((/* implicit */int) arr_36 [i_0 + 1] [i_8] [(unsigned char)15] [(_Bool)1] [i_0 + 1])))) : (((/* implicit */int) ((unsigned short) arr_18 [i_0 + 1] [i_8] [i_14]))));
                arr_51 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) arr_43 [i_8] [i_8] [i_14] [i_8] [i_8]);
                var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)109))));
                var_46 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_30 [i_0] [i_0 + 1] [i_0]), (arr_30 [i_0] [i_0 + 1] [i_0])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_0 + 1] [i_0])))))));
            }
        }
    }
    for (unsigned char i_15 = 4; i_15 < 14; i_15 += 2) 
    {
        var_47 &= 1048568LL;
        arr_54 [7ULL] = ((/* implicit */_Bool) ((short) ((arr_23 [i_15] [i_15 - 4] [i_15] [i_15 + 3]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))))));
        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_15 - 3] [i_15 - 3] [i_15]))) - ((+(var_10))))))));
    }
    for (long long int i_16 = 1; i_16 < 21; i_16 += 1) 
    {
        arr_58 [i_16] = ((/* implicit */long long int) var_7);
        arr_59 [i_16] = (i_16 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) arr_56 [i_16])) << (((((/* implicit */int) arr_56 [i_16])) - (212))))) : ((+(((/* implicit */int) arr_57 [i_16 + 2]))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) arr_56 [i_16])) << (((((((/* implicit */int) arr_56 [i_16])) - (212))) + (150))))) : ((+(((/* implicit */int) arr_57 [i_16 + 2])))))));
    }
}
