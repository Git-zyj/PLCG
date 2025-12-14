/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142442
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((int) ((unsigned long long int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (max((((/* implicit */unsigned int) arr_0 [i_0])), (1456936670U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0)))))));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned short) min((arr_5 [(short)6]), (((/* implicit */short) (!(((/* implicit */_Bool) ((arr_12 [i_3]) ? (268435454) : (((/* implicit */int) arr_6 [(short)2]))))))))));
                        arr_13 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (short)32767)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) arr_10 [i_1])) : (((((/* implicit */_Bool) arr_11 [(signed char)5] [i_4] [(short)3] [(short)16] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_12 [(_Bool)1]))))))) : ((-(((unsigned long long int) arr_4 [i_2]))))));
                    }
                } 
            } 
        } 
        arr_14 [i_1] = (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) (signed char)-20)))))));
        arr_15 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_1])), (268435450)))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)59439)) : (((/* implicit */int) arr_12 [i_1])))))) <= (((/* implicit */int) arr_12 [i_1 + 1]))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) ((short) (_Bool)1));
        arr_20 [i_5] [(short)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 10855538669456433400ULL)) ? (((((/* implicit */int) arr_16 [i_5] [i_5])) & (((/* implicit */int) arr_10 [i_5])))) : ((~(((/* implicit */int) arr_8 [(short)16] [i_5] [(short)16] [i_5]))))));
    }
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        arr_23 [i_6] = ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) 2838030626U)) : (((((/* implicit */_Bool) ((unsigned char) arr_22 [i_6] [i_6]))) ? ((~(arr_21 [i_6]))) : (min((arr_21 [i_6]), (((/* implicit */unsigned long long int) (_Bool)0)))))));
        var_20 = ((long long int) (+(((/* implicit */int) ((signed char) arr_21 [i_6])))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_22 [i_6] [i_6]), (arr_22 [i_6] [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20))))) : (((/* implicit */int) ((signed char) -268435455)))))) ? (((long long int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_22 [2ULL] [i_6])) - (119)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_22 [i_6] [i_6]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) arr_22 [i_6] [(signed char)8])) : (((/* implicit */int) arr_22 [(_Bool)1] [(_Bool)1])))) : ((-(((/* implicit */int) (_Bool)1)))))))));
        arr_24 [(signed char)4] |= ((/* implicit */int) ((min((((/* implicit */int) (!((_Bool)0)))), (((((/* implicit */_Bool) 268435452)) ? (((/* implicit */int) (signed char)121)) : (268435454))))) < (((/* implicit */int) ((_Bool) arr_22 [i_6] [i_6])))));
    }
    for (signed char i_7 = 2; i_7 < 13; i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */unsigned int) 268435454)) : (2060574481U)));
        var_22 -= ((/* implicit */int) -7293788465134934576LL);
    }
    for (signed char i_8 = 2; i_8 < 13; i_8 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
        arr_34 [i_8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1293126750)), (18441403468889766290ULL)));
        arr_35 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */int) arr_6 [0ULL])) : (((/* implicit */int) arr_32 [i_8 - 1]))))) ? (((/* implicit */int) ((_Bool) arr_9 [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */int) arr_17 [i_8])))) - (((/* implicit */int) ((signed char) arr_12 [i_8])))));
        var_24 += ((/* implicit */short) (((+(((/* implicit */int) ((signed char) 1456936665U))))) != (arr_4 [i_8])));
    }
    var_25 |= ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned long long int) (~(1606429702U)))), (((((/* implicit */_Bool) 14679693278215077984ULL)) ? (((/* implicit */unsigned long long int) 2060574482U)) : (9201822260046263884ULL))))));
    var_26 = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */unsigned long long int) 692839759U)) + (var_3))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1293126750))))))));
}
