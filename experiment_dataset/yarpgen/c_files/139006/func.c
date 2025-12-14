/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139006
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
    var_14 += ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [21LL] [i_0] = 2147483647;
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1031656254)) ? (((/* implicit */int) arr_8 [15U] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2]))))) ? (((((/* implicit */_Bool) arr_8 [(signed char)17] [i_1] [i_2] [(unsigned short)16])) ? (((/* implicit */int) arr_8 [(short)23] [(short)10] [8ULL] [i_2])) : (-433827525))) : ((~(((/* implicit */int) (unsigned short)63342))))));
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (min(((+(((/* implicit */int) var_13)))), (((((/* implicit */_Bool) 2147483631)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))));
                    arr_11 [i_2] &= ((/* implicit */short) min(((-(((/* implicit */int) (unsigned char)9)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                }
            } 
        } 
    } 
}
