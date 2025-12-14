/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168214
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
    var_19 += ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (short)26278)), (((((/* implicit */_Bool) var_4)) ? (var_8) : (var_9))))), (((/* implicit */long long int) (unsigned short)12))));
    var_20 &= ((/* implicit */_Bool) var_3);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [12U])) ? (((/* implicit */int) (unsigned short)42160)) : (((/* implicit */int) (unsigned short)65533))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)173))))) : (((unsigned long long int) arr_0 [i_0] [i_0 + 1]))))));
        var_22 &= ((/* implicit */unsigned char) ((long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (6582847U) : (arr_0 [i_0] [i_0 - 1])))));
        var_23 = ((/* implicit */signed char) ((min((((unsigned int) var_1)), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1837))) < (arr_0 [i_0] [i_0])))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
        var_24 *= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_1 [i_0])) : ((-2147483647 - 1)))) & (((/* implicit */int) var_17)))), (((/* implicit */int) arr_1 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 19; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)48706)))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_4 = 2; i_4 < 21; i_4 += 3) /* same iter space */
                {
                    arr_13 [i_1] [i_1 + 3] [i_1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */int) ((unsigned short) (_Bool)0));
                    var_26 ^= ((/* implicit */_Bool) var_18);
                }
                for (short i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
                {
                    arr_18 [i_1 + 1] [i_2] [i_2] [i_5] [i_2] [i_5] = arr_17 [i_5] [i_5 - 2];
                    var_27 = ((/* implicit */_Bool) (((~(2209529942U))) << (((/* implicit */int) ((_Bool) arr_9 [i_2] [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                }
                /* LoopSeq 1 */
                for (signed char i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        arr_23 [i_1 + 1] [i_1 + 3] [i_1] [i_6] [i_1] [(unsigned char)10] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) min((var_14), (((/* implicit */unsigned int) (_Bool)0))))) : (max((((/* implicit */long long int) (_Bool)1)), (-4471687689007443311LL))))));
                        arr_24 [i_6] [i_6 + 1] [i_3] [i_6] [i_7] [i_7] = ((/* implicit */short) arr_21 [i_7] [i_6] [i_3] [i_6] [i_1 - 1]);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_1] [i_2] [i_6] = ((/* implicit */long long int) ((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) << (((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) + (((unsigned int) (short)26850)))) - (26814U)))));
                        var_28 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) (signed char)-8)) : (min((((/* implicit */int) ((unsigned short) 2162034260U))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_17))))))));
                        var_29 &= ((/* implicit */unsigned int) ((unsigned short) ((((arr_2 [i_8] [i_2]) & (((/* implicit */int) (unsigned short)44374)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42160))))))));
                        arr_28 [i_1 + 3] [7ULL] [i_6] [i_6 + 1] [i_6] [i_8] = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)47))) / (-6139469239747184852LL))) * (((/* implicit */long long int) ((/* implicit */int) max(((short)17812), (((/* implicit */short) (signed char)-55)))))))));
                        var_30 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -7634641651778395069LL)))) ? ((~(min((var_14), (((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_6 + 1] [i_6 - 1])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_8)))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned short)47807)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */int) arr_11 [i_3])) ^ (((/* implicit */int) arr_14 [i_6] [i_6] [i_6 - 1] [i_3] [i_2] [i_6])))))))));
                    }
                    for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        var_31 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((-(arr_29 [i_2] [i_2]))), (max((var_6), (((/* implicit */unsigned long long int) 2077643701U)))))))));
                        arr_31 [i_2] [i_6] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -3980919820548059330LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)59093))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_9)))))));
                        var_32 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)56));
                    }
                    var_33 &= ((/* implicit */signed char) ((int) var_13));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        var_34 = ((/* implicit */signed char) ((unsigned int) (unsigned char)0));
                        var_35 &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned long long int) -7352057050125484084LL))) ? (((/* implicit */int) arr_11 [i_1])) : (((arr_2 [i_1 + 2] [i_10]) % (((/* implicit */int) arr_5 [i_3] [i_1]))))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) max((arr_29 [i_11] [i_11]), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_1 + 1] [i_3])))));
                        var_37 |= ((/* implicit */short) (signed char)-124);
                        var_38 = ((unsigned short) min(((+(((/* implicit */int) (unsigned short)48135)))), (((((/* implicit */_Bool) (short)31194)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)48135))))));
                    }
                    for (unsigned int i_12 = 3; i_12 < 20; i_12 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned short) (_Bool)1);
                        arr_42 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)242)), ((short)32767))))))) : (min((max((arr_29 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_15 [i_1] [i_6])))), (max((arr_7 [i_1] [i_6 + 1] [i_12]), (var_11)))))));
                        var_40 += ((/* implicit */signed char) var_11);
                    }
                }
            }
            var_41 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_1 + 3] [i_1] [i_1 + 1])) == (((/* implicit */int) (_Bool)1)))) || (arr_14 [i_1] [i_1 - 1] [i_1 + 2] [i_1] [(signed char)2] [i_2])))) << ((((((~(((/* implicit */int) (unsigned char)125)))) ^ (((/* implicit */int) (signed char)-93)))) - (6)))));
        }
        for (signed char i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
        {
            var_42 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_3)) ? (1664513083) : (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) arr_12 [i_13] [i_13] [i_13] [i_13] [i_1] [i_1])) ? ((~(((/* implicit */int) arr_33 [i_1 + 3] [i_1 + 3] [i_13] [8ULL])))) : (((/* implicit */int) var_16))))));
            var_43 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) ((var_8) == (-6132548038987797686LL))))))));
        }
        for (signed char i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
        {
            arr_49 [i_14] [8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_17 [i_14] [i_1 + 2]), (arr_17 [i_14] [i_1 + 2]))))));
            /* LoopSeq 1 */
            for (short i_15 = 2; i_15 < 20; i_15 += 1) 
            {
                var_44 = (i_15 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_7))) >> (((min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [9LL] [i_15] [i_14] [i_14] [i_15]))) : (var_1))), (((/* implicit */long long int) ((unsigned short) var_17))))) - (60LL)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_7))) >> (((((min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [9LL] [i_15] [i_14] [i_14] [i_15]))) : (var_1))), (((/* implicit */long long int) ((unsigned short) var_17))))) - (60LL))) - (107LL))))));
                var_45 = ((/* implicit */unsigned short) max((var_45), (arr_25 [i_1] [i_14] [i_14] [i_15 - 1] [i_15 - 1] [i_1])));
            }
        }
        arr_53 [i_1] [(unsigned char)11] = max((((arr_0 [i_1 + 3] [15]) << (((arr_0 [i_1 + 1] [i_1]) - (1694416849U))))), (((arr_0 [i_1 + 2] [i_1]) & (arr_0 [i_1 + 3] [i_1]))));
        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10896)) / (((((/* implicit */int) var_3)) / (((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_1] [(unsigned char)10]))))))) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) arr_25 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 2]))));
        arr_54 [i_1] [i_1 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [0ULL] [i_1])) ? (((/* implicit */int) ((unsigned short) (-(6162752438902867141ULL))))) : (((((/* implicit */int) arr_22 [18LL] [i_1] [i_1] [i_1] [i_1 - 1])) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (var_11))) - (7980ULL)))))));
        var_47 = ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1 + 1]))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_1 + 3] [i_1] [i_1 + 1] [i_1] [i_1 + 3] [i_1]))) & (var_13)))));
    }
}
