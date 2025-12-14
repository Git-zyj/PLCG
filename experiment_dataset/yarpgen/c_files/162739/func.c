/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162739
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), (((unsigned short) var_4))))) ? (((/* implicit */int) ((unsigned char) ((12901637305909508711ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */int) ((((/* implicit */int) var_0)) < (((((/* implicit */int) (unsigned short)29748)) + (((/* implicit */int) (signed char)110)))))))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)255)) : ((~(((/* implicit */int) ((signed char) (unsigned char)238)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [(_Bool)1] [(unsigned char)16] [(unsigned char)10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)240))));
                arr_7 [i_0] [i_0] [12ULL] |= 18446744073709551606ULL;
            }
        } 
    } 
}
