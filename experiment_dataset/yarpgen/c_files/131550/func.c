/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131550
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            var_18 -= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 2])) ? (0) : (((/* implicit */int) (unsigned short)65535)))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) || (((/* implicit */_Bool) arr_0 [i_1 - 4]))));
        }
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2152287702903330336ULL)) ? (((int) 162795538)) : (162795555)));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */int) arr_3 [i_2 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_2 + 2] [i_0] [i_0]))));
                arr_10 [2LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_3] [i_2 - 2] [i_0] [(unsigned char)15])) : (0)));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((signed char) var_6)))));
            }
            arr_11 [i_0] = ((/* implicit */signed char) ((long long int) arr_2 [i_2 - 1] [i_2 - 2]));
            var_23 += ((/* implicit */long long int) ((signed char) arr_1 [i_2 + 1] [i_2]));
            var_24 = ((/* implicit */unsigned short) ((-162795538) - (((/* implicit */int) (short)5))));
        }
        var_25 = ((/* implicit */long long int) ((int) var_1));
        var_26 += ((/* implicit */long long int) ((-162795538) / (((/* implicit */int) (unsigned short)39062))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (int i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    {
                        var_27 *= ((/* implicit */unsigned long long int) ((int) arr_15 [i_5] [i_6 - 1] [21] [i_6 - 1]));
                        var_28 *= ((/* implicit */signed char) ((unsigned char) arr_9 [i_4] [i_4] [i_4 - 2] [i_4 - 4]));
                        var_29 = ((/* implicit */long long int) ((unsigned long long int) var_17));
                        var_30 ^= ((/* implicit */int) ((((/* implicit */long long int) var_8)) | (arr_2 [i_5] [i_6 - 1])));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)60755)) & (((/* implicit */int) arr_17 [i_6 + 1] [i_5]))));
                    }
                } 
            } 
        } 
        var_32 += ((/* implicit */short) ((signed char) arr_6 [i_0] [(unsigned char)0] [i_0]));
    }
    var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned char)99)) % (((/* implicit */int) var_17)))))) ? (((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((signed char) var_12))) : (((((/* implicit */_Bool) -1002326434543292767LL)) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) (short)12)))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((var_4) == (((/* implicit */unsigned long long int) 162795538))))), (min(((unsigned short)39062), (((/* implicit */unsigned short) (unsigned char)249)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 3; i_7 < 8; i_7 += 2) 
    {
        arr_23 [i_7 - 1] = ((((/* implicit */_Bool) ((int) arr_5 [i_7 - 1] [i_7 + 2] [i_7 + 3]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max(((unsigned short)19156), (arr_17 [i_7 + 1] [i_7])))))) : (((((/* implicit */_Bool) ((int) var_17))) ? (((unsigned long long int) (unsigned short)65532)) : (arr_13 [i_7 + 1]))));
        var_34 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -987713477)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_13 [i_7 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 162795555)))) : (max((((unsigned long long int) -402190233)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)94))))))))));
        arr_24 [i_7] [i_7 - 1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_7 + 2])) || (((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_7 + 1] [i_7 - 3]))) : (((int) 2147483644))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (int i_10 = 2; i_10 < 10; i_10 += 3) 
                {
                    {
                        var_35 = ((int) ((short) ((((/* implicit */unsigned long long int) arr_21 [i_10 - 1])) * (18446744073709551611ULL))));
                        var_36 = ((/* implicit */long long int) max((((unsigned long long int) var_16)), (min((((unsigned long long int) var_13)), (((/* implicit */unsigned long long int) var_16))))));
                        arr_34 [i_7] [i_9] [i_9] [i_10] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_13)) ? (3040094438293928679ULL) : (arr_19 [(unsigned short)8] [i_7 + 3] [i_10 - 1] [i_10 - 1]))));
                    }
                } 
            } 
        } 
        arr_35 [i_7] = ((/* implicit */int) ((((unsigned long long int) var_5)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_7 + 2] [i_7 - 2]))))));
    }
    var_37 ^= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)1)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) -162795538)))));
}
