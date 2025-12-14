/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149059
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned short)0))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */short) ((int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
                    var_20 = ((/* implicit */short) var_17);
                    var_21 *= ((/* implicit */unsigned long long int) ((((((3041851290U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ? (1389078106U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    var_22 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */int) arr_7 [i_2])) > (((/* implicit */int) var_6)))) && (((/* implicit */_Bool) ((int) var_10)))))) >= (min(((~(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) arr_2 [i_1]))))));
                    var_23 = ((/* implicit */long long int) 2152937568U);
                }
            } 
        } 
    } 
}
