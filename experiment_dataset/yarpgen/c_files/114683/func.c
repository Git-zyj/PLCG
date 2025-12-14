/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114683
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((long long int) (unsigned char)166))) ? (((/* implicit */int) (short)668)) : (((/* implicit */int) (short)24328)))) : (((/* implicit */int) (short)-24334))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) arr_1 [i_0 + 1]);
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_0 + 1]));
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((min((9189703436096230410ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-651))) % (1732437702584304217ULL))))) << ((((~(((/* implicit */int) (!(((/* implicit */_Bool) 13120171739370212506ULL))))))) + (37)))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (long long int i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_22 [(signed char)10] [(signed char)10] [(signed char)10] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_4 - 2] [i_3] [i_3] [i_3] [i_3] [i_3] [(unsigned short)9])) >= ((-(((/* implicit */int) var_4))))));
                            var_21 = ((/* implicit */_Bool) (short)26975);
                            arr_23 [(signed char)0] [(signed char)0] [(unsigned char)22] [i_4] [i_4 - 1] [i_5] [i_5] = ((/* implicit */signed char) (short)-6566);
                        }
                        for (signed char i_6 = 3; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (((~(arr_26 [i_1] [i_1] [i_3] [i_4 + 1] [i_6]))) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-26975)), (4058676142U)))))))));
                            arr_27 [(unsigned char)22] [i_6] [i_6] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])) * (15176791611501610978ULL)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_20 [i_1] [i_3] [(_Bool)1] [i_4] [i_3] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)27003))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) min((arr_19 [i_1] [i_2]), (arr_19 [i_4] [i_4]))))))) : (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-25811)) + (2147483647))) >> (((((/* implicit */int) (short)-664)) + (668)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_1] [0ULL] [i_1] [(signed char)5] [i_4 - 2] [0ULL])))))) : (max((1732437702584304214ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 3; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            arr_32 [i_7] = ((/* implicit */long long int) var_4);
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_7])) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12415)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (13120171739370212506ULL))))))));
                            arr_33 [i_3] [i_7] = ((unsigned long long int) arr_10 [i_4 - 2] [i_7 - 2] [i_7 - 1]);
                            arr_34 [i_2] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [i_7 + 1]))));
                        }
                        arr_35 [i_1] [i_2] [i_2] [(_Bool)1] [(signed char)6] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_19 [i_2] [i_3])) >= (((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_4 - 1] [i_1])))))));
                    }
                } 
            } 
        } 
        arr_36 [i_1] = ((/* implicit */unsigned long long int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1]);
        var_24 = ((/* implicit */int) min((min((((1732437702584304220ULL) << (((arr_9 [i_1] [i_1]) + (6314425834415467430LL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1]))));
        arr_37 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)140))))) - (max((var_13), (((/* implicit */unsigned long long int) var_11))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) ((short) (short)32352))))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
    {
        arr_40 [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_8] [i_8])) ? (((/* implicit */int) (short)-665)) : (((/* implicit */int) var_1)))) < ((~(((/* implicit */int) (short)657))))));
        arr_41 [(signed char)7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [16ULL] [16ULL] [i_8] [16ULL] [i_8]))))) ? (((/* implicit */int) arr_19 [i_8] [i_8])) : (((/* implicit */int) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]))));
        arr_42 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (signed char)-102))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_10)), (arr_44 [i_9])))))) ? ((~(((/* implicit */int) ((5326572334339339103ULL) >= (((/* implicit */unsigned long long int) arr_9 [i_9] [i_9]))))))) : (((((/* implicit */int) (short)27743)) ^ (((/* implicit */int) (unsigned char)181))))));
        var_26 = ((/* implicit */unsigned long long int) arr_12 [13LL] [i_9] [i_9]);
        arr_45 [i_9] = ((/* implicit */unsigned int) max(((short)26975), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) (unsigned short)52908)), (12703072551944460227ULL))) <= (((/* implicit */unsigned long long int) ((long long int) arr_26 [i_9] [i_9] [i_9] [i_9] [i_9]))))))));
        arr_46 [i_9] = ((/* implicit */unsigned char) ((((var_2) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1))))))) ? ((~(((/* implicit */int) min((arr_28 [i_9] [(short)16] [i_9] [i_9]), (arr_17 [i_9] [i_9] [i_9] [i_9] [i_9])))))) : (((/* implicit */int) ((((3ULL) | (12574335911800158902ULL))) <= ((~(arr_25 [i_9] [(unsigned short)3] [i_9] [i_9] [i_9] [i_9]))))))));
        arr_47 [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) min((var_16), (((/* implicit */unsigned long long int) var_1))))))));
    }
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */short) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (min((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26987))))), (((((/* implicit */_Bool) (unsigned short)12633)) ? (((/* implicit */unsigned long long int) var_11)) : (var_16)))))));
    var_28 = ((/* implicit */unsigned char) var_1);
}
