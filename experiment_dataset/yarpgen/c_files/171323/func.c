/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171323
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
    var_11 = ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((((/* implicit */_Bool) 268435200ULL)) ? (var_0) : (var_6)))));
    var_12 = var_7;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (max((((unsigned long long int) 9878615429174587148ULL)), (((((/* implicit */_Bool) 827160353219485363ULL)) ? (18263120917078185782ULL) : (8568128644534964462ULL)))))));
        var_14 = ((((/* implicit */_Bool) 17664280552942083545ULL)) ? (576460752303423487ULL) : (9878615429174587139ULL));
        var_15 += ((((/* implicit */_Bool) ((arr_1 [i_0 + 2]) / (arr_1 [i_0 - 1])))) ? (arr_0 [i_0]) : (var_5));
        arr_2 [i_0] = ((((/* implicit */_Bool) 6302034339355799944ULL)) ? (6268921900687290803ULL) : (8333358837095095813ULL));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) 72057594037927920ULL)) ? (9062622042655847469ULL) : (11249485811944429452ULL));
    }
    var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) / (var_1)))) ? ((-(var_1))) : ((-(var_2)))))) ? (((unsigned long long int) ((var_6) == (var_10)))) : (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_7) : (var_3)))));
    var_17 = var_1;
}
