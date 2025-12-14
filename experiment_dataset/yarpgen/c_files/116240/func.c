/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116240
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
    var_12 = ((/* implicit */_Bool) min((min((((/* implicit */int) max((((/* implicit */short) (unsigned char)31)), ((short)28840)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)28840)))))), (((/* implicit */int) (((~(((/* implicit */int) var_8)))) >= ((+(((/* implicit */int) (unsigned short)0)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1]))) == (max((-7305719304167138244LL), (-4131290852293701588LL))))))));
                arr_6 [8] [i_1] [(short)12] |= ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) ((-1438171695) < (((/* implicit */int) (unsigned short)56003))))) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_7);
    var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_10)))));
}
