/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111729
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
    var_18 ^= ((/* implicit */unsigned char) max((((((((/* implicit */int) (signed char)100)) % (((/* implicit */int) var_14)))) / (((/* implicit */int) (signed char)103)))), (((/* implicit */int) max(((unsigned char)36), ((unsigned char)25))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */unsigned long long int) 5U)) : (0ULL))) | (((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */unsigned long long int) -5449879163833175058LL)) : (var_12)))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [(short)0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) & ((~(arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((((arr_0 [i_0] [i_0]) + (2147483647))) << (((((/* implicit */int) arr_1 [3U] [3U])) - (7542)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_0])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 16U)) : (18446741874686296064ULL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) | (var_12)));
            arr_8 [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-13345))));
            arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)87)) ^ (((/* implicit */int) arr_2 [i_0]))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)121))));
        arr_13 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_10 [i_2] [i_2]) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_2])))));
    }
}
