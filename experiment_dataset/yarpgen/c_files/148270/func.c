/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148270
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned short)65520)) >> (((18446744073709551611ULL) - (18446744073709551602ULL))))))) ? (((var_13) - (var_5))) : (((((/* implicit */_Bool) 4175331673733302433ULL)) ? (25ULL) : (18446744073709551613ULL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [(unsigned short)5] [(unsigned short)5] = ((unsigned short) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (14ULL)));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? ((-(16105244200267795320ULL))) : (var_9)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_19 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 227230471856227326ULL)))) ? (((/* implicit */int) (unsigned short)43859)) : (((((/* implicit */int) (unsigned short)43459)) >> (((arr_4 [i_1]) - (307442766245446703ULL)))))));
        arr_7 [7ULL] = ((unsigned long long int) (unsigned short)21676);
    }
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)43865)) + (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)21688)) ? (((/* implicit */int) (unsigned short)43859)) : (((/* implicit */int) (unsigned short)43847)))) : (((/* implicit */int) min(((unsigned short)43842), ((unsigned short)65535)))))))))));
}
