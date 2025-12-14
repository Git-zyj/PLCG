/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108985
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_0 [i_0]) + (9223372036854775807LL))) << (((((arr_0 [i_0]) + (5065896085674342532LL))) - (29LL)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) arr_0 [i_0])) ^ (var_6)))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (5605019151350396828ULL))) & (max((((/* implicit */unsigned long long int) -5379353419826480318LL)), (arr_2 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */long long int) (~(((arr_6 [i_1]) | (arr_6 [i_1])))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((/* implicit */int) arr_5 [i_1])), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_0)))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_5 [i_1])))))))));
        var_16 += ((/* implicit */short) (~(((/* implicit */int) (((~(5379353419826480304LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) arr_7 [i_2]);
        arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2]))))) << (((arr_6 [i_2]) - (9119406036168794205ULL)))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [18ULL] [i_2])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_2] [i_2])), (var_9)))) : (((3818013595512734803ULL) + (9079256848778919936ULL)))));
        arr_14 [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> (((/* implicit */int) var_8))));
    }
    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((var_7) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_3])) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_10 [i_3] [i_3])))))));
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned char) arr_10 [i_3] [6ULL]);
        arr_20 [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2762)) ^ (1729144827)))) || (((/* implicit */_Bool) (-(var_0)))))));
        /* LoopSeq 2 */
        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
        {
            arr_24 [i_3] = ((/* implicit */unsigned char) ((((int) var_8)) - (((/* implicit */int) (unsigned char)233))));
            var_20 -= ((/* implicit */signed char) arr_22 [i_4]);
            var_21 *= ((/* implicit */unsigned char) var_2);
        }
        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            var_22 = arr_21 [i_5 - 1] [i_3];
            var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_12 [i_3] [i_3]), ((unsigned char)34)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128)))) : (((((/* implicit */int) (unsigned char)117)) * (((/* implicit */int) arr_10 [i_3] [i_5 + 1]))))));
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                var_24 ^= ((/* implicit */unsigned char) var_13);
                arr_29 [i_3] [i_3] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)115)) : (1729144818)))), (((((/* implicit */_Bool) (unsigned short)65011)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6426))) : (5438526673022232520ULL)))))));
            }
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) var_6))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_7] [i_5 - 1])) ? (-3335445513116401610LL) : (4883633157831541023LL)));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_12 [i_3] [i_5 + 1]))));
                    arr_35 [i_3] [i_5] [i_5] [i_7] [i_7] [10ULL] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_8])))) && (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))))));
                }
                for (unsigned char i_9 = 3; i_9 < 20; i_9 += 3) /* same iter space */
                {
                    arr_38 [i_3] [i_5] [(unsigned char)6] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_9)))) ? (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) var_9)) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)235)) || (((/* implicit */_Bool) (unsigned char)56)))))))) & (((/* implicit */unsigned long long int) min((((9024549818613228544LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))))), (((/* implicit */long long int) ((-5523195223467415054LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 370158455)) ? (14190674983846236336ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1801480404))))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_9 - 2]))))) : (max((15576027681108816135ULL), (((/* implicit */unsigned long long int) (unsigned char)128)))));
                }
                for (unsigned char i_10 = 3; i_10 < 20; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        arr_44 [i_3] [i_3] [i_5 + 1] [i_7] [i_10 + 1] [i_3] [i_11] = ((/* implicit */_Bool) arr_18 [i_7]);
                        var_29 += var_7;
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_48 [i_3] [i_3] [i_7] [i_10 - 2] [i_12] = var_0;
                        var_30 = min((((/* implicit */unsigned long long int) var_8)), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_13))) >> (((((/* implicit */int) var_2)) << (((/* implicit */int) arr_15 [i_7] [i_10])))))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 2) 
                    {
                        arr_52 [i_5] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)59644))));
                        var_31 |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)115))))))) ? (((((/* implicit */int) arr_26 [i_10 - 2] [i_5 + 1] [i_13 + 1])) >> ((((-(((/* implicit */int) arr_31 [i_3] [i_3] [i_3])))) + (140))))) : (min((((12288) % (((/* implicit */int) arr_9 [i_5] [i_7])))), (((/* implicit */int) arr_28 [i_5 + 2] [i_5 + 2] [i_7]))))));
                    }
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17806)) + (((/* implicit */int) (unsigned short)17795)))))));
                    arr_53 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_10 - 1])) ? (((/* implicit */int) arr_22 [i_10 - 3])) : (((/* implicit */int) arr_22 [i_10 - 3]))))) ? (12161582805945802569ULL) : (((((/* implicit */_Bool) arr_22 [i_10 - 2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10 - 3])))))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(var_9)))))) ? (min((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)64)))), (((/* implicit */int) (signed char)-115)))) : (((((((/* implicit */int) var_11)) != (((/* implicit */int) arr_25 [i_7] [i_5] [i_3])))) ? (((/* implicit */int) min((arr_34 [i_3] [i_7] [(short)15] [i_3]), (((/* implicit */unsigned char) var_2))))) : (((/* implicit */int) arr_5 [i_5]))))));
                }
            }
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 3) 
            {
                arr_56 [19LL] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_6))) << (max((-4883633157831541023LL), (((/* implicit */long long int) (unsigned char)13)))))), (((/* implicit */unsigned long long int) 1729144832))));
                arr_57 [i_3] [i_3] = ((/* implicit */int) max(((signed char)122), ((signed char)(-127 - 1))));
                arr_58 [(unsigned char)2] = var_5;
                arr_59 [i_3] [i_5] [i_14] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_3] [i_3]))) | (arr_6 [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_28 [i_3] [i_5] [(signed char)1])) != (((/* implicit */int) (unsigned char)252))))) ^ (((/* implicit */int) max((((/* implicit */short) (unsigned char)202)), ((short)5955)))))))));
            }
        }
    }
    var_34 = ((/* implicit */short) ((signed char) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)24)))))));
}
