/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109397
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
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_2 [21U] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)57553)) : (var_1))), (((/* implicit */int) min(((signed char)52), (((/* implicit */signed char) arr_1 [i_0 - 1] [i_0 - 1])))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (((!(arr_1 [i_0] [i_0 + 2]))) ? ((~((+(((/* implicit */int) (unsigned short)57553)))))) : (max((((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) != (((/* implicit */int) arr_1 [16ULL] [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)43))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_1] [i_1])))) % (((/* implicit */int) ((signed char) arr_6 [i_1 - 1] [2LL])))));
        var_18 = ((/* implicit */signed char) ((arr_6 [i_1 - 1] [i_1 - 1]) ? (((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) arr_5 [0LL] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) var_0))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) arr_0 [i_1 - 1] [i_1 - 1]);
    }
    for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        arr_10 [7LL] = ((/* implicit */int) (((((!(((/* implicit */_Bool) arr_9 [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (signed char)-70)) : (var_1)))))) || (((((/* implicit */long long int) 867612599)) != (max((((/* implicit */long long int) (unsigned char)137)), (arr_9 [17LL])))))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) min((arr_9 [i_2]), (((/* implicit */long long int) (_Bool)1))))));
        var_19 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_16)) ? (arr_9 [i_2]) : (((/* implicit */long long int) arr_8 [i_2 - 2])))) | (((/* implicit */long long int) ((arr_8 [i_2]) ^ (((/* implicit */unsigned int) -1432469565))))))) ^ (((/* implicit */long long int) (~(-867612615))))));
        arr_12 [i_2] = ((/* implicit */signed char) arr_8 [i_2]);
    }
    var_20 = ((/* implicit */signed char) ((max((((/* implicit */long long int) var_7)), (min((var_6), (((/* implicit */long long int) 3131627867U)))))) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}
