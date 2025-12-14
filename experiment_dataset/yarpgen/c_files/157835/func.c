/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157835
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) 2391703246U))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) ((arr_7 [i_0 + 3] [i_0 + 3]) ? (((/* implicit */int) arr_7 [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) arr_7 [i_2] [i_0 + 3]))));
                arr_12 [i_0 + 2] [i_1] [i_1 + 3] |= ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_8 [i_0 + 3])));
            }
        }
        arr_13 [8ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) ((min((((/* implicit */int) var_5)), (arr_9 [i_0 + 1] [(unsigned short)13] [i_0 + 1]))) == ((~(((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1]))))))) ^ (((((/* implicit */_Bool) arr_8 [i_0 + 3])) ? (((/* implicit */int) arr_4 [i_0 + 3] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_8 [i_0 - 2]))))));
        var_13 ^= ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)9076))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 3]))) / (((unsigned int) arr_9 [i_0 - 1] [i_0 - 1] [i_0]))))));
        var_14 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) (short)9092)))), (min((((/* implicit */int) (unsigned char)137)), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0]))))))));
    }
    var_15 = ((/* implicit */int) var_3);
    var_16 |= ((/* implicit */int) var_10);
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_0))));
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))));
}
