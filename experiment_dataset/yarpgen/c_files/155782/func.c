/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155782
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) (~(max((arr_2 [i_0]), (arr_0 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0]))))) : (arr_0 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (var_9)))) ? (((arr_0 [i_0] [(_Bool)1]) | (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned char) 1889646894070697526LL)))))) ? (((((arr_2 [9LL]) != (((/* implicit */int) (unsigned short)0)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) != (((/* implicit */int) var_5)))) ? (((/* implicit */long long int) -949054726)) : (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) * (1073741823LL)))))))))));
            var_12 = min((((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_5 [i_1] [(unsigned short)8] [(unsigned short)8])) >> (((/* implicit */int) arr_1 [i_0])))))), ((~(((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 1] [i_1 - 1])))));
            arr_7 [i_0] = ((/* implicit */signed char) max((((long long int) arr_6 [i_1 - 4] [i_1])), (((long long int) var_1))));
            arr_8 [i_0] [i_0] [i_1 - 1] = ((/* implicit */long long int) var_2);
        }
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_6 [i_0] [(signed char)8])) && (((/* implicit */_Bool) (-2147483647 - 1))))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (1073741823LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (var_4)));
    }
    var_14 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((var_4) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) var_9))))) ? ((((+(-49951904))) ^ (((((/* implicit */_Bool) 708931191366251762ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))) : (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)51)))) ? (min((((/* implicit */int) var_8)), (var_9))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9)))))))));
    var_15 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((var_9), (((/* implicit */int) (short)-23156))))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (var_9)))))));
    var_16 = ((/* implicit */unsigned char) var_3);
}
