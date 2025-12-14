/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137343
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_17), (((/* implicit */short) (signed char)122))))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_6 [i_0]))))))))), (max((((/* implicit */unsigned long long int) var_5)), (((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))))))));
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((unsigned int) (_Bool)0)), (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))))))));
            var_22 = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_3)))));
            var_23 = ((/* implicit */long long int) var_11);
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) == (((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_5)) << (((arr_0 [i_1] [i_0]) - (4188528273U)))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 3; i_2 < 20; i_2 += 3) 
        {
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-2147483647 - 1)))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2 - 3])) ? (((/* implicit */int) arr_2 [i_2 - 3])) : (((/* implicit */int) arr_2 [i_2 - 1]))));
            arr_10 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        }
        var_26 = (-(max((((/* implicit */int) arr_2 [i_0])), ((~(((/* implicit */int) var_11)))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
        {
            arr_13 [i_3] = ((/* implicit */short) (~(max((((/* implicit */unsigned int) arr_1 [i_3 + 3] [i_0])), (arr_8 [i_3 + 4])))));
            var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) & (arr_9 [i_3 - 1] [i_3] [i_0])))), (((((/* implicit */_Bool) arr_9 [i_3 + 3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (7ULL)))));
        }
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned char) var_6))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_0])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))))) : (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_2)))))))));
        arr_15 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_9))));
    }
    var_28 = ((/* implicit */int) var_6);
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))) : (max((max((((/* implicit */unsigned long long int) var_6)), (16395583659527961903ULL))), (((/* implicit */unsigned long long int) var_6))))));
}
