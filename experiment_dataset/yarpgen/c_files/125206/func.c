/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125206
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)18)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((-(536870911LL))) : (((/* implicit */long long int) 1306015273)))))));
    var_18 = var_9;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) (short)15))))) ^ (var_6)));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) arr_0 [8LL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-1353)))), ((-(((/* implicit */int) (short)1339)))))))))));
        arr_4 [(short)12] [i_0] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [0U]))) * (min((((/* implicit */long long int) arr_0 [(_Bool)1])), (var_9)))));
        var_21 &= ((/* implicit */unsigned short) ((long long int) (short)1338));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_22 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((unsigned short)37196), ((unsigned short)7200)))), (min((((/* implicit */unsigned long long int) arr_5 [i_1])), (17656373037132401788ULL)))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (short)3968)) : (-683112421)))) ? (min((((/* implicit */int) (short)1353)), (var_7))) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)1350)) : (((/* implicit */int) (unsigned short)6144))))))) ? (min((arr_6 [i_1]), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) (short)12325)), ((unsigned short)16384)))))))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+((-((~(((/* implicit */int) (unsigned short)65519)))))))))));
    }
}
