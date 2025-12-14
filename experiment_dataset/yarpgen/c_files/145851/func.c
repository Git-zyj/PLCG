/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145851
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [(unsigned char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967289U)) ? (var_6) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))))) ? (((/* implicit */int) min((arr_0 [i_0 + 1] [i_0 - 1]), (((/* implicit */unsigned char) (_Bool)0))))) : ((+(((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((short) max((var_15), (((/* implicit */int) (signed char)-70))))), (((/* implicit */short) ((unsigned char) ((long long int) var_11))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_8 [(unsigned char)21] [i_1] = ((/* implicit */unsigned int) ((signed char) (!(arr_4 [i_1] [i_1]))));
        arr_9 [6LL] = ((/* implicit */unsigned int) -1367758527);
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_4 [i_1] [i_1]))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                arr_16 [i_2] [i_2] = ((unsigned int) 9223372036854775807LL);
                arr_17 [i_2] = ((/* implicit */int) ((unsigned int) min((((/* implicit */int) arr_5 [i_3])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [(_Bool)1])) : (var_7))))));
                arr_18 [(unsigned char)9] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_4 [i_2] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned int) arr_6 [i_2] [i_2]))))) : (var_16)));
                var_19 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2])) % (max((var_8), ((~(var_13)))))));
            }
        } 
    } 
}
