/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178240
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5429)) ? ((+(0LL))) : (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (max((((/* implicit */long long int) max((var_8), (((/* implicit */unsigned short) arr_2 [i_0]))))), (((long long int) var_9)))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)57024)))))));
        var_12 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
        arr_3 [i_0] = ((/* implicit */unsigned int) -10LL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) ((short) (unsigned short)51608));
            var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)10]))) : (1U)));
        }
        arr_6 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (short)9899)), (4294967290U))), (((/* implicit */unsigned int) (unsigned short)510))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (8191U) : (2U)))) : (((((/* implicit */_Bool) min((var_5), (((/* implicit */int) arr_5 [i_0] [10U]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -20)) : (1337964893815054709LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    var_15 = ((((/* implicit */_Bool) 8589934591LL)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))), (max((((/* implicit */unsigned int) (unsigned short)65531)), (9U)))))) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 47334669U)) : (var_4))), (((/* implicit */long long int) var_5)))));
}
