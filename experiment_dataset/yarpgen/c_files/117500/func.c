/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117500
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
    var_20 = ((/* implicit */signed char) max((6819301539874791808ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (556572035) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 2]))))) > ((+(var_5)))))) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) ((var_6) != (((/* implicit */int) var_18))))))))));
                arr_7 [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 158591929725877470ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-71))))));
                arr_8 [i_0 - 3] [0] = ((/* implicit */unsigned int) -7800911270487273041LL);
                arr_9 [1ULL] [1ULL] [i_0] = ((/* implicit */unsigned short) arr_3 [(signed char)9] [i_0] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) var_3))))) && (((min((((/* implicit */unsigned long long int) 399582729)), (var_13))) < (max((851019119367697660ULL), (((/* implicit */unsigned long long int) (short)32737))))))));
}
