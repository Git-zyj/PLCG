/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151091
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
    var_15 &= ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((1686597654U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) 1686597654U))), (((((/* implicit */int) (_Bool)0)) ^ ((~(((/* implicit */int) arr_2 [i_0]))))))));
    }
    var_16 &= ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                {
                    arr_14 [i_2] [i_3] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)215)) && (((/* implicit */_Bool) arr_10 [i_1] [i_2])))))));
                    arr_15 [10LL] [i_2] [i_3] = ((/* implicit */unsigned char) (-(arr_6 [i_1])));
                    arr_16 [8LL] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)63)) << (((var_8) - (8970383304135279707LL)))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16106)) ? (arr_7 [i_3 - 1]) : (((/* implicit */int) (unsigned char)40)))))));
                    arr_17 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (~(arr_6 [i_3 + 1])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) | (var_2)))) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (var_3) : ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (3298155065903150134LL) : (var_0))))) != (((/* implicit */long long int) max((((((/* implicit */int) var_4)) / (((/* implicit */int) var_1)))), (((/* implicit */int) var_1)))))));
}
