/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121380
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
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [(unsigned short)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) -28822233510841675LL)) ? (((((/* implicit */_Bool) max(((short)-15413), (((/* implicit */short) (unsigned char)255))))) ? (((/* implicit */int) (short)15413)) : ((~(((/* implicit */int) (_Bool)0)))))) : ((+(((/* implicit */int) (unsigned char)247))))));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max(((unsigned short)46627), (((/* implicit */unsigned short) (unsigned char)5)))), (((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)142)), ((short)-15413))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) : (((((((/* implicit */_Bool) (short)22509)) ? (140736951484416ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))))));
                arr_8 [i_0] = ((/* implicit */signed char) min((arr_0 [i_0] [i_1 + 1]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_1 + 1])) >= (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 3])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) max((var_10), (((/* implicit */unsigned short) (short)-26876))));
    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-59))));
}
