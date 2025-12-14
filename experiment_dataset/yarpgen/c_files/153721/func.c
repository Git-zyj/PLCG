/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153721
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
    var_10 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) % ((((!(((/* implicit */_Bool) (unsigned short)11528)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)54038)) ^ (((/* implicit */int) (signed char)0)))))))));
        var_11 = ((/* implicit */unsigned int) max((var_11), ((-(((((/* implicit */_Bool) 1015821124166951518LL)) ? (((/* implicit */unsigned int) ((var_5) / (((/* implicit */int) (short)24095))))) : (((arr_0 [i_0]) - (arr_0 [1ULL])))))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) || (((((/* implicit */_Bool) -1015821124166951518LL)) || (((/* implicit */_Bool) min((var_5), (-934534971))))))));
    }
    var_12 = ((/* implicit */short) max((min((((unsigned short) -756228275)), (((/* implicit */unsigned short) (signed char)-80)))), (((/* implicit */unsigned short) (signed char)79))));
    var_13 = ((/* implicit */int) 17137338957396601168ULL);
}
