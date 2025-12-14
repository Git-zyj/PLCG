/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139282
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
    var_14 = ((/* implicit */short) var_8);
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_6)))) ? (min((((/* implicit */unsigned long long int) var_11)), (var_8))) : (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_13)))) << (((((/* implicit */int) arr_0 [i_0 - 1])) - (84)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_17 = ((/* implicit */long long int) (+((((!(((/* implicit */_Bool) arr_3 [i_0 - 4] [i_0])))) ? (((((/* implicit */int) arr_3 [i_0 - 1] [i_1])) % (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_0] [(signed char)4] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 2]))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_0)) % (((/* implicit */int) var_12)))), (((/* implicit */int) arr_1 [i_0])))))));
            var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0 - 3] [3] [i_1])) : (((/* implicit */int) arr_5 [i_0 - 2] [i_1] [i_1])))), (((/* implicit */int) min((arr_5 [i_0 - 1] [i_0] [i_0]), (arr_5 [i_0 - 1] [(_Bool)1] [i_0]))))));
            var_19 *= ((int) var_1);
        }
        for (int i_2 = 1; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) 2439458705U)))) ? (min((((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 + 2])), (((var_0) ? (arr_7 [i_2 - 1] [i_2] [12ULL]) : (var_6))))) : (((/* implicit */unsigned int) min((((((/* implicit */int) arr_4 [i_2] [i_0] [i_0])) & (((/* implicit */int) arr_9 [i_0])))), (((/* implicit */int) arr_2 [i_0] [i_2 + 1] [i_2 + 1])))))));
            arr_10 [i_2] = ((((((/* implicit */int) arr_3 [i_2 - 1] [i_0 + 2])) % (((/* implicit */int) arr_3 [i_2 + 1] [i_0 + 2])))) % (((/* implicit */int) min((arr_3 [i_2 + 2] [i_0 - 1]), (arr_3 [i_2 + 1] [i_0 - 2])))));
        }
        for (int i_3 = 1; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */int) arr_1 [i_0 - 3]);
            arr_13 [(signed char)5] [i_3] = (~(((/* implicit */int) var_10)));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_4 [i_3] [i_3 + 1] [i_0 - 4]), (arr_4 [i_3 + 1] [i_3 + 1] [i_0 - 4])))) * (((/* implicit */int) (!(arr_4 [i_3 + 2] [i_3 + 2] [i_0 - 3]))))));
        }
        for (int i_4 = 1; i_4 < 16; i_4 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) arr_4 [i_0 - 2] [i_0] [i_0]);
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4] [i_4])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) >> (((((/* implicit */int) arr_17 [i_4 + 1] [i_0 - 1])) << (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [12LL] [i_4])))))))))));
        }
        var_25 = ((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 - 3]);
        arr_18 [i_0 - 1] = ((/* implicit */signed char) ((((unsigned long long int) arr_0 [i_0 - 2])) >> (((((/* implicit */int) min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 3])))) - (56)))));
    }
}
