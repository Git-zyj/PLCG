/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127027
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
    var_18 = ((/* implicit */_Bool) max((var_18), ((!(((/* implicit */_Bool) (+(var_2))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(-7275641794943536031LL)));
        var_19 ^= ((/* implicit */unsigned char) var_17);
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_10 [i_2] [i_1] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [i_2])))) ? ((~((~(var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))))))));
                var_20 = ((/* implicit */short) max((((/* implicit */unsigned short) max((arr_6 [i_2] [i_1]), (((signed char) var_7))))), (var_17)));
                arr_11 [i_2] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) 9007199254740991ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (-7275641794943536031LL))), (((/* implicit */long long int) ((int) 7275641794943536031LL))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_2]), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2]))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                var_21 = ((/* implicit */signed char) ((_Bool) arr_9 [i_2] [i_2]));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) var_12)) & (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_2)))))))))));
    var_23 = ((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) var_9))));
}
