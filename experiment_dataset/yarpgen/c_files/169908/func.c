/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169908
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
    var_14 ^= ((/* implicit */unsigned int) (unsigned short)65535);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)116)) * (((/* implicit */int) (unsigned char)116))));
                var_16 = ((/* implicit */_Bool) ((long long int) (unsigned char)154));
                var_17 = ((/* implicit */int) ((max((min((var_12), (((/* implicit */long long int) (unsigned char)109)))), (((/* implicit */long long int) ((_Bool) (unsigned char)140))))) | (((/* implicit */long long int) (((~(((/* implicit */int) arr_2 [i_1] [i_1] [i_0])))) & (((/* implicit */int) ((arr_1 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
                var_18 = ((/* implicit */unsigned short) max((((/* implicit */short) (unsigned char)140)), ((short)32741)));
                arr_4 [i_0] [(signed char)17] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(arr_0 [i_1])))), (((arr_3 [i_0]) / (9223372036854775807LL)))));
            }
        } 
    } 
}
