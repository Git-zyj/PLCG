/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185759
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
    var_19 = ((/* implicit */signed char) max(((~(((unsigned long long int) 0)))), (((/* implicit */unsigned long long int) var_0))));
    var_20 = ((/* implicit */short) (+(max((min((var_6), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((_Bool) var_11)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = (short)(-32767 - 1);
        var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [(unsigned short)17])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) >= (max((-4994517025248385843LL), (((/* implicit */long long int) (short)(-32767 - 1))))))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_22 = ((((/* implicit */_Bool) ((unsigned char) (-(arr_5 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((arr_4 [(short)13] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (arr_5 [i_1]))) : (arr_5 [i_1]))));
        var_23 ^= ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) arr_5 [(short)10])) ? (((/* implicit */unsigned long long int) 0LL)) : (arr_4 [(short)10] [i_1])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_12 [i_2] = ((/* implicit */_Bool) ((unsigned long long int) ((arr_8 [i_2] [i_2]) ? (arr_9 [i_2] [i_3] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_3 - 1] [16] [8LL] [i_2 - 1]))))));
                        var_24 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) arr_4 [(_Bool)1] [i_1])));
                        arr_13 [i_1] [(unsigned short)19] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_7 [3LL] [i_3 - 1]) ? (8796093022208ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_3 + 1] [(signed char)0]))))) - (min((arr_5 [i_2]), (((/* implicit */unsigned long long int) (unsigned char)95))))))) ? ((~(((/* implicit */int) arr_8 [i_3] [i_2])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11098))) >= (-4994517025248385843LL))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        arr_17 [i_5] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)34287))));
        arr_18 [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [18LL] [i_5] [i_5])) || (((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])))))));
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_16 [i_5]))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_11 [i_5] [i_5] [22] [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5] [(short)10] [i_5]))))) : ((+(((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [8ULL] [i_5] [i_5]))))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((short) min((arr_5 [i_5]), (arr_5 [i_5]))));
    }
    for (signed char i_6 = 3; i_6 < 11; i_6 += 1) 
    {
        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_6 - 3])))))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_2 [i_6]))) ? (((8757321565727811524ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))))) ? (((((/* implicit */_Bool) (~(3623559729159829054ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6 + 1] [i_6 - 2] [i_6 + 1]))) : (max((0ULL), (((/* implicit */unsigned long long int) arr_8 [10ULL] [10ULL])))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)61759)))) ? (((/* implicit */int) ((arr_0 [i_6 + 2] [i_6]) && (((/* implicit */_Bool) arr_14 [i_6]))))) : (((/* implicit */int) arr_11 [i_6] [i_6] [i_6 - 2] [i_6] [i_6 - 1] [(signed char)20])))))));
        var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_6] [i_6 + 1] [i_6] [i_6 - 2] [i_6 + 1] [i_6]))))) ? (((/* implicit */unsigned long long int) (+(7103450603631551776LL)))) : (((((/* implicit */_Bool) arr_5 [i_6])) ? (((arr_4 [i_6 - 3] [i_6]) ^ (arr_15 [i_6]))) : (max((arr_5 [i_6]), (((/* implicit */unsigned long long int) arr_6 [i_6] [(signed char)14] [8LL]))))))));
        var_30 &= ((/* implicit */unsigned char) ((int) ((unsigned short) arr_11 [i_6 + 2] [i_6] [i_6] [i_6 + 2] [i_6] [i_6])));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        var_31 ^= ((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_7]);
        var_32 = arr_15 [i_7];
        /* LoopNest 2 */
        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        arr_34 [i_8] [i_7] [i_7] [i_7] [i_8] = ((/* implicit */short) ((_Bool) arr_32 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_7]));
                        arr_35 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_8 - 1] [i_8]))));
                        var_33 = (((+((-2147483647 - 1)))) == ((~(((/* implicit */int) (signed char)1)))));
                        arr_36 [i_7] [i_7] [i_9] [i_10] [i_8] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_8 + 1]))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_7 [16ULL] [i_10])) : (((/* implicit */int) (unsigned short)28672))))))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) (~(((/* implicit */int) (short)(-32767 - 1)))));
                        var_36 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [i_7]))));
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            var_37 = ((/* implicit */signed char) ((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_7] [i_12] [i_7] [1ULL] [i_12] [(short)7]))) : (((((/* implicit */_Bool) (short)28255)) ? (18446744073709551603ULL) : (3623559729159829054ULL)))));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_32 [i_7] [i_8 + 1] [i_9] [i_11] [i_12])))) ? ((+(((/* implicit */int) arr_28 [i_12] [(_Bool)1] [i_8] [i_8])))) : (((/* implicit */int) arr_26 [i_8 - 1] [i_8]))));
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_4 [i_7] [i_7])))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)32767)))))));
                        }
                        var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-32767))));
                        var_41 ^= ((/* implicit */short) (-(((/* implicit */int) arr_37 [i_7] [i_11 + 2] [i_8 - 1] [4ULL]))));
                    }
                    for (signed char i_13 = 1; i_13 < 11; i_13 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-32761)) ? (arr_15 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_7])))))));
                        arr_44 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_13 + 3])) ? (((/* implicit */int) arr_39 [i_13] [i_13] [(short)2] [i_13 + 3] [(short)7])) : (((/* implicit */int) arr_39 [(unsigned char)12] [i_9] [(unsigned char)9] [i_13 - 1] [i_13]))));
                    }
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_7] [i_7] [i_8] [i_7])) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) arr_0 [i_7] [i_8]))))) + (arr_40 [i_8] [i_9])));
                }
            } 
        } 
    }
}
