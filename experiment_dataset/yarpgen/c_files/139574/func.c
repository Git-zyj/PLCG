/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139574
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
    var_13 = max((((unsigned int) var_11)), ((+((~(420586344U))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = 133169152U;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_12)))) ? (((unsigned int) 59645605U)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3578095960U)))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) /* same iter space */
        {
            arr_8 [i_0] = ((((((/* implicit */_Bool) max((0U), (0U)))) ? (var_5) : (((4294967285U) % (var_3))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (var_12)))) ? (var_3) : (arr_5 [i_1] [i_1]))));
            arr_9 [i_0] = (((!(((/* implicit */_Bool) ((var_9) + (arr_0 [8U])))))) ? (var_12) : (0U));
            arr_10 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (arr_1 [i_1])))) ? (((var_1) + (507643054U))) : (arr_6 [i_1 + 2] [i_1 + 1] [3U]))))));
            arr_11 [i_0] = ((unsigned int) min((507643078U), (arr_2 [i_1 + 2] [i_1 + 2])));
            arr_12 [i_1] [i_1] [0U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((11U) << (((arr_1 [i_0]) - (1880162845U)))))) ? ((-(935932370U))) : (((arr_0 [i_0]) + (3359034926U)))))) ? (1881930774U) : (((arr_1 [i_0]) % (var_12))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 11; i_2 += 4) /* same iter space */
        {
            arr_15 [i_0] = ((((/* implicit */_Bool) ((var_11) ^ (202705427U)))) ? ((-(var_2))) : (((arr_5 [i_0] [i_0]) >> (((var_3) - (979012804U))))));
            var_14 = (-(((arr_5 [i_0] [i_0]) % (3739623022U))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_18 [i_3] [i_3] = min((min((arr_13 [i_3] [i_3]), (((arr_0 [i_3]) / (4294967295U))))), (min((((((/* implicit */_Bool) 11U)) ? (4294967271U) : (4294967295U))), (((unsigned int) arr_13 [i_3] [i_3])))));
        arr_19 [i_3] [i_3] = arr_7 [0U] [7U] [i_3];
        arr_20 [i_3] [0U] |= ((0U) & (((arr_16 [0U]) % (939524096U))));
    }
    var_15 *= var_8;
}
