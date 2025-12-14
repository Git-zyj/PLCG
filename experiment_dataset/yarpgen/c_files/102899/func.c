/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102899
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
    var_13 = ((/* implicit */long long int) (_Bool)1);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) max(((+(((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((short) arr_0 [i_0])))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (-1145712994) : (((/* implicit */int) (signed char)48))))))))));
        var_16 = ((/* implicit */long long int) (-(((arr_2 [i_0]) - (((var_5) ^ (((/* implicit */int) (unsigned char)232))))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((arr_0 [(unsigned char)17]) ? (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))) << (((((/* implicit */int) (unsigned short)43666)) - (43665)))))) : (((max((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_4))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (2743085529U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            arr_11 [3U] = ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_10 [i_1])));
            arr_12 [i_1] [i_2] [i_2] &= ((/* implicit */long long int) ((int) arr_4 [i_1] [i_2]));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1])) ^ (arr_7 [i_1]))))));
        }
        for (int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_3] = ((/* implicit */unsigned int) max((((4667970932825212595ULL) % (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))), (((/* implicit */unsigned long long int) min((arr_1 [i_3] [i_1]), (arr_1 [i_1] [i_3]))))));
            var_19 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)32232)), (18446744073709551615ULL)));
            var_20 = ((/* implicit */unsigned short) arr_1 [i_1] [i_3]);
        }
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_5 [(short)8]))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))))))));
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
    {
        arr_19 [i_4] &= ((/* implicit */unsigned short) -578502020);
        arr_20 [i_4] = ((/* implicit */unsigned int) arr_18 [i_4]);
        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_4] [6LL])) || (((/* implicit */_Bool) arr_17 [i_4])))) ? ((~(max((arr_1 [(signed char)6] [(signed char)6]), (((/* implicit */long long int) (unsigned char)0)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-1))))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
    {
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (unsigned short)496)) : (19705891)))) ? (((/* implicit */long long int) 2111838098)) : (max((((/* implicit */long long int) (_Bool)0)), (3236098998514893324LL)))))) ? (arr_23 [i_5]) : (((/* implicit */int) (unsigned short)56477)));
        var_25 = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((arr_16 [(_Bool)1] [i_5]) != (2415866504U))))))));
        var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_22 [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_1 [i_5] [i_5]))))) ? (((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */unsigned int) var_5)) : (arr_21 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5])))))) ? (max((((((/* implicit */_Bool) (short)10054)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91))) : (2352748539863791967ULL))), (((/* implicit */unsigned long long int) (-(var_7)))))) : (((/* implicit */unsigned long long int) max((((long long int) var_2)), (((/* implicit */long long int) (signed char)-16)))))));
        var_27 &= ((/* implicit */long long int) arr_3 [i_5] [i_5]);
        arr_24 [10LL] = ((/* implicit */unsigned long long int) ((((arr_22 [i_5] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) ((arr_21 [i_5]) > (((/* implicit */unsigned int) arr_23 [3]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3917))))))))));
    }
}
