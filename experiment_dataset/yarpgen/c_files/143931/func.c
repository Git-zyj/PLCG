/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143931
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((511U), (((/* implicit */unsigned int) (short)(-32767 - 1)))))))) || (((/* implicit */_Bool) var_6))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3697933143U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -8818814372876932566LL)) % (16130509589012151118ULL)));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_14 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_1]))));
        arr_7 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)13366))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_11 [11] [i_2] = ((/* implicit */unsigned short) -1064851143305957806LL);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_2]))))) : (((/* implicit */unsigned long long int) arr_1 [i_2]))));
    }
    var_16 = ((/* implicit */unsigned short) ((unsigned char) 4034933468068792393LL));
}
