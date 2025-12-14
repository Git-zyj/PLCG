/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16211
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned long long int) var_2))));
        var_10 = ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) : (var_8));
        arr_4 [i_0] = (signed char)31;
    }
    for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) var_8);
        var_11 ^= ((/* implicit */signed char) var_4);
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            var_12 = ((/* implicit */signed char) min((arr_12 [i_1 - 1]), ((~(arr_6 [i_1] [i_2 + 1])))));
            arr_13 [i_1] [i_1] [i_2 + 2] = (i_1 % 2 == 0) ? (((((15903827569149628627ULL) >> (((arr_6 [i_1] [i_2 - 1]) - (12998252604278521920ULL))))) << (((min((arr_11 [i_1] [i_2 + 2] [i_1 - 3]), (((/* implicit */unsigned long long int) var_3)))) - (53ULL))))) : (((((15903827569149628627ULL) >> (((((arr_6 [i_1] [i_2 - 1]) - (12998252604278521920ULL))) - (14701195337016832686ULL))))) << (((min((arr_11 [i_1] [i_2 + 2] [i_1 - 3]), (((/* implicit */unsigned long long int) var_3)))) - (53ULL)))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            arr_18 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_16 [i_1 + 3] [12ULL] [i_1])), (arr_7 [i_1 + 3] [i_1 + 3]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))))))));
            arr_19 [i_1] = ((/* implicit */signed char) arr_12 [i_1 + 2]);
            arr_20 [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2]))) : (var_1)))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
        {
            arr_23 [i_1] [i_1] = ((/* implicit */signed char) ((arr_11 [i_1 + 1] [i_1 + 1] [i_1 + 1]) >> ((+(((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (signed char)-59)))))))));
            arr_24 [i_1] [3ULL] = (-(min((((/* implicit */unsigned long long int) var_0)), (max((var_6), (((/* implicit */unsigned long long int) arr_15 [i_1])))))));
            arr_25 [i_1] [i_1] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_14 [i_1 + 3] [(signed char)12])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))))) ? (((unsigned long long int) max((((/* implicit */unsigned long long int) arr_5 [i_1 + 1])), (15473304614906098902ULL)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))) : (min((var_5), (((/* implicit */unsigned long long int) arr_10 [i_1])))))));
            arr_26 [i_4] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2888314878065425514ULL), (arr_6 [i_4] [(signed char)0])))) ? (((((/* implicit */_Bool) (signed char)-20)) ? (17673940921916407193ULL) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_4] [i_4])))))) ? (arr_6 [i_4] [i_4]) : (arr_9 [i_4]));
        }
        arr_27 [i_1] [i_1] = ((((/* implicit */_Bool) (~(((((/* implicit */int) var_3)) << (((var_5) - (11715279494384528920ULL)))))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1]))) : (arr_17 [(signed char)12] [i_1] [i_1 - 3]))) : (arr_12 [i_1]));
    }
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((var_6) / (((((/* implicit */_Bool) var_5)) ? (var_5) : (var_4))))), (((/* implicit */unsigned long long int) (signed char)-3)))))));
    var_14 = max((min((((/* implicit */unsigned long long int) ((var_1) < (var_9)))), (var_7))), (((((/* implicit */_Bool) var_2)) ? (var_5) : (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))))))));
}
