/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123776
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [i_1 + 1] [(short)11])) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_3 [i_0]) : (arr_5 [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)120)))))))));
                arr_6 [i_0] [i_0] [i_0 + 3] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0])))));
                var_15 = ((/* implicit */unsigned long long int) (-(((arr_0 [i_0 + 3] [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) (-((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        var_17 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2] [(signed char)8])) >> (((/* implicit */int) (_Bool)1))))) ? (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [11LL]))) : (arr_8 [i_2] [i_2 + 1])))));
        arr_9 [i_2] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_7 [(_Bool)1] [18LL])))), (((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((/* implicit */int) ((arr_8 [i_2] [i_2]) >= (15153213587120457731ULL)))) : ((~(((/* implicit */int) arr_7 [i_2] [i_2]))))))));
    }
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) -769170158)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10)))))))))));
    var_19 |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((4626313792285608223ULL) << (((((/* implicit */int) (unsigned char)88)) - (63))))) : (((/* implicit */unsigned long long int) (+(2229344752U))))))));
}
