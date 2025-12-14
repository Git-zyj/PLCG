/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154744
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            arr_4 [(unsigned short)0] |= ((/* implicit */short) var_10);
            var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1307168743)) ? (0LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)27970))) / (arr_2 [i_1]))))));
        }
        arr_5 [(_Bool)1] &= ((/* implicit */unsigned long long int) var_6);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 -= ((/* implicit */short) max((((((/* implicit */int) (unsigned char)55)) & (((/* implicit */int) arr_7 [i_2])))), (((((((/* implicit */int) arr_6 [i_2] [i_2])) >= (((/* implicit */int) (unsigned char)181)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) arr_6 [15U] [5ULL])) : (((/* implicit */int) var_15))))))));
        arr_8 [(signed char)2] &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) != (((/* implicit */int) arr_7 [i_2]))))) << (((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)181))))) ? (max((2042465906), (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_4)))) - (2042465899)))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((2042465903) << (((max((-2042465903), (((/* implicit */int) min(((short)15372), ((short)30)))))) - (30)))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-32)) + (2147483647))) << (((/* implicit */int) arr_10 [i_3]))));
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)181)) | (((/* implicit */int) (unsigned char)135))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 3) 
    {
        var_22 ^= ((/* implicit */long long int) ((((var_8) >= (((/* implicit */unsigned int) -2042465906)))) ? (((((/* implicit */int) var_18)) ^ (((/* implicit */int) var_16)))) : (((((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1])) & (((/* implicit */int) var_14))))));
        var_23 *= ((/* implicit */long long int) ((_Bool) (unsigned short)65526));
    }
    var_24 *= ((/* implicit */unsigned short) max((((min((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))) & (10916101147618022925ULL))), (min((((((/* implicit */unsigned long long int) var_0)) * (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (512067289U))))))));
    var_25 -= ((/* implicit */_Bool) var_8);
    var_26 = ((/* implicit */unsigned long long int) var_14);
}
