/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141708
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
    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max(((unsigned char)164), ((unsigned char)213)))) : (var_5))) : (((/* implicit */int) var_2))));
    var_17 ^= ((/* implicit */signed char) (+((-(-1694298420)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [21U] [i_0] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (2311293071U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))));
                        arr_11 [i_3] [i_0] [(unsigned char)8] [22LL] [(unsigned char)0] [i_0] |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_6)) ? (753973990) : (-753973988)))));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
                        var_18 = ((unsigned char) -753973997);
                        arr_13 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
        } 
        arr_14 [(unsigned char)18] = ((/* implicit */unsigned char) 8960840112842020906LL);
    }
}
