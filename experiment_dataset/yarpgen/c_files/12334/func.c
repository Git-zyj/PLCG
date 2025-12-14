/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12334
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
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252))))) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)151)) || (((/* implicit */_Bool) var_0))))))) ? (((((/* implicit */int) var_16)) / (var_0))) : (((/* implicit */int) (unsigned short)46076))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) var_3);
                    arr_8 [i_0] [(signed char)12] [i_0] = ((/* implicit */signed char) ((unsigned char) 134209536));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        var_20 += ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_2])), (((((/* implicit */_Bool) (unsigned char)115)) ? (17237006983632027610ULL) : (((/* implicit */unsigned long long int) arr_5 [i_3] [i_2] [i_1] [i_0])))))), (((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_3]) != (((/* implicit */int) (unsigned char)138)))))));
                        var_21 = min((((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0] [i_1])), (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_2 [i_0] [i_0] [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1] [i_3 + 1]))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            var_22 += ((/* implicit */_Bool) (unsigned char)124);
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [5LL])) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_2] [i_2]))))) + (((/* implicit */int) (signed char)23))));
                            var_24 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4084996039U)))) + (min((arr_3 [i_3 + 2] [i_0] [i_0 - 2]), (arr_12 [i_1 + 1])))))) ? ((((+(-5518935963750144253LL))) + (arr_3 [i_1] [i_0] [i_3]))) : (max((((/* implicit */long long int) 3735144693U)), ((~(3748551203781636616LL)))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4084996039U)))) + (min((arr_3 [i_3 + 2] [i_0] [i_0 - 2]), (arr_12 [i_1 + 1])))))) ? ((((+(-5518935963750144253LL))) - (arr_3 [i_1] [i_0] [i_3]))) : (max((((/* implicit */long long int) 3735144693U)), ((~(3748551203781636616LL))))))));
                        }
                        for (short i_5 = 2; i_5 < 19; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((min(((short)-20832), (arr_11 [i_0] [i_1 - 1] [12LL] [i_3] [i_3] [i_5]))), (arr_15 [i_0] [i_1 + 1] [i_1])))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32757)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), (((long long int) (unsigned char)105))))));
                            var_26 -= ((/* implicit */short) max(((+((~(((/* implicit */int) (_Bool)0)))))), (188594984)));
                            arr_17 [i_0 - 2] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_0])) ? (((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) -1808977389)) ? (var_8) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))))) : (((/* implicit */unsigned int) (+(((int) arr_11 [i_0] [i_1 + 1] [i_2] [9ULL] [i_5 + 2] [i_0 - 1])))))));
                            arr_18 [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_14)), ((((!(((/* implicit */_Bool) 3735144693U)))) ? (2816827147U) : (((/* implicit */unsigned int) ((/* implicit */int) ((-2LL) < (((/* implicit */long long int) 4294967292U))))))))));
                        }
                    }
                    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        var_27 ^= ((/* implicit */signed char) ((max((((/* implicit */long long int) var_4)), (-8557823307728955674LL))) == (((((/* implicit */_Bool) ((7477477489777363576ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40812)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (((7004569095149088988LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207)))))))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) min((((/* implicit */int) (unsigned short)28344)), (arr_10 [i_0] [i_0 - 1]))))) == (((((/* implicit */_Bool) 5472435765892697556ULL)) ? (((int) arr_13 [i_0 - 1] [i_1] [i_2] [i_2] [(unsigned char)0])) : ((+(((/* implicit */int) (unsigned char)151)))))))))));
                        var_29 |= ((/* implicit */_Bool) (((+(((int) (unsigned char)30)))) + (((/* implicit */int) (_Bool)1))));
                        var_30 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)0] [i_1 + 1])) ? (arr_2 [i_0] [(unsigned char)14] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20)))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_31 = (((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 3])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_16))))) : (19LL));
                        var_32 = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)190)));
                        var_33 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (signed char)9))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) arr_14 [8] [i_1] [i_2] [i_2] [i_7])) : (((/* implicit */int) (unsigned short)49474)))))))) * (((/* implicit */int) arr_7 [i_0 - 2] [i_1 - 1] [i_2]))));
                    }
                    var_34 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)1)) <= (((/* implicit */int) (short)2260))));
                    var_35 += ((/* implicit */unsigned char) min((((/* implicit */int) ((short) ((12030611U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [(short)5] [i_2] [i_2]))))))), (((((-90151222) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0 - 2] [0ULL])) - (113)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_36 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49483))) : (4202884331U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29029))))) - (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8])))))));
        var_37 = ((/* implicit */unsigned char) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (short)14336)) ? ((+(((/* implicit */int) (short)-20177)))) : (((/* implicit */int) (short)0))))));
        arr_28 [i_8] = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_21 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]), (((/* implicit */long long int) var_1))))) || (((/* implicit */_Bool) (signed char)95))));
        var_39 ^= ((/* implicit */short) ((max((arr_3 [i_8] [(_Bool)1] [i_8 - 1]), (arr_3 [i_8] [(short)0] [i_8 - 1]))) % (((/* implicit */long long int) ((unsigned int) arr_0 [i_8 - 1] [16U])))));
    }
    var_40 = ((/* implicit */_Bool) (-(max((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), (((var_4) ? (4573906096712568046LL) : (-17LL)))))));
}
