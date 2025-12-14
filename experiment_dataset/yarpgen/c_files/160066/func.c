/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160066
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -442462154))))), (max((var_6), (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) (short)(-32767 - 1))));
        var_16 = ((/* implicit */unsigned int) 2901858568679644473ULL);
    }
    for (int i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) arr_5 [i_1])) / (2901858568679644493ULL)))))) != (var_15))))));
        var_18 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1])), (2901858568679644481ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (15544885505029907143ULL) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])))) > (max((15544885505029907122ULL), (((/* implicit */unsigned long long int) 3871972250U)))))))));
        var_19 = ((/* implicit */unsigned long long int) max((min((arr_5 [i_1 - 2]), (arr_5 [i_1 + 1]))), (min((arr_5 [i_1 + 1]), (arr_5 [i_1 - 1])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            var_20 += ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1 - 2] [i_2])) > (((/* implicit */int) arr_3 [i_1 + 1] [i_2]))));
            var_21 &= ((/* implicit */long long int) arr_9 [i_1 + 1] [i_2] [i_2]);
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)31744)) ? (15544885505029907142ULL) : (((/* implicit */unsigned long long int) 7006965145249775711LL))));
            /* LoopSeq 1 */
            for (int i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                var_23 = ((/* implicit */short) 24U);
                var_24 = ((/* implicit */int) 296195102U);
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                {
                    var_25 = ((long long int) var_5);
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_3 - 3])) * (((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33813))) & (var_6))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15544885505029907131ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58205))) : (35U))))));
                        var_28 = (~(arr_17 [i_1] [i_2 + 1] [i_1] [i_4] [i_5]));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) var_11))));
                    }
                    var_30 = ((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) / (arr_16 [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1] [i_1]));
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) arr_9 [i_1] [i_4] [i_1]))));
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned long long int) arr_5 [i_2 + 1])))));
                }
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */int) arr_10 [i_1 - 2]);
                    var_34 &= ((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_6]))));
                }
                for (long long int i_7 = 2; i_7 < 21; i_7 += 2) 
                {
                    arr_23 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((524287ULL) & (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 15544885505029907142ULL)) || (((/* implicit */_Bool) arr_5 [i_7])))))) : (6U)));
                    var_35 += ((/* implicit */short) (+(15544885505029907140ULL)));
                    var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) >= (15544885505029907122ULL)));
                }
            }
            arr_24 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -6506387334081503468LL)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (unsigned short)19069))))) + (4294967295U)));
        }
        for (int i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            var_37 ^= ((/* implicit */unsigned int) max((max((min((((/* implicit */long long int) var_5)), (var_11))), (((/* implicit */long long int) ((unsigned short) 15179591974574780657ULL))))), (((/* implicit */long long int) ((unsigned char) -9223372036854775801LL)))));
            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_19 [i_1 - 1] [i_8] [i_8]), (((/* implicit */long long int) var_8))))) ? (var_2) : (((/* implicit */int) ((((/* implicit */_Bool) ((-1176620122) / (((/* implicit */int) arr_9 [i_1] [i_8] [i_8]))))) || (((/* implicit */_Bool) ((int) 15544885505029907110ULL)))))))))));
        }
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            var_39 = ((/* implicit */int) var_10);
            var_40 = ((/* implicit */signed char) max((min((arr_12 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]), (var_6))), (((/* implicit */unsigned long long int) ((arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 2]) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 2])))))));
            var_41 = ((15762925462015120345ULL) * ((-(arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]))));
        }
    }
    for (unsigned int i_10 = 1; i_10 < 23; i_10 += 4) 
    {
        var_42 ^= ((/* implicit */unsigned int) (((-(((/* implicit */int) var_12)))) > (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_12)), (arr_30 [i_10]))) > (((/* implicit */unsigned long long int) (-(7006965145249775711LL)))))))));
        var_43 &= ((/* implicit */unsigned long long int) var_8);
        var_44 = ((/* implicit */long long int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (3267152099134770959ULL) : (((/* implicit */unsigned long long int) 31))))) || (((/* implicit */_Bool) arr_3 [i_10] [(signed char)22])))))));
    }
    var_45 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((-7006965145249775711LL) / (3163194011037656062LL)))), (max((8121633502939376210ULL), (((15544885505029907142ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27911)))))))));
}
