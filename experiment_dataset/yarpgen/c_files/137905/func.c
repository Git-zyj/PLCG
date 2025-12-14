/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137905
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
    var_13 = ((/* implicit */unsigned long long int) var_3);
    var_14 |= ((/* implicit */_Bool) min((min((max((var_9), (((/* implicit */long long int) var_12)))), (9223372036854775807LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_12)), (var_9)))))) ? (var_7) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15819))))) ? (var_7) : (max((12110466656695323533ULL), (((/* implicit */unsigned long long int) (unsigned short)0))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [(signed char)0] [2U] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_6 [i_1] [i_1] [i_0] [i_0 + 2])), (((((/* implicit */_Bool) arr_6 [(unsigned short)4] [i_1] [i_0] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0 - 1]))))));
                        var_16 = ((/* implicit */long long int) max((6336277417014228071ULL), (((((/* implicit */_Bool) arr_2 [i_0])) ? (9643898137885667267ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_3])))))));
                    }
                    var_17 -= ((/* implicit */unsigned int) arr_4 [(unsigned short)6]);
                    arr_11 [i_0] [1ULL] [i_2 - 1] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) min((arr_0 [i_0] [i_0]), (var_8)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2729170483U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95)))))) ? (((/* implicit */int) arr_0 [i_0] [i_2 - 1])) : (((/* implicit */int) (signed char)127))))));
                }
            } 
        } 
        arr_12 [4U] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 + 1])))), (min((((/* implicit */int) (unsigned char)32)), ((-(((/* implicit */int) arr_0 [0] [0]))))))));
    }
    var_18 = ((/* implicit */unsigned int) (signed char)118);
}
