/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101410
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned short)5] [(signed char)2] = 692043616U;
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_13)) / ((+(((long long int) arr_1 [i_0 + 1] [0ULL]))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 + 1]))))) ? ((~(((/* implicit */int) arr_3 [i_0 + 2])))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)58266))))) > (((/* implicit */int) min((var_7), (var_3)))))))));
                var_17 ^= arr_4 [i_0];
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))))) != ((~(arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_19 = (short)22350;
}
