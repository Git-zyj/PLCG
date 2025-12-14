/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178515
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
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                var_10 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? ((~(var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((max((4708032961071902207LL), (4708032961071902207LL))) - (4708032961071902206LL)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned short)46220)) : ((-(((/* implicit */int) (unsigned char)59)))))) : (((/* implicit */int) (unsigned char)126))));
                    var_12 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-23851)) : (((/* implicit */int) (unsigned short)33919))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31616)) | (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 700645001U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23843))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                }
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned char) var_2);
}
