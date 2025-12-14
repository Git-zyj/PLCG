/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161755
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)62)))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-13035)))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_22 = min((min((arr_1 [i_1]), (arr_1 [i_1]))), (arr_1 [i_1]));
        arr_6 [i_1] = ((/* implicit */int) arr_4 [i_1]);
    }
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 221701375U))));
        arr_9 [i_2] = arr_7 [(short)4] [i_2];
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) ? (arr_7 [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) / (4073265921U)))))))));
                            arr_21 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_2] [i_3]);
                            var_26 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3])) ? (511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_3] [i_5] [i_6])))))));
                        }
                    } 
                } 
            } 
            var_27 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) + (2341105414U)));
        }
        arr_22 [i_2] = ((/* implicit */long long int) (short)0);
    }
    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_7] [i_7]))))), ((unsigned char)1)));
        arr_25 [i_7] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_4) - (arr_24 [i_7])))) ? (((((/* implicit */_Bool) (unsigned char)214)) ? (arr_23 [(short)9] [(short)9]) : (arr_24 [i_7]))) : ((-(((/* implicit */int) (unsigned char)117)))))) <= ((+((-(((/* implicit */int) (short)0))))))));
    }
    for (int i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        arr_28 [i_8] [8] = ((((/* implicit */_Bool) max(((~(0ULL))), (max((((/* implicit */unsigned long long int) (unsigned char)199)), (18446744073709551615ULL)))))) ? (((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 114688)) ? (4073265921U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (arr_14 [(unsigned char)6] [16LL] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_8])))))));
        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)117))))) ? (arr_27 [i_8] [i_8]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)138)))))))))));
        arr_29 [i_8] [i_8] = (-(((arr_20 [i_8] [i_8]) * (arr_20 [i_8] [i_8]))));
        arr_30 [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)112)))))));
    }
    for (int i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        arr_34 [i_9] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_33 [(unsigned char)8] [i_9])) ? (32766) : ((-(((/* implicit */int) arr_33 [i_9] [i_9])))))));
        /* LoopSeq 3 */
        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            arr_37 [i_9] [i_10] = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (short)13259)))));
            arr_38 [i_9] [i_10] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) > (arr_31 [2] [i_10]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [(unsigned char)14] [i_10]))))) : (arr_36 [i_9])));
            arr_39 [i_9] = ((/* implicit */unsigned long long int) ((221701375U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_2)))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            var_31 = ((((/* implicit */_Bool) arr_41 [i_9])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))));
            arr_42 [i_9] [i_11] = ((/* implicit */unsigned char) arr_36 [i_9]);
        }
        for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (~(-114688)))))));
            arr_45 [i_12] [i_12] [i_12] = ((/* implicit */int) arr_31 [i_9] [i_12]);
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [21ULL] [i_12] [i_12]))))) + (((int) 524287))));
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (-((-(((((/* implicit */int) (unsigned char)159)) / (((/* implicit */int) (unsigned char)139)))))))))));
        }
    }
}
