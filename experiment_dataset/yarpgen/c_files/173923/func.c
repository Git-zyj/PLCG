/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173923
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
    var_15 = ((/* implicit */signed char) min((var_10), ((((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) var_4)))) : (max((var_11), (((/* implicit */int) var_14))))))));
    var_16 = ((/* implicit */signed char) var_4);
    var_17 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (var_11)))))) ? (min((((unsigned long long int) var_7)), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_10))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 7; i_0 += 4) /* same iter space */
    {
        arr_3 [0ULL] [9ULL] = ((/* implicit */signed char) arr_0 [(signed char)4]);
        var_18 = ((/* implicit */unsigned char) var_14);
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) ((var_8) >> (((arr_1 [1U]) + (1281575744)))))) ? (((unsigned int) arr_1 [(unsigned short)9])) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_2 [(unsigned char)1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 7; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_6 [7ULL]))));
        var_21 = ((/* implicit */int) min((var_21), ((((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [(signed char)2])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_5 [5]))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 7; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] [(signed char)8] = ((/* implicit */_Bool) ((arr_5 [8LL]) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [5ULL])))))));
        arr_10 [i_2] [9ULL] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [2ULL])) % (((/* implicit */int) arr_0 [(unsigned short)5])))) < (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_13)))))));
    }
}
