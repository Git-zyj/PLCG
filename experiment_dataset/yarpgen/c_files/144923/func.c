/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144923
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) ((short) arr_0 [i_0]))), ((+(((/* implicit */int) var_8))))));
        var_21 = -1434452749814692718LL;
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) -1434452749814692713LL);
        arr_3 [i_0] = ((signed char) ((min((-7216464525352111382LL), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3885))))))));
    }
    for (short i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_22 *= (short)-25969;
        var_23 = ((unsigned int) min((arr_4 [i_1 - 1] [i_1 + 2]), (((/* implicit */long long int) var_9))));
    }
    for (long long int i_2 = 1; i_2 < 24; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)21446)) + (arr_6 [i_2 - 1] [i_2]))), (((arr_9 [i_2 - 1]) - (arr_9 [i_2])))))) : (((unsigned long long int) 67645734912LL))));
        arr_11 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)12102))));
    }
    var_24 = ((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)));
    var_25 = ((/* implicit */unsigned int) var_16);
}
