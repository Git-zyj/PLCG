/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112347
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] |= ((/* implicit */unsigned short) (_Bool)1);
                var_15 ^= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 336131099U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)39335))))) % (((var_9) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27806))))))));
                arr_6 [i_0] = ((/* implicit */signed char) (unsigned char)10);
                arr_7 [i_0] [i_1] = min((min(((unsigned short)58566), (((/* implicit */unsigned short) arr_1 [i_1])))), (((/* implicit */unsigned short) arr_1 [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) -343897339352256287LL))));
}
