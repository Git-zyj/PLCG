/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167430
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (-8546769150641362584LL)));
    var_17 = ((/* implicit */short) var_0);
    var_18 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_8))))) ? (8546769150641362607LL) : (((/* implicit */long long int) ((int) 3928111138U))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (arr_1 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111)))))) ? (((/* implicit */unsigned long long int) (~(8546769150641362612LL)))) : ((~(arr_1 [i_0] [i_1])))));
                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((1556115049U), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */long long int) -895784171)) : ((+(9223372036854775778LL))))) <= (((/* implicit */long long int) min((2738852242U), (arr_2 [i_1]))))));
            }
        } 
    } 
}
