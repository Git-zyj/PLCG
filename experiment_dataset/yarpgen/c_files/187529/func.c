/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187529
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
    var_20 = ((/* implicit */unsigned int) ((7793596080437015261LL) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13111)) ? (1973976312141332383LL) : (-6851606941743527341LL)))) ? (max((((/* implicit */long long int) var_4)), (0LL))) : (min((((/* implicit */long long int) var_4)), (7797280999470420014LL)))))));
    var_21 = var_15;
    var_22 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_10))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_23 &= ((/* implicit */signed char) arr_1 [(short)8]);
        arr_4 [i_0] = min((arr_2 [i_0] [2ULL]), (((/* implicit */long long int) arr_3 [i_0])));
        var_24 = ((/* implicit */long long int) (signed char)-98);
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)9119)) ? (-4507608351421847343LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) ^ (((arr_2 [4LL] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (short)28672)))))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) 6851606941743527341LL)) ? (7793596080437015261LL) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0]))))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-28672)), (315095145U)))) : (min((((/* implicit */long long int) (signed char)98)), (-7077310698326969726LL)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) -818378596)) > (arr_6 [i_1]))))))) : (arr_6 [i_1])));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_27 = min((((/* implicit */unsigned long long int) arr_10 [i_1] [i_2 - 4] [i_3] [i_3])), (max((arr_8 [i_3]), (0ULL))));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) (-2147483647 - 1));
                        arr_14 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (~(3544996502414899475LL)))) ? (((var_3) ? (((/* implicit */int) arr_9 [i_3] [i_4])) : (((/* implicit */int) arr_9 [i_1] [i_1])))) : (((/* implicit */int) arr_9 [23LL] [23LL])))));
                    }
                    var_29 = ((/* implicit */int) arr_11 [i_3] [i_2] [i_1]);
                    arr_15 [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-115)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31238))))), (min((((/* implicit */unsigned int) arr_11 [i_1] [i_2 - 4] [i_3])), (arr_6 [i_2])))))) ? (min((arr_5 [i_2 + 3]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 818378596)), (0U)))))) : (((((/* implicit */unsigned long long int) ((arr_12 [i_2] [i_2] [i_3]) + (((/* implicit */int) (short)0))))) + (arr_5 [i_1])))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */int) max((((arr_6 [i_1]) / (arr_6 [i_1]))), (arr_6 [i_1])));
        arr_17 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 9112793644123322041LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(signed char)5] [i_1] [i_1] [(signed char)5]))) : (arr_13 [i_1] [16] [i_1])))))), (((arr_8 [i_1]) | (((/* implicit */unsigned long long int) arr_12 [22U] [i_1] [22U]))))));
    }
}
