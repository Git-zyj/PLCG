/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146915
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
    var_13 = var_6;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_0])), (max((((/* implicit */int) (short)10793)), (-1729623776)))))), (((((/* implicit */_Bool) min((var_6), (arr_0 [i_1])))) ? (max((-8129005799667807287LL), (((/* implicit */long long int) -1729623776)))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
            var_15 |= ((/* implicit */_Bool) min((((/* implicit */long long int) min((3356135563U), (1922911482U)))), (5273604477484495544LL)));
            var_16 = ((/* implicit */int) max((((short) var_10)), (((short) arr_1 [i_1]))));
            arr_4 [i_0] [i_1] [4U] |= ((/* implicit */unsigned short) min(((~((+(((/* implicit */int) var_10)))))), ((+((-(-350632809)))))));
            var_17 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) -350632778))), ((-(((long long int) arr_1 [i_0]))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_18 = arr_2 [i_0];
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_2] [i_0]))));
        }
        var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 10U)))))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
        arr_7 [i_0] [(short)9] = arr_2 [i_0];
    }
}
