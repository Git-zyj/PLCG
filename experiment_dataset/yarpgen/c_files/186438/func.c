/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186438
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((-6391563141174887377LL) + (((/* implicit */long long int) 2430454727U)))))));
    var_13 = ((/* implicit */short) var_2);
    var_14 = ((/* implicit */unsigned short) (~(3790435882145477733ULL)));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0 - 2] [i_0])))));
        var_15 = ((/* implicit */unsigned char) ((arr_1 [i_0] [i_0]) != (((/* implicit */unsigned long long int) (+(-1180827973))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7632961225389779006LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-6771544451608316959LL)));
    }
    for (long long int i_1 = 3; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_16 &= ((/* implicit */signed char) -6391563141174887377LL);
        arr_6 [i_1] [i_1 - 3] = ((/* implicit */long long int) max((((((/* implicit */int) arr_5 [i_1])) >> (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) min((arr_5 [i_1]), (arr_5 [i_1]))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((8887453596439725954LL) + (((/* implicit */long long int) 1581923817U))));
    }
}
