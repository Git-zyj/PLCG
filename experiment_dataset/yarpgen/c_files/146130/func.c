/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146130
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
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_12 = ((((/* implicit */_Bool) 4664056109225057902ULL)) ? (((/* implicit */int) (signed char)127)) : (-2066060458));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_5 [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned short)36041))))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (4080) : (((/* implicit */int) arr_3 [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (min((((/* implicit */int) var_4)), (2066060458))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_11 [i_2] [i_2] [i_3] = ((/* implicit */short) var_7);
                arr_12 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 7684695007482418048ULL))));
            }
            arr_13 [i_1] [2] [i_2] = ((/* implicit */unsigned char) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((3027372751U), (((/* implicit */unsigned int) (short)7902)))))))))));
            var_13 -= (~(((/* implicit */int) ((((/* implicit */int) var_9)) == ((~(((/* implicit */int) var_4))))))));
        }
    }
}
