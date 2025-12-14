/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137223
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
    var_15 += ((/* implicit */short) ((unsigned long long int) -8654181082879687149LL));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 += var_12;
                    arr_8 [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (arr_5 [i_1] [i_1] [i_1]))) <= (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
                    var_17 -= ((/* implicit */short) var_4);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_2);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -981367215))) ? (max((1666669684U), (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1142893323)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))))) / (min((((/* implicit */long long int) ((unsigned int) (unsigned short)24509))), ((+(-3184378166267749770LL)))))));
    var_20 = ((/* implicit */signed char) (+(((unsigned int) (-(-8654181082879687151LL))))));
}
