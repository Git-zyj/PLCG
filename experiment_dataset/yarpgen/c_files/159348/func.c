/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159348
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
    var_19 ^= ((/* implicit */unsigned int) var_11);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)60613)) * (((/* implicit */int) (unsigned short)4922))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(15246096209075160048ULL)))) ? ((~(var_14))) : ((~(((/* implicit */int) var_18))))))) : (((((/* implicit */_Bool) (unsigned short)4923)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (18446744073709551615ULL))))) ^ (min(((~(((/* implicit */int) (unsigned char)113)))), (var_14)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) /* same iter space */
    {
        arr_2 [9] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((4257978850U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)21463))))) : ((-(arr_1 [i_0 + 4])))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_5 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [(signed char)10]);
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [2ULL] [7U] [i_0] = ((/* implicit */short) 7U);
                            var_22 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned short)16383))))) / (((unsigned int) var_0)))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((int) (_Bool)1)) : (((/* implicit */int) (unsigned char)71)))))));
                            var_23 ^= ((/* implicit */_Bool) min(((-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)78)), ((unsigned char)211)))))), (((/* implicit */int) ((unsigned short) var_15)))));
                            var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_11)), ((+((-9223372036854775807LL - 1LL))))));
                            var_25 = ((/* implicit */short) ((unsigned short) arr_0 [i_0]));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned short) (signed char)127);
            /* LoopSeq 3 */
            for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                var_27 = ((/* implicit */short) (+(((/* implicit */int) (((!(((/* implicit */_Bool) arr_17 [(short)8] [i_1] [i_1])))) || (((/* implicit */_Bool) ((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4951)))))))))));
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((unsigned long long int) -1)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)181)) * (((/* implicit */int) (unsigned char)175))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 4; i_7 < 11; i_7 += 3) 
                {
                    for (unsigned short i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        {
                            var_30 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [3U] [i_7] [i_8 - 2])) <= (((/* implicit */int) var_0))))) % (((/* implicit */int) ((unsigned char) arr_16 [(unsigned char)6] [(unsigned short)8])))));
                            var_31 = ((/* implicit */short) arr_25 [i_0] [i_1] [i_6] [i_6] [i_7] [i_8 + 1] [i_8]);
                            arr_26 [i_0] [10LL] [i_6] [i_7] [10LL] = ((/* implicit */short) (((~(((/* implicit */int) var_8)))) < ((-(((/* implicit */int) (short)10706))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
            {
                arr_29 [i_0] [i_1] [i_1] = ((/* implicit */int) (+(max((((3200647864634391559ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                var_32 *= ((((/* implicit */int) (signed char)15)) >= (((/* implicit */int) (unsigned short)60585)));
                var_33 = ((/* implicit */signed char) ((((((/* implicit */int) ((short) 4294967289U))) <= (-683759850))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530))) & (arr_27 [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))))))) : (min((9223372036854775807LL), (((/* implicit */long long int) arr_11 [i_0])))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_0 + 4])))))));
            }
        }
        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
        {
            arr_32 [i_10] = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (unsigned short)65535)))))), (((5133174619038152558ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)42638))))) : (min((arr_14 [i_0] [i_10] [i_0 + 3]), (arr_14 [i_0] [i_0] [i_0 + 4])))));
        }
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
        {
            var_35 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_4 [i_0 + 2])))), (((((/* implicit */int) (unsigned short)24067)) << (((((/* implicit */int) (unsigned short)24067)) - (24061)))))));
            /* LoopNest 2 */
            for (int i_12 = 4; i_12 < 10; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        var_36 *= ((/* implicit */unsigned long long int) 2215067205U);
                        var_37 = ((/* implicit */short) (~(((((((/* implicit */int) (signed char)-112)) | (-1))) / (((/* implicit */int) (unsigned short)16))))));
                        var_38 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)122)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))));
                    }
                } 
            } 
        }
    }
    for (signed char i_14 = 1; i_14 < 8; i_14 += 4) /* same iter space */
    {
        arr_45 [(unsigned short)2] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)32741)))))));
        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 22ULL)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)49747)) : (((/* implicit */int) (signed char)112)))) : (((/* implicit */int) var_17))))) && (((/* implicit */_Bool) arr_28 [i_14] [i_14] [i_14])))))));
        arr_46 [i_14] = ((/* implicit */unsigned char) 18446744073709551593ULL);
    }
}
