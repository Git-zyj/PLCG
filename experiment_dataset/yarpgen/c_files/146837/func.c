/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146837
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned char)29))))))), (((/* implicit */int) (unsigned char)147)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0 + 1] |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) - (arr_0 [i_0 + 1])));
        var_12 = ((/* implicit */_Bool) max((var_12), (((((((/* implicit */int) (unsigned char)12)) << (((var_4) + (6884441577406812294LL))))) >= (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_9))) || ((!(((/* implicit */_Bool) (unsigned char)0))))));
        arr_5 [18LL] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((arr_0 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
    }
    var_14 = var_9;
    var_15 = ((/* implicit */long long int) (_Bool)0);
}
