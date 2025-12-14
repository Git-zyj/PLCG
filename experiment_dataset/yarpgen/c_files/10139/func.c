/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10139
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
    var_14 = ((/* implicit */unsigned short) min((var_14), ((unsigned short)16383)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : (-1478696680)));
        arr_2 [i_0] = ((/* implicit */int) min((var_3), (min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_4))))), (var_3)))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)16362)))) ? (max((572660214), (-166320744))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))))))))));
        var_17 = (((~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1879048192) : (((/* implicit */int) (unsigned short)16396)))))) ^ (-1478696683));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16372))))) ? ((-(((((/* implicit */_Bool) (unsigned short)19)) ? (127698139) : (((/* implicit */int) (unsigned short)16380)))))) : (-2016968227));
        arr_6 [i_1] [i_1] = ((/* implicit */int) var_5);
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_1]), (arr_5 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)17526)) ? (var_9) : (arr_3 [i_1]))))));
    }
}
