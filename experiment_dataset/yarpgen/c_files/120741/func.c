/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120741
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        arr_8 [(unsigned char)2] [16] [i_1] [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_3 - 2]) >> (((805247854) - (805247839)))));
                        var_16 &= ((/* implicit */unsigned char) -805247855);
                        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)144))));
                    }
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_5 - 1] = ((signed char) arr_11 [i_5 - 1] [i_0] [i_5 - 1] [i_5]);
                                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [0ULL] [i_1] [i_0]))) : (var_2)))) ? (((/* implicit */int) arr_7 [i_5 - 1] [i_5] [(unsigned char)18] [i_5 - 1] [i_5 - 1])) : (((((/* implicit */_Bool) 805247854)) ? (((/* implicit */int) arr_13 [10LL] [i_1] [(unsigned char)18] [(unsigned char)8] [i_1])) : (var_6)))));
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                                var_20 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_12)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [(_Bool)1] [i_2] [i_0]))))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */int) (unsigned char)122)) >> (((((/* implicit */int) (unsigned char)149)) - (121)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)92))))) ? (((unsigned int) -279994390)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [4ULL] [(_Bool)1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))));
    }
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)63))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) : (max((((((/* implicit */_Bool) -1305131405)) ? (var_14) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((signed char) 18014398508957696ULL))))))))));
}
