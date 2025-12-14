/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107502
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_0 + 2])) : (((/* implicit */int) arr_8 [i_0 + 2] [i_2] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 - 2] [i_1] [i_1]))))) : ((~(((/* implicit */int) arr_3 [i_0 - 2]))))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = min((((/* implicit */short) max((((/* implicit */unsigned char) arr_3 [i_0 + 1])), (arr_1 [i_0 - 2])))), (((short) arr_3 [i_0 + 1])));
                    var_13 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 1]))))), (arr_5 [i_0 + 1] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(arr_11 [i_3]))) ? (((arr_11 [11ULL]) ? (((/* implicit */int) arr_12 [8ULL])) : (((/* implicit */int) arr_12 [i_3])))) : ((+(((/* implicit */int) arr_11 [i_3]))))))) ? (max((((/* implicit */int) ((_Bool) arr_11 [i_3]))), (((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_12 [i_3])))))) : (((/* implicit */int) arr_11 [i_3]))));
        var_15 = ((/* implicit */unsigned short) (-(((unsigned long long int) arr_11 [i_3]))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_3]))));
    }
    var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_9)))))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned short) var_0)))));
    var_17 = ((/* implicit */unsigned long long int) var_4);
    var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((short) var_4))))))));
}
