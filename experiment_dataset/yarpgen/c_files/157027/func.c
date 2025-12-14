/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157027
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_10)), ((-(min((((/* implicit */unsigned long long int) var_3)), (11902516286319382425ULL)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [(unsigned char)8] = ((/* implicit */signed char) ((_Bool) arr_0 [i_0]));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (min((var_9), (((/* implicit */unsigned long long int) var_16))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (arr_0 [i_0]) : (max((arr_0 [i_0]), (((/* implicit */long long int) var_13)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((short) ((((6544227787390169191ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)8195)) <= (((/* implicit */int) arr_3 [i_1])))))))));
        arr_7 [0ULL] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) arr_4 [i_1]))))));
        var_20 &= ((/* implicit */unsigned long long int) var_17);
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) << (((((/* implicit */int) arr_3 [i_1])) - (80)))))) | (((unsigned long long int) arr_3 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [0ULL]))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 23; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) ((arr_5 [i_2 - 1] [i_2]) | (arr_5 [i_2 + 2] [i_2 - 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 - 3] [19ULL])) ? (arr_5 [i_2 + 2] [24ULL]) : (arr_5 [i_2 + 2] [i_2])))) : (var_9)))));
            var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) > (11902516286319382400ULL)))) != (((/* implicit */int) arr_4 [i_1]))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1]))) * (arr_9 [i_2]))), (((/* implicit */unsigned long long int) ((signed char) -9039274446723492119LL)))))));
            var_23 = ((/* implicit */unsigned short) arr_9 [(signed char)4]);
            arr_12 [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2 - 1])) ? (arr_5 [i_2 - 2] [i_2 - 1]) : (arr_5 [i_2 - 2] [i_2 - 1]))))));
        }
    }
}
