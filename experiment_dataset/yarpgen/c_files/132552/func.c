/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132552
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] = (+(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (650169491U))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (((!(((/* implicit */_Bool) (((_Bool)1) ? (4992371177402044040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (max((var_4), (((/* implicit */unsigned long long int) (unsigned short)27337)))) : (((/* implicit */unsigned long long int) (+(arr_8 [i_1] [i_1])))))))));
                    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31567))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2137516463U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_12 [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_11 [i_3] [0LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1)))));
        var_16 -= ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (arr_11 [i_3] [i_3]) : (arr_11 [i_3] [i_3]));
        var_17 = ((/* implicit */long long int) ((unsigned long long int) arr_11 [i_3] [i_3]));
        arr_13 [i_3] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20276))) : (13454372896307507566ULL)))));
    }
    var_18 = max((((((_Bool) (short)32088)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))), (((/* implicit */unsigned long long int) var_3)));
}
