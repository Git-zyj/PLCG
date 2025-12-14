/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156973
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
    var_13 = ((/* implicit */signed char) var_1);
    var_14 = ((/* implicit */unsigned short) ((16232151611949801783ULL) >> ((+(((/* implicit */int) var_6))))));
    var_15 = ((/* implicit */signed char) ((max((16232151611949801802ULL), ((-(2214592461759749834ULL))))) >= ((-(2214592461759749833ULL)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)59)))) | (arr_1 [i_0] [i_0]));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max(((((~(arr_1 [i_0] [i_0]))) ^ (((((/* implicit */_Bool) 16232151611949801783ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (1611286700083800020LL))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 4335224828226966943LL))))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (-4335224828226966964LL))))))))));
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_4))))) ? (((((((/* implicit */unsigned long long int) var_11)) > (10490181136453723349ULL))) ? (1379526748468875483ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) max((140737488355327ULL), (((/* implicit */unsigned long long int) 1985528782))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (1566741524067763513LL)))) : (((var_3) >> (((var_5) - (12683518057618352091ULL)))))))));
}
