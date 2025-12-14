/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143784
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))))) ? ((+(-1725866377))) : ((~(((/* implicit */int) var_6))))));
                    var_14 = ((/* implicit */int) min((var_14), ((+(((((/* implicit */_Bool) (signed char)33)) ? (1725866392) : (((/* implicit */int) (unsigned char)189))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-97))))))) ? ((+(max((var_11), (((/* implicit */unsigned long long int) 1725866376)))))) : (18446744073709551615ULL)));
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) 483232285U);
        var_15 = ((/* implicit */unsigned long long int) (unsigned char)120);
        var_16 = ((/* implicit */unsigned char) var_8);
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_12))));
}
