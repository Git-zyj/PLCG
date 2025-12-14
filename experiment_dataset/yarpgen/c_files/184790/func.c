/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184790
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) : ((-(((/* implicit */int) var_16)))))) | (((/* implicit */int) arr_1 [i_0 - 2]))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_0 [6ULL] [i_0]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_18 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (((unsigned long long int) 2348113717014198688ULL))));
            arr_5 [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0] [i_1]));
            arr_6 [i_0] [i_1] [i_0 - 1] = ((unsigned long long int) var_12);
            arr_7 [i_0] = var_12;
        }
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_19 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)0])))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) & (var_5));
            arr_10 [i_0] = ((/* implicit */unsigned short) ((min((var_15), (((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_2]), (arr_1 [(unsigned short)10])))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)48373)))))))));
        }
        arr_11 [i_0] [i_0 - 2] = min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))))), (((unsigned long long int) max((var_7), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        arr_12 [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) arr_0 [i_0] [5ULL])), (arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 2]))), (((/* implicit */unsigned long long int) ((unsigned short) max((var_1), (arr_3 [i_0] [i_0])))))));
    }
    var_20 = ((((/* implicit */_Bool) var_7)) ? (var_5) : (((unsigned long long int) 14280575169662347817ULL)));
    var_21 = ((/* implicit */unsigned long long int) var_1);
}
