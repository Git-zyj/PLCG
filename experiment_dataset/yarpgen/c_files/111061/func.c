/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111061
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
    var_15 = ((((_Bool) var_14)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)4])))))) > (((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            var_17 += ((/* implicit */_Bool) min(((-(arr_1 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)102)) ? (9223372036854775789LL) : (arr_0 [i_0 - 1]))))));
            var_18 = ((/* implicit */int) max((var_18), (var_2)));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) var_0);
            arr_7 [i_0 - 3] [i_1 - 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_4 [i_1]))) <= (((/* implicit */unsigned long long int) ((arr_5 [i_0 - 3] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))) : (arr_0 [i_1])))))))));
        }
        arr_8 [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((arr_5 [i_0] [(unsigned char)2]) ? (var_2) : ((-(((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */int) (signed char)-51))))))));
        var_19 ^= ((/* implicit */unsigned char) ((arr_3 [i_0] [3LL]) ? (((arr_5 [i_0 - 1] [i_0]) ? (4424327190063026197ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1]))))) : (min((arr_1 [i_0 - 3]), (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0])))))));
        arr_9 [i_0] = ((long long int) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (1278949921))) : (2147483642)));
    }
    for (int i_2 = 3; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_14))));
        var_21 ^= ((/* implicit */_Bool) arr_0 [i_2]);
    }
    for (int i_3 = 3; i_3 < 20; i_3 += 2) /* same iter space */
    {
        var_22 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_3])) && (((/* implicit */_Bool) 3898877041U)))) ? (((int) arr_14 [i_3])) : (max((((/* implicit */int) arr_3 [i_3] [i_3])), (var_2)))))) && (((/* implicit */_Bool) var_12)));
        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_12 [6LL]))) ? (((((/* implicit */_Bool) ((4167515636080769563ULL) | (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_3 + 1] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_11 [i_3 - 3] [i_3 - 3])), (arr_4 [i_3]))))))));
        var_24 = ((int) ((unsigned char) var_9));
        var_25 = ((/* implicit */unsigned long long int) ((int) 4294967295U));
        arr_16 [i_3] [i_3] = ((/* implicit */int) 18048279886754098452ULL);
    }
}
