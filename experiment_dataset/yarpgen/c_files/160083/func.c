/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160083
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
    var_20 = ((/* implicit */signed char) 122880);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_12))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) -659530517)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (1765501341293740916LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */int) var_11))))) : ((~(10715968730002190028ULL))))))))));
                    arr_6 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
    var_23 ^= ((/* implicit */int) ((((((/* implicit */_Bool) 610311502)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (signed char)112))))) : (0LL))) % (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (var_0)))))) : (((/* implicit */int) var_2))));
}
