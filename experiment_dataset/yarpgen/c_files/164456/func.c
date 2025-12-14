/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164456
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((_Bool) arr_2 [i_0 + 1] [i_0 + 1]));
        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) -1318045124))))) ? (arr_2 [i_0 - 1] [i_0 - 3]) : (arr_1 [i_0] [i_0 - 1])));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) arr_5 [i_1]))));
        arr_8 [i_1] [i_1] = ((arr_4 [i_1]) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1318045128)) || (var_18)))) : (((/* implicit */int) min((arr_6 [i_1]), (((/* implicit */short) var_18))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_1]), (arr_6 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) arr_6 [i_1]))))), (min((arr_5 [i_1]), (((/* implicit */short) var_7)))))))) : (((((((/* implicit */_Bool) arr_4 [i_1])) || (var_18))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_1]), (arr_6 [i_1]))))) : (min((var_10), (((/* implicit */unsigned long long int) arr_4 [i_1]))))))));
    }
    var_22 = ((/* implicit */unsigned short) (+((-((+(var_3)))))));
    var_23 = ((/* implicit */signed char) (-(((min((var_3), (1318045139))) + (((/* implicit */int) var_17))))));
    var_24 = ((/* implicit */int) (+((-(min((var_10), (((/* implicit */unsigned long long int) 2670449193U))))))));
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) min((arr_9 [i_2]), (arr_9 [i_2])))) ? (((((/* implicit */_Bool) arr_9 [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)61330)) <= (-2147483643)))))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((min((((/* implicit */int) var_17)), (-2131138270))) / (((((/* implicit */_Bool) 67108864U)) ? (arr_9 [i_2]) : (arr_9 [i_2])))));
    }
}
