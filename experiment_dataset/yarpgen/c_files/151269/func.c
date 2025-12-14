/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151269
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [(signed char)3] = (+((-((~(var_4))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_0])))) >> (((((/* implicit */int) arr_0 [(short)2])) - (10091)))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_7))) + (((/* implicit */int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)2]))))))))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((long long int) max((((/* implicit */int) arr_0 [i_2])), (var_0)))))));
                        var_22 -= ((/* implicit */unsigned int) (((~(arr_9 [i_0 - 3] [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) ((((arr_6 [i_1] [i_1] [i_2]) + (2147483647))) >> (((arr_7 [i_3 + 1] [i_2] [i_2] [i_0 - 3]) - (6909329940609259957LL))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(arr_3 [i_0])))), (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) & (var_6))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-14)) ? ((-(((((/* implicit */int) (signed char)-85)) / (((/* implicit */int) (short)21619)))))) : (((/* implicit */int) max(((short)1008), ((short)16168))))));
    }
    /* vectorizable */
    for (signed char i_4 = 3; i_4 < 11; i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] = -1LL;
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
        {
            arr_16 [i_4] [11U] = ((/* implicit */unsigned long long int) (~(var_15)));
            arr_17 [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 - 3] [i_4 - 2] [i_4 - 2])) ? (arr_9 [i_4 - 3] [i_4 - 2] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            arr_18 [i_4] [i_4] [i_5] = ((/* implicit */signed char) var_10);
        }
        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                arr_25 [4] [i_4] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_14 [i_4] [i_4]) != (((/* implicit */long long int) arr_11 [i_4])))))));
                var_25 = (+(((((/* implicit */_Bool) var_10)) ? (arr_3 [i_7]) : (((/* implicit */int) (signed char)-54)))));
                arr_26 [i_4] [i_6] [i_4] = arr_8 [i_4] [i_4] [7ULL] [i_6] [i_7] [i_7];
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                {
                    arr_29 [i_4 + 1] [11ULL] [i_7] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_4]))));
                    arr_30 [i_7] [i_7] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_17);
                }
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    arr_34 [i_4] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) var_11);
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_8))));
                }
            }
            for (short i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                arr_37 [i_4] [i_6] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_4 - 2])) ? (arr_14 [i_4 + 1] [i_4]) : (arr_14 [i_4] [i_4])));
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 10; i_12 += 4) 
                    {
                        {
                            arr_45 [i_4] = ((/* implicit */unsigned short) var_4);
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_4 - 2] [i_12 + 1] [i_12])) ? (((/* implicit */int) arr_20 [i_11 + 1] [i_12 + 2])) : (((/* implicit */int) arr_20 [i_11 - 1] [i_12 - 1]))));
                            var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1060329215)) ? (((/* implicit */int) (unsigned short)22205)) : (((/* implicit */int) (_Bool)1))))) : (arr_9 [i_12 - 1] [i_11 + 2] [i_4 - 2])));
                            arr_46 [i_4] [i_6] [i_6] [i_6] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_47 [i_10] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) (short)(-32767 - 1))))));
            }
            var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_4] [i_6] [i_4] [i_6] [i_4 - 1] [i_4])) && (((/* implicit */_Bool) arr_3 [i_4])))) || (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_19 [i_4] [i_4]))))));
            arr_48 [i_4] = ((/* implicit */short) var_8);
            var_30 = ((/* implicit */short) (-(arr_42 [i_6] [i_6] [(unsigned short)8] [i_6] [(signed char)3] [i_6] [i_4 + 1])));
        }
        var_31 |= ((/* implicit */unsigned short) (+((-9223372036854775807LL - 1LL))));
        /* LoopSeq 2 */
        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            arr_51 [i_4] [6ULL] &= ((/* implicit */unsigned short) ((arr_27 [i_4 - 2] [i_4 - 3] [i_13] [i_13]) < (((/* implicit */long long int) ((/* implicit */int) arr_35 [10ULL] [i_4 - 3])))));
            var_32 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_39 [i_4] [i_4])) + (arr_6 [i_4] [(unsigned char)8] [i_13])))));
            /* LoopNest 3 */
            for (unsigned short i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                for (unsigned short i_15 = 3; i_15 < 10; i_15 += 2) 
                {
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        {
                            arr_59 [i_16] [i_4] [i_14] = (i_4 % 2 == 0) ? (((/* implicit */signed char) ((arr_7 [i_14 + 1] [i_4] [i_4] [i_4 - 1]) >> (((((/* implicit */int) (unsigned char)52)) >> (((/* implicit */int) (short)25))))))) : (((/* implicit */signed char) ((((arr_7 [i_14 + 1] [i_4] [i_4] [i_4 - 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)52)) >> (((/* implicit */int) (short)25)))))));
                            var_33 -= ((/* implicit */unsigned char) -213321252852066514LL);
                        }
                    } 
                } 
            } 
        }
        for (int i_17 = 0; i_17 < 12; i_17 += 4) 
        {
            var_34 = ((/* implicit */unsigned char) ((8987866677400053148ULL) < (((/* implicit */unsigned long long int) (+(arr_61 [i_4] [i_17] [i_17]))))));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4 - 3] [i_4 - 3] [i_4 - 1]))) <= (var_15)));
        }
    }
    var_36 ^= ((/* implicit */int) ((short) var_4));
    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((805306368ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), ((short)32755)))))))) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) ((((/* implicit */int) (short)5848)) <= (((/* implicit */int) (short)8681)))))));
}
