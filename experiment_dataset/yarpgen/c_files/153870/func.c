/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153870
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
    var_14 = var_11;
    var_15 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_1)))))) ? (((/* implicit */long long int) (~(var_8)))) : (var_11)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
        var_17 = ((/* implicit */unsigned char) (_Bool)1);
        var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */int) var_4);
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) & (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [(unsigned char)8]), (var_10))))) : ((-((+(2114577719571133143ULL)))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 7; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) || (arr_10 [i_1] [i_2] [(short)6] [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [(signed char)3] [i_2] [0LL] [(unsigned short)9])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) (unsigned short)22320))))) : (((/* implicit */int) arr_1 [(unsigned short)2])))) : (((((/* implicit */_Bool) ((long long int) -4217299475831979872LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((((/* implicit */_Bool) 7883540190313038794LL)) && (((/* implicit */_Bool) arr_12 [i_1] [i_2])))))))));
                        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_2]))))) <= (((unsigned long long int) arr_3 [2ULL] [1ULL])))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 2; i_5 < 7; i_5 += 2) /* same iter space */
                        {
                            arr_17 [(unsigned char)7] [(unsigned char)7] [(unsigned char)7] [i_4] [0LL] [i_2] [i_2] = ((/* implicit */unsigned short) arr_14 [i_3] [i_2] [i_3]);
                            arr_18 [i_5] [i_2] [i_3] [i_4] [i_5] = min((((/* implicit */unsigned short) var_2)), ((unsigned short)16156));
                            var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1] [i_2])))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 7; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_1] [i_2] [i_3 - 2] [(unsigned short)8] [i_6] [i_1] [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [8U] [i_3 + 2] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) arr_20 [i_1] [i_2] [3ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8)))));
                            arr_22 [i_1] [i_2] [i_2] [i_4] [5ULL] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_1] [i_2])) ? ((~(((/* implicit */int) arr_3 [(short)7] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_0))));
                        }
                        /* vectorizable */
                        for (short i_7 = 2; i_7 < 7; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((((/* implicit */_Bool) 13120073612063201628ULL)) ? (arr_14 [i_4] [i_2] [i_3 - 1]) : (arr_14 [i_4] [i_2] [i_3 - 1]));
                            var_25 = ((/* implicit */unsigned char) var_0);
                        }
                    }
                } 
            } 
        } 
    }
}
