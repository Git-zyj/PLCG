/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151990
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((((unsigned long long int) arr_1 [i_0])) | (max(((~(arr_1 [i_0]))), ((~(arr_0 [i_0] [i_0]))))));
        arr_4 [i_0] = ((int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (18053928046012099961ULL) : (((/* implicit */unsigned long long int) var_1))));
        var_18 = min((((arr_2 [i_0]) & (arr_0 [i_0] [i_0]))), (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_11)))));
        var_19 = ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_1 [8ULL]))))) % (max((var_10), (var_5)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) var_4)));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 3829728855582244815ULL)) ? (arr_0 [i_1] [i_1]) : (var_15)));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        var_21 = ((unsigned long long int) arr_9 [i_2]);
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) ((13757862830627256233ULL) < (13920494943640725087ULL)))), (min((8388607ULL), (((/* implicit */unsigned long long int) var_11)))))));
        var_22 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_2] [i_2]), (16616592493122884521ULL)))) ? (((/* implicit */int) ((13920494943640725087ULL) <= (((/* implicit */unsigned long long int) var_1))))) : (((int) arr_2 [i_2])))));
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_15) - (((/* implicit */unsigned long long int) var_9))))) ? (((unsigned long long int) ((arr_9 [i_2]) + (var_4)))) : (((/* implicit */unsigned long long int) (-(min((-1630928422), (var_8))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */int) var_0);
        var_25 = ((((((/* implicit */_Bool) arr_1 [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 13920494943640725096ULL)) ? (arr_1 [i_3]) : (arr_3 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_9 [5ULL]) < (var_8)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))) : (arr_0 [i_3] [i_3]));
        var_26 = arr_10 [i_3] [8ULL];
    }
    var_27 = var_7;
}
