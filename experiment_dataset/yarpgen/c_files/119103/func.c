/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119103
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)94)) > (((/* implicit */int) var_5))));
        arr_2 [(short)0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((2147483647) << (((2676424203U) - (2676424203U))))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) ? ((((~(11LL))) | (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) & (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 + 1])))))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(var_8)))) >> (((arr_4 [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
        var_15 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_4 [i_1])))) * (((arr_4 [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_13) : ((-(2294544366U))))))));
        var_17 = ((/* implicit */unsigned short) ((arr_6 [i_1]) | ((+(arr_6 [i_1])))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)78)) <= (((/* implicit */int) (signed char)125))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                arr_13 [i_2] = ((/* implicit */_Bool) arr_8 [i_2] [i_3]);
                arr_14 [i_2] = ((/* implicit */_Bool) var_6);
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_19 = ((/* implicit */signed char) (+(((((12LL) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [(short)11] [i_3] [i_4]))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_10 [5ULL]))) - (8725455392546100660LL)))))));
                    var_20 = (i_2 % 2 == zero) ? (((/* implicit */short) max((((arr_11 [i_2] [i_3] [i_2]) >> (((arr_11 [i_2] [i_3] [i_2]) - (3907675410U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */short) max((((arr_11 [i_2] [i_3] [i_2]) >> (((((arr_11 [i_2] [i_3] [i_2]) - (3907675410U))) - (470796450U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))));
                    arr_18 [i_2] [(unsigned short)10] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_1 [i_3]))))) ? ((~(((/* implicit */int) arr_12 [14U] [i_3] [14U])))) : ((~(((/* implicit */int) arr_16 [i_2] [i_2] [i_3] [i_4]))))))) || (((((/* implicit */int) arr_16 [i_2] [i_2] [i_4] [(short)3])) > (((/* implicit */int) arr_12 [i_2] [i_3] [i_4]))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((min((((/* implicit */unsigned int) arr_9 [i_2] [i_2])), (817806926U))), (((/* implicit */unsigned int) arr_9 [i_2] [i_2])))))));
                }
            }
        } 
    } 
}
