/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163432
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
    var_14 -= ((/* implicit */unsigned char) (-((((~(var_3))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (7811877471996847396LL))))))));
    var_15 = ((/* implicit */short) max((((/* implicit */int) var_1)), (((((/* implicit */int) max((((/* implicit */short) var_1)), (var_6)))) * (((/* implicit */int) var_6))))));
    var_16 = ((((((/* implicit */int) var_0)) & (((/* implicit */int) var_7)))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((((/* implicit */int) (short)-10610)) != (((/* implicit */int) (signed char)-18))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] |= ((/* implicit */int) arr_1 [12U]);
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((arr_5 [i_1] [i_1]) % (arr_5 [i_1] [i_1]))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_0 [i_1]))))))))));
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_2] [i_2])) / (((/* implicit */int) arr_8 [i_2])))), (((((/* implicit */int) arr_0 [i_2])) * (((/* implicit */int) arr_0 [i_2]))))));
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) < (((/* implicit */int) arr_8 [i_2])))))));
        var_21 = ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_2] [i_2])) == (((/* implicit */int) arr_8 [i_2]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2]))))));
        var_22 = ((/* implicit */signed char) ((max((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2]))) + (((/* implicit */int) ((arr_4 [i_2] [i_2]) > (arr_4 [i_2] [i_2]))))));
    }
    var_23 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)66)))) == (var_2)));
}
