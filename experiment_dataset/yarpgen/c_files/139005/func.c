/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139005
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_6 [(_Bool)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) var_6)) ? (arr_0 [2U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : ((+(arr_0 [i_1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) var_8))), (arr_5 [i_1] [i_0])))))));
            arr_7 [(unsigned char)16] [11LL] [9ULL] = ((/* implicit */unsigned char) (signed char)8);
            arr_8 [21LL] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))));
        }
        arr_9 [i_0] = ((/* implicit */signed char) arr_0 [(unsigned char)9]);
    }
    var_14 = ((/* implicit */short) ((unsigned long long int) (short)32767));
}
