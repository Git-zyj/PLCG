/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125344
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((-2050099456) + (((/* implicit */int) var_9)))) + (((((/* implicit */int) var_9)) + (((/* implicit */int) var_0))))))) % (((max((var_3), (((/* implicit */unsigned int) (signed char)12)))) + (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52728)) & (((/* implicit */int) var_9)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        var_11 ^= ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_0 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) + (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 4])) > (((/* implicit */int) (short)-30323)))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (2961923573U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) >> (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (-1177553478))))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13668))) : (2582922053027639338LL)))) ? (((/* implicit */int) max((var_1), (((/* implicit */short) (signed char)56))))) : ((~(((/* implicit */int) arr_1 [i_0]))))))) & (((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (unsigned short)9499))))) : (((((var_4) + (9223372036854775807LL))) << (((((((/* implicit */int) var_1)) + (8238))) - (6)))))))));
    }
    for (short i_1 = 4; i_1 < 9; i_1 += 4) 
    {
        var_12 -= ((/* implicit */int) ((((((((/* implicit */_Bool) (short)28356)) ? (arr_4 [i_1]) : (var_4))) & (((((/* implicit */_Bool) -10LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_0 [i_1] [4]))))) != (min((((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) -529202663)) ? (arr_0 [i_1 - 4] [i_1 - 4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-17)))))))));
        var_13 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((12420121592183585090ULL) == (((/* implicit */unsigned long long int) arr_3 [i_1]))))), (((arr_3 [i_1]) / (((/* implicit */unsigned int) 1269298988)))))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [7]))))) ? (((((/* implicit */_Bool) 1261572845U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))))));
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_10 [i_3] [i_2 + 1] [i_1] = ((/* implicit */short) ((max((((/* implicit */long long int) ((20LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-59)))))), (max((var_2), (var_7))))) != (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (var_3))))) - (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-70)))))))));
                    arr_11 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) ((-1) <= (((/* implicit */int) ((((/* implicit */int) ((9007199254740991LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59645)))))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-9223372036854775805LL)))))))));
                }
            } 
        } 
        arr_12 [i_1 + 1] = (((-(((((/* implicit */_Bool) 313327807851046445ULL)) ? (10681737781198880029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) >> (((((min((arr_0 [(signed char)17] [i_1]), (((/* implicit */long long int) arr_5 [i_1])))) ^ (((((/* implicit */_Bool) (signed char)82)) ? (8288105792564743695LL) : (-4010218916622654150LL))))) - (8288105792564745061LL))));
    }
}
