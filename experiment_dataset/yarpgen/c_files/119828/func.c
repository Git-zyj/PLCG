/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119828
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
    for (long long int i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        var_10 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) arr_1 [i_0 + 3] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (signed char)-101)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4))))), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [7ULL] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)101)), ((short)-404))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_2)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-24692)) & (((((/* implicit */int) var_8)) | (((/* implicit */int) (signed char)108))))))) ? (((18446744073709551609ULL) / (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (var_7)))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_14 [i_3] [i_3] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-121))))));
                        arr_15 [i_3] [i_2] [4LL] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-101))) % (arr_8 [i_1] [i_3] [(signed char)9])));
                        arr_16 [i_4] [i_3] [i_3] [i_1] = ((/* implicit */short) (+((((+(arr_13 [i_3]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2))))))));
                        arr_17 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) <= (max((((/* implicit */long long int) (signed char)-111)), (var_2)))));
                    }
                } 
            } 
        } 
    }
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)111)), (2934407544U)))) ? ((-(((/* implicit */int) (signed char)-101)))) : (((/* implicit */int) (signed char)103)))) << ((((-(((/* implicit */int) (signed char)-120)))) - (104)))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
}
