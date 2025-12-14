/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16032
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) ((signed char) 917504U));
                    var_14 = ((/* implicit */unsigned short) (unsigned char)11);
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)57353))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1024)) ? (-9136764463281997677LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13957)))))) : (((12953539265377453584ULL) >> (((524284U) - (524243U)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max(((_Bool)1), (var_6)));
}
