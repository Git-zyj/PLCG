/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152174
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (unsigned char)93))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) arr_0 [i_1 + 1]);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    var_16 += ((/* implicit */short) ((long long int) (!(var_3))));
                    arr_8 [i_1] = ((/* implicit */signed char) ((((((unsigned long long int) 4611686018427387904LL)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10265))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150)))));
                    arr_9 [i_0] [i_0] [i_1] [i_2 + 2] = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) arr_3 [13ULL])))))) != (min((-1082738858), (((/* implicit */int) (short)(-32767 - 1)))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (((/* implicit */int) (signed char)-23))))));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_11))));
    var_19 = ((/* implicit */long long int) min((var_2), (var_2)));
}
