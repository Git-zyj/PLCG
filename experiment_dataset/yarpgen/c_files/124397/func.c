/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124397
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0 - 1] |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                arr_7 [i_0 + 1] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) max(((short)-11129), (((/* implicit */short) (unsigned char)226))))), (arr_0 [i_0] [i_0])));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((var_6) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)30742)) && (((/* implicit */_Bool) 17270391305687664977ULL)))))))) > (((((/* implicit */_Bool) (unsigned char)15)) ? (3061810313393220444LL) : (((/* implicit */long long int) ((/* implicit */int) (short)7858)))))));
}
