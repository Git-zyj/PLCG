/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16509
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
    var_15 += ((/* implicit */unsigned short) (~(max((1087411400), (min((((/* implicit */int) (signed char)-121)), (-1087411386)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) max(((-(((1087411372) >> (((((/* implicit */int) (signed char)-60)) + (67))))))), (min((-1087411400), (((/* implicit */int) (unsigned short)61898))))));
        var_17 = max((((/* implicit */long long int) (+(max((640902302U), (((/* implicit */unsigned int) -1087411399))))))), (max((max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)39336))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */unsigned int) (~(1087411400)));
                    arr_7 [i_0] [i_0] [i_0] = max((((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0 - 1] [i_2] [i_2]))) ? (((((/* implicit */_Bool) (short)-24689)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_2]))) : (-6699481655842888453LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))))), (((/* implicit */long long int) arr_2 [i_0] [i_1])));
                }
            } 
        } 
    }
}
