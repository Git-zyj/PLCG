/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14082
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
    var_14 -= ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [0ULL] = ((/* implicit */unsigned long long int) var_2);
                    var_15 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 2098813892)) || (((/* implicit */_Bool) var_0))))) > (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_8)))))));
                    var_16 = ((/* implicit */unsigned char) var_6);
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) == (var_11)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (var_1))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */int) var_7)) <= (((((var_12) >= (5596410269063146159ULL))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) < (9052038088266282199LL)))) : (((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)149)) == (((/* implicit */int) var_8))))) < (((/* implicit */int) var_0))));
}
