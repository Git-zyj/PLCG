/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121826
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)14] &= ((/* implicit */unsigned char) ((unsigned int) min((2870520793U), (((/* implicit */unsigned int) (_Bool)1)))));
                var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0]))))) && (((/* implicit */_Bool) min(((short)17548), (((/* implicit */short) arr_1 [(unsigned short)14] [(unsigned short)14])))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (var_13)))) > (((var_10) ? (11779861595371591788ULL) : (((/* implicit */unsigned long long int) -1268826193)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_15 += ((/* implicit */short) arr_0 [i_2]);
        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)0))));
    }
}
