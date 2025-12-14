/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107541
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
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */short) ((unsigned char) 728511882U));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_17 *= ((/* implicit */long long int) arr_0 [0ULL] [i_1]);
            arr_6 [i_0 - 2] = ((((/* implicit */int) var_1)) % (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])) : (var_6))));
        }
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) max((3566455413U), (2520815186U)))) ? (max((1045801904U), (((/* implicit */unsigned int) arr_5 [i_0 - 2] [i_0] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 4] [i_2] [i_0 + 4]))))));
            var_18 = ((/* implicit */_Bool) arr_3 [i_2] [i_0]);
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
        {
            arr_14 [i_3] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_5)), (max((((/* implicit */long long int) arr_4 [(unsigned char)12] [i_3])), (arr_7 [i_0] [i_3]))))), (((long long int) arr_7 [i_0 - 1] [i_0 - 1]))));
            var_19 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_4))) : ((~(((/* implicit */int) arr_0 [i_0] [i_3]))))))), (((((/* implicit */_Bool) min((arr_7 [i_0 + 3] [i_3]), (arr_10 [i_0])))) ? (((arr_10 [i_3]) * (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_15)))))))));
            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
            arr_15 [(unsigned char)2] [i_0] = ((/* implicit */long long int) (~(728511882U)));
        }
        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
        {
            arr_19 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_4]);
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) ((var_6) >= ((~(((/* implicit */int) ((short) var_9)))))));
        }
        var_21 += ((/* implicit */long long int) ((short) min((max((((/* implicit */unsigned long long int) arr_9 [8LL] [8LL] [i_0 + 2])), (arr_17 [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0 + 4] [(signed char)8]))))))));
        arr_21 [i_0 - 2] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) arr_12 [i_0 + 1])), (arr_8 [i_0]))));
    }
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        var_22 = 2096533313U;
        var_23 = ((/* implicit */unsigned char) 2096533313U);
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_22 [(short)2]))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) arr_23 [i_5]))))) ? (((((((/* implicit */_Bool) 3249165395U)) ? (7936U) : (3566455413U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_5]))))) : (((/* implicit */unsigned int) min((((((/* implicit */int) var_12)) << (((((/* implicit */int) var_1)) - (22))))), (((/* implicit */int) (_Bool)0)))))));
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) == (var_4)));
    var_27 = ((/* implicit */unsigned char) max((-772120547), (((/* implicit */int) min((max(((short)0), (((/* implicit */short) var_5)))), ((short)0))))));
}
