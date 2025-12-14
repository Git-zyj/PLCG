/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108482
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
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] = arr_1 [i_0];
                arr_6 [i_1] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) min((var_8), (var_8)))), (min((var_6), ((unsigned char)255)))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)31)), (9361057013162208834ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-1) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)174)))) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_13 -= var_6;
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((2356033824U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195)))))))) != (var_3)));
}
