/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152820
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6366869566427403430LL)) && (((/* implicit */_Bool) max((max((((/* implicit */long long int) var_2)), (9223372036854775775LL))), (((/* implicit */long long int) arr_1 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) 6366869566427403430LL);
        arr_4 [i_0] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) arr_1 [i_0]))))) <= (((/* implicit */int) var_12)))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 226239701868752496ULL))))), ((-(((/* implicit */int) var_4))))))) ? ((-(8504264363858451810ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 14104887099897479619ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) / (((/* implicit */int) max((var_7), (((/* implicit */short) (_Bool)1))))))))))));
    }
    var_17 = ((/* implicit */signed char) var_2);
    var_18 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) ((unsigned short) 4341856973812071996ULL))) != (((/* implicit */int) var_6)))));
    var_19 = ((/* implicit */unsigned char) (short)-31630);
}
