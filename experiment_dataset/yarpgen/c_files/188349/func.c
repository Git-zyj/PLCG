/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188349
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
    var_10 *= ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0 + 1])) || (((/* implicit */_Bool) arr_3 [14LL] [i_0 - 2] [(short)13])))));
                var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (((((((/* implicit */_Bool) arr_0 [i_1])) ? (-1450322411492094893LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(signed char)5])))))));
                arr_5 [(unsigned char)16] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) -1073741824)), (var_7))))))), (3564507095264615390LL)));
                var_13 -= ((/* implicit */short) max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1])), (3564507095264615390LL)));
                arr_6 [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0 - 1]))) ? (var_2) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((3564507095264615385LL) != (((/* implicit */long long int) arr_0 [i_0]))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) (+(((((((/* implicit */long long int) ((/* implicit */int) (signed char)57))) < (3564507095264615389LL))) ? (((/* implicit */long long int) var_4)) : ((+(-3564507095264615391LL)))))));
}
