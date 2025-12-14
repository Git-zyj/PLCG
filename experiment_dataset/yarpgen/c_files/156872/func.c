/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156872
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
    var_13 = ((/* implicit */unsigned char) 584367773);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) 5121707733536863662ULL);
                    var_15 = ((/* implicit */short) arr_2 [i_2] [i_1]);
                    var_16 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (unsigned short)0)))))) ? (((/* implicit */int) ((unsigned short) ((unsigned int) arr_0 [i_0])))) : (((/* implicit */int) ((signed char) (unsigned short)65528))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_7)) : (var_9)))));
    var_18 -= ((/* implicit */unsigned char) max((var_3), ((+((+(var_3)))))));
}
