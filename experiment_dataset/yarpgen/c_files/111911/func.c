/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111911
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
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)255)), (((long long int) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            var_15 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_1 + 1] [i_0]))));
            var_16 = ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 + 1])));
        }
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            var_17 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))) > (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) * (6891323327154860540LL)))) ? (arr_3 [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1]))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((var_10) + (var_7)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)8)) : (((((/* implicit */int) arr_4 [i_0])) - (((/* implicit */int) arr_5 [i_2])))))))));
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) 973612287U))))))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) (~(arr_1 [7LL]))))))))))));
            var_20 -= ((/* implicit */int) (~(((((/* implicit */_Bool) (+(arr_6 [i_2])))) ? (((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_1 [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_2 [i_2] [i_0])) : (((/* implicit */int) arr_4 [i_0])))))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) 11274215440737097924ULL);
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [8LL])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) var_10))))))))));
        }
        var_23 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) / (var_9)))))) ? ((-(arr_1 [i_0]))) : (((/* implicit */long long int) var_7))));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) 1928970455U)), (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))) : (var_6)))));
    var_25 = ((/* implicit */unsigned char) var_8);
}
