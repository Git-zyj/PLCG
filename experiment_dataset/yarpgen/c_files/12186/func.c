/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12186
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
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) arr_0 [(unsigned char)4] [i_0 - 2]);
        arr_3 [i_0 + 2] |= ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (_Bool)1)))));
        var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [11ULL]))) % (arr_0 [i_0] [i_0 - 2])))) ? (var_5) : (arr_0 [i_0] [i_0])));
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) & ((~(1006645409U)))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_18 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) min((arr_4 [0] [i_1]), (arr_2 [i_1])))), ((+(arr_0 [i_1] [i_1]))))), (((/* implicit */unsigned long long int) (+(-1336933832))))));
        var_19 |= ((/* implicit */int) var_11);
        var_20 = (((((_Bool)1) && (((/* implicit */_Bool) arr_2 [i_1])))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))));
    }
    var_21 = ((/* implicit */int) var_5);
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((var_3), (((unsigned char) (_Bool)1))))), ((+(var_0))))))));
}
