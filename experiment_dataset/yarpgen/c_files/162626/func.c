/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162626
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) arr_1 [(_Bool)1]);
        arr_3 [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((18446744073709551611ULL) > (((/* implicit */unsigned long long int) 9223372036854775807LL))))))) | (max((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_10)))), (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 = var_14;
                    arr_9 [i_0] [1LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) * (18446744073709551611ULL)));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)32755)) >> (((var_13) + (1012459079))))) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) (unsigned char)63))))) && ((_Bool)1))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) + (min((((/* implicit */unsigned long long int) (_Bool)1)), (1353614925389688029ULL)))))) ? (((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << (((/* implicit */int) (unsigned char)0)))) : (((((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) (short)15360)) : (((/* implicit */int) var_16)))) | (((/* implicit */int) arr_2 [i_0]))))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_9);
}
