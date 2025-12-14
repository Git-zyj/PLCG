/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126954
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_17 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_3 [i_0]))))));
                arr_8 [i_0] [i_0] [(short)21] [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_4 [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        {
                            arr_17 [(signed char)0] [i_0] = ((/* implicit */short) ((unsigned char) 471721916U));
                            arr_18 [(signed char)2] [(signed char)2] [i_0] [i_3] [(signed char)2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(short)14] [i_0] [i_2])))))) : ((~(min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [8LL] [i_4])), (arr_16 [i_0] [i_0] [(unsigned char)11] [i_0] [i_0] [3LL] [i_0])))))));
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [19] [14U] = ((/* implicit */unsigned short) (+(arr_4 [i_0])));
            }
            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                arr_22 [i_0] [(signed char)20] [i_5] = ((/* implicit */unsigned short) arr_1 [i_1] [i_0]);
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [14U] [14U] [i_0])) && (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [(unsigned short)12] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_13 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] [(short)1])))))));
            }
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_20 [i_1] [i_1] [i_0])))) >= (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0])))) - ((~(arr_13 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_0] [i_1] [(_Bool)1])))))));
        }
        for (short i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 3; i_7 < 22; i_7 += 1) 
            {
                arr_28 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14115855646703120030ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65522))))), ((~(arr_9 [i_0] [i_7 - 2] [i_0])))))) ? (max((((/* implicit */unsigned int) arr_23 [i_6] [i_0])), (((((/* implicit */_Bool) arr_21 [i_0] [(unsigned char)17])) ? (arr_16 [(signed char)2] [i_0] [i_0] [i_0] [i_6] [i_0] [i_7]) : (((/* implicit */unsigned int) arr_4 [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_13 [i_0] [(unsigned char)18] [(short)10] [i_6 + 2] [i_0] [i_7] [i_7])))))))));
                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_10 [(unsigned char)8] [i_6 + 2] [i_0] [i_0] [i_6] [i_0]) : (((/* implicit */unsigned long long int) arr_24 [(short)0] [21U] [(unsigned short)14]))))))))));
            }
            arr_29 [i_0] [i_6] = ((/* implicit */long long int) arr_9 [5ULL] [i_6 - 1] [i_6]);
        }
        var_21 = ((/* implicit */unsigned short) (~(min((arr_21 [(signed char)15] [(unsigned char)6]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))));
        var_22 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(signed char)14] [12] [(signed char)14] [12] [i_0])) ? (((/* implicit */int) ((unsigned char) (short)4096))) : (((/* implicit */int) arr_20 [i_0] [i_0] [(unsigned char)22]))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_0] [i_0])) + ((+(((/* implicit */int) (unsigned short)23))))));
    }
    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_6 [i_8] [(unsigned char)4] [(short)2] [i_8]))))))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 3; i_11 < 22; i_11 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) max((((((/* implicit */int) (unsigned char)243)) == (((/* implicit */int) ((0LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11)))))))), ((!(((/* implicit */_Bool) arr_13 [i_11] [i_11 - 3] [i_10] [i_9] [i_10] [i_8] [i_8]))))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), ((+(2013265920U)))));
                        var_27 = ((/* implicit */unsigned char) (!(((_Bool) (~(((/* implicit */int) arr_41 [i_8] [i_8] [(unsigned char)13] [(unsigned short)14])))))));
                        var_28 = ((/* implicit */signed char) (~(((/* implicit */int) arr_32 [14U] [14U] [i_11 - 1]))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_32 [i_8] [i_8] [i_8]), (((/* implicit */short) arr_14 [(unsigned short)18] [i_8] [i_8] [i_8] [(unsigned short)18])))))));
        var_30 ^= ((/* implicit */signed char) ((unsigned short) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (14115855646703120030ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))))))));
    }
    var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) var_5)))))))));
    var_32 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (unsigned short)9704)))));
}
