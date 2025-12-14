/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167683
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_11 &= ((/* implicit */int) ((((/* implicit */long long int) var_10)) < (var_8)));
        var_12 = ((/* implicit */unsigned short) var_2);
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                arr_7 [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (var_4))))) : (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76)))))));
                var_14 = ((/* implicit */short) ((12041445478875445518ULL) <= (6405298594834106076ULL)));
            }
        } 
    } 
}
