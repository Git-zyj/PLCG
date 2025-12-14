/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172615
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
    var_15 = ((/* implicit */signed char) (((((-(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (var_7))))) == (((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */int) ((unsigned short) 1787168591U))) : (((/* implicit */int) ((2036424738705069983ULL) <= (((/* implicit */unsigned long long int) var_2)))))))));
    var_16 = ((/* implicit */int) var_4);
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61361)) || (((/* implicit */_Bool) -632948586))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((((/* implicit */signed char) arr_0 [i_1 + 1])), ((signed char)-10)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)15]))) > (16410319335004481633ULL)))) : (((/* implicit */int) arr_2 [i_0]))))));
                    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-10))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)32)) && (((/* implicit */_Bool) 2249439510403609282LL))))))));
}
