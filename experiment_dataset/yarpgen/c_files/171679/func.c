/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171679
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) 8631178450555234570ULL);
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) 2784279312U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))) : (8631178450555234570ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (signed char)25))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8)))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (unsigned short)65532))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (short)-3125))));
}
