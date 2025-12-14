/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117086
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
    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)79)) ^ (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned long long int) var_7)) | (var_9))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)27670)) : (((/* implicit */int) var_4))))), (var_2)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))), (arr_1 [i_1 - 3] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27670))) / (arr_3 [11LL] [5LL] [(unsigned char)5])))) ? (max((((/* implicit */unsigned long long int) (unsigned char)85)), (13803562827651210667ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_1 - 3]))))));
                var_17 -= ((/* implicit */unsigned int) arr_3 [i_1 - 2] [i_1] [i_1]);
                var_18 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_1 [(_Bool)1] [i_1])) & (arr_3 [i_0] [9ULL] [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                arr_6 [i_0] = ((unsigned int) ((_Bool) arr_2 [i_0]));
                var_19 &= ((/* implicit */_Bool) max(((~(arr_0 [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 2147483647))) ? (max((3001407532536827480ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)176)) ^ (((/* implicit */int) (_Bool)0)))))))) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % ((~(((/* implicit */int) (short)-27670)))))))));
}
