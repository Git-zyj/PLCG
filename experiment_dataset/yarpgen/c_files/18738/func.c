/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18738
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */int) 12637335385736008154ULL);
                            arr_12 [i_3] [i_3] = var_0;
                            var_21 = ((((/* implicit */_Bool) arr_9 [i_4] [i_4 + 1] [i_4 + 2] [i_4 + 3] [i_4 + 1] [i_3])) ? (((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))))) ? (arr_11 [i_0] [12ULL] [i_1] [i_3] [i_3] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (max((max((var_7), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [5ULL] [i_2] [i_3])))), (((/* implicit */unsigned long long int) min((arr_7 [i_3] [i_1] [i_2] [i_3]), (((/* implicit */unsigned int) (short)8191))))))));
                            var_22 = min((var_18), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (short)25436)) < (((/* implicit */int) arr_10 [i_1] [i_3])))))));
                        }
                    } 
                } 
            } 
            var_23 &= ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (var_8)))) : (((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0] [i_1] [(short)2] [(short)2]) : (arr_9 [i_0] [i_0] [12U] [2] [i_1] [i_0])))))) : (min((((arr_1 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-53))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [(signed char)10])))))))));
        }
        var_25 -= min((min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (8714484301341064199ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((/* implicit */int) ((9224271568395993227ULL) >= (var_14)))) : (((/* implicit */int) arr_4 [i_0]))))));
        arr_13 [i_0] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_3)), ((short)-27653)))) / (((/* implicit */int) min((arr_0 [i_5]), (var_3))))))) ? (((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) (short)25428)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))) : (((unsigned int) arr_0 [i_5])))))));
        arr_16 [i_5] [i_5] = var_7;
        arr_17 [i_5] |= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (9246654008717831954ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88)))))) ? (549755813887ULL) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (2563650985031163417ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [(unsigned short)2]))))));
    }
    var_27 |= ((/* implicit */int) var_19);
    var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) ((((/* implicit */_Bool) max((16164992291774314266ULL), (13110024825967680008ULL)))) || (((/* implicit */_Bool) ((unsigned long long int) var_4)))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) max((var_17), ((signed char)-47)))))))));
}
