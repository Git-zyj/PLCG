/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149123
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
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-2147483641)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17592186044415ULL)))))) : ((+(18446726481523507200ULL))))))));
    var_15 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = min((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36508))) != (18446726481523507200ULL))))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                var_17 += ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446726481523507200ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_4 [i_0] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) var_13))))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) 17592186044395ULL))));
            }
        } 
    } 
    var_19 -= var_7;
}
