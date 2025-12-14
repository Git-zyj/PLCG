/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104183
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) % (((/* implicit */int) ((arr_1 [i_0]) >= (((/* implicit */int) (short)8)))))));
                arr_5 [i_0] [16ULL] = ((/* implicit */_Bool) var_9);
                arr_6 [i_0] [12ULL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((unsigned long long int) arr_0 [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_10)))))))) && (((/* implicit */_Bool) ((((2175569953U) == (((/* implicit */unsigned int) -1150224194)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))))))));
                arr_7 [(_Bool)1] = ((/* implicit */_Bool) ((unsigned char) (-((~(((/* implicit */int) var_8)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) || ((!(((/* implicit */_Bool) var_1))))))) : (((/* implicit */int) var_11))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_5))))) % (((/* implicit */int) ((((/* implicit */int) (unsigned char)191)) >= (((/* implicit */int) var_2)))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (var_6)))) || (((/* implicit */_Bool) var_4)))))));
}
