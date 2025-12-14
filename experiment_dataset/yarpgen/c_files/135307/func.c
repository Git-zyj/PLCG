/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135307
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_0 [i_1 - 3] [(unsigned char)17])) : (((/* implicit */int) var_10))))) : (((10174281871451062891ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28427)))))));
                var_12 = ((/* implicit */unsigned char) arr_4 [i_1] [i_1 - 2] [i_1]);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4158910633486266726ULL)) || (((/* implicit */_Bool) var_3)))))) | (min((-1LL), (((/* implicit */long long int) var_3))))))) || (((/* implicit */_Bool) 10U))));
    var_14 -= ((/* implicit */unsigned char) min((753469886U), (((/* implicit */unsigned int) (unsigned short)4096))));
    var_15 = ((/* implicit */long long int) var_6);
}
