/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101729
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1271785001U)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) ((((/* implicit */_Bool) 1271784987U)) || (((/* implicit */_Bool) max(((short)0), ((short)4621)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((short) ((((arr_1 [i_0] [i_1]) + (2147483647))) << (((((arr_1 [i_1] [i_0]) + (1354963562))) - (10))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)103)), ((unsigned char)216))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) (unsigned char)207));
            }
        } 
    } 
}
