/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122003
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) ((min((arr_0 [i_0]), (((/* implicit */int) ((unsigned short) arr_0 [(unsigned short)7]))))) * (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_2 [i_1] [i_1]))));
                        arr_12 [i_3] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_3])) < (((/* implicit */int) var_0))))) >= ((+((+(((/* implicit */int) var_3)))))));
                        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_0 [i_1]) + (((/* implicit */int) (short)30907))))) || (((/* implicit */_Bool) ((var_10) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3])))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)235))))) ? (arr_10 [i_2 + 2] [i_3] [i_2 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [(short)7] [i_3]) - (((/* implicit */int) arr_3 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) ((_Bool) var_10))))))));
                    }
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-25331)) : (arr_8 [i_0])))), (max((((/* implicit */unsigned long long int) var_8)), (arr_5 [i_0])))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((((/* implicit */int) arr_3 [i_1] [i_1])) % (arr_9 [i_0] [i_1] [i_2] [i_2 + 2]))) - (((int) var_5))))));
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((int) ((signed char) var_1)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (long long int i_7 = 4; i_7 < 13; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            arr_25 [i_5] [i_5] [(_Bool)0] [i_5] = ((/* implicit */int) ((arr_10 [i_7 - 3] [i_5] [i_8] [i_8]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (short)25353))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [i_8] [i_7 + 1] [i_7 - 3]))) : (arr_22 [i_7 - 4])));
                            var_20 = ((/* implicit */short) ((((((/* implicit */int) var_2)) > (arr_8 [i_4]))) ? (((/* implicit */int) ((signed char) arr_24 [i_4] [i_5] [i_6] [i_7 + 2] [i_8]))) : (arr_6 [i_7 - 4] [i_7 - 4] [i_7 + 3])));
                        }
                    } 
                } 
            } 
            var_21 *= ((/* implicit */_Bool) (unsigned char)0);
        }
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            var_22 *= ((/* implicit */_Bool) (~(arr_27 [i_9] [i_9] [i_4])));
            var_23 = ((/* implicit */unsigned short) -6514853416382830719LL);
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((long long int) ((_Bool) arr_21 [i_4] [i_4] [i_4] [i_4]))))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_26 ^= ((unsigned char) (~(arr_5 [i_4])));
                var_27 *= ((/* implicit */short) var_12);
            }
            /* LoopSeq 1 */
            for (int i_12 = 2; i_12 < 14; i_12 += 3) 
            {
                arr_37 [i_4] [i_9] [i_12] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_9] [i_12] [i_12 + 1] [i_12 + 1])) | (((/* implicit */int) arr_21 [i_9] [5U] [i_12 + 2] [i_12 - 1]))));
                var_28 = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)32))));
            }
        }
        var_29 = ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned char)134)));
    }
    for (int i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_8 [i_13]) | (arr_8 [i_13])))) ? (((/* implicit */int) ((short) arr_8 [(short)2]))) : (((((/* implicit */_Bool) -6514853416382830706LL)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (short)27967))))));
        var_31 = ((/* implicit */unsigned int) ((unsigned short) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-32746)) : (var_8))), (((var_13) ^ (((/* implicit */int) (unsigned char)32)))))));
        var_32 = ((/* implicit */unsigned short) min((((arr_5 [i_13]) ^ (arr_5 [i_13]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-67)))))));
    }
    var_33 *= ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */short) min(((!(((/* implicit */_Bool) (short)21322)))), ((!(((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
    {
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_40 [i_14]) + (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_14] [i_14]))))), (((/* implicit */long long int) arr_41 [i_14] [i_14]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_14)) - ((+(((/* implicit */int) arr_41 [i_14] [(unsigned short)14]))))))) : (min((arr_40 [i_14]), (arr_40 [i_14])))));
        var_35 *= ((/* implicit */unsigned short) arr_41 [i_14] [i_14]);
    }
    for (int i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        arr_46 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_42 [i_15] [i_15])), (arr_44 [i_15] [i_15])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)10))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_15] [i_15]))) | (arr_44 [i_15] [i_15])))));
        /* LoopSeq 1 */
        for (int i_16 = 2; i_16 < 18; i_16 += 1) 
        {
            arr_49 [i_15] = ((/* implicit */unsigned int) var_6);
            arr_50 [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [8LL] [8LL]))) >= (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17362)))) ? (arr_44 [i_16 + 2] [i_16 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-116)), (arr_42 [i_15] [i_16])))))))));
            arr_51 [i_16] [i_16] = ((/* implicit */unsigned short) max((min(((-(((/* implicit */int) var_14)))), (((((/* implicit */int) (signed char)112)) - (((/* implicit */int) (short)28456)))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_15] [i_15])) | (2147483647)))) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) (short)-16)))) : (((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28456))))))))));
            arr_52 [i_16 - 1] [i_15] = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -6514853416382830719LL))))), (((((long long int) arr_45 [i_15] [i_16])) << ((+(((/* implicit */int) arr_48 [i_15] [i_16 + 1] [12]))))))));
            var_36 = ((/* implicit */short) ((_Bool) min((arr_44 [i_16 + 2] [i_16 + 2]), (((/* implicit */unsigned long long int) arr_40 [i_16 - 1])))));
        }
    }
}
