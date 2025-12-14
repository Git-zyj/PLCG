/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13650
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)0) ? ((~(((/* implicit */int) arr_2 [8ULL])))) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) min((var_9), (((/* implicit */short) arr_1 [0ULL] [i_0])))))))));
        var_15 = ((/* implicit */unsigned short) ((((var_10) + (((/* implicit */unsigned int) min((((/* implicit */int) (short)-21838)), (var_11)))))) + (((/* implicit */unsigned int) (~(((var_1) / (((/* implicit */int) arr_2 [i_0])))))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((var_14) - (10010969158200698249ULL)))))) ? (((/* implicit */int) arr_2 [(short)9])) : (((/* implicit */int) arr_1 [(signed char)1] [(_Bool)1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (var_10)))))))) : (max((min((((/* implicit */unsigned int) var_9)), (18U))), (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) arr_1 [(_Bool)0] [9LL]))))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [0ULL] [19ULL] = ((/* implicit */_Bool) (short)-21830);
        arr_8 [i_1] = ((/* implicit */int) (~(7657072942013107787LL)));
    }
    var_17 = ((/* implicit */long long int) ((2097151ULL) - (((/* implicit */unsigned long long int) var_11))));
    var_18 = ((/* implicit */short) var_0);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34898))) * (var_10)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max(((unsigned short)30636), (var_4))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))));
    var_20 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
}
