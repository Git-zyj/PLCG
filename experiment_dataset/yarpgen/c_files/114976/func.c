/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114976
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
    var_12 = ((((/* implicit */int) var_11)) == (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (8388607)))) && (((/* implicit */_Bool) max(((short)18390), (((/* implicit */short) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_3))))))))));
                arr_7 [i_1] = ((/* implicit */short) ((unsigned int) ((unsigned int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)39151))));
}
