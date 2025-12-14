/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160301
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (unsigned short)40881))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 2747182930990541196ULL)) ? (((/* implicit */int) ((unsigned char) (unsigned short)40881))) : (((/* implicit */int) arr_1 [i_0 - 1])))) : ((~(((/* implicit */int) ((signed char) var_10)))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(15699561142719010418ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (2747182930990541198ULL)));
        arr_5 [i_0] = ((/* implicit */unsigned int) (-(var_13)));
        arr_6 [i_0] = ((/* implicit */int) ((_Bool) min((((unsigned char) arr_0 [i_0])), (arr_1 [i_0]))));
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_3 [i_0 + 2]) == (arr_3 [i_0 + 1]))))));
    }
    for (long long int i_1 = 3; i_1 < 8; i_1 += 3) 
    {
        arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) | (((arr_3 [i_1]) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (3754331895U))))))));
        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
        var_18 &= ((/* implicit */_Bool) (unsigned short)56);
    }
}
