/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155463
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((var_8) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) >> (((((/* implicit */int) var_10)) / (((/* implicit */int) var_1)))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(signed char)3])) ? (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_7))) : (((/* implicit */unsigned int) ((arr_0 [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_1 [i_0])))))));
        var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (var_11)));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_14 += ((/* implicit */unsigned char) arr_4 [i_1]);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_8))));
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) var_5);
                            arr_16 [(_Bool)1] [(signed char)11] [(signed char)11] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)48224)) ^ (((/* implicit */int) (unsigned short)65533))));
                        }
                    } 
                } 
                arr_17 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_14 [i_1] [i_2] [i_1])) : (((/* implicit */int) var_3))));
            }
            arr_18 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)4)) | (((/* implicit */int) (unsigned char)4))))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned short)48225))));
        }
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? ((+(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [(unsigned char)18]))))) <= ((+(((/* implicit */int) arr_3 [i_1])))))))));
        arr_19 [i_1] [i_1] = ((/* implicit */short) (+(((arr_9 [(unsigned char)18] [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1]))))));
    }
    var_18 = ((/* implicit */_Bool) var_1);
}
