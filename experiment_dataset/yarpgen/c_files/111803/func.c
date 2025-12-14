/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111803
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
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) min((max((var_1), (((/* implicit */short) (_Bool)1)))), ((short)-26217))))));
    var_19 = ((/* implicit */short) var_6);
    var_20 = 18446744073709551606ULL;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((max((max((arr_1 [(signed char)14]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned int) (!((_Bool)1)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(signed char)19] [(signed char)19])) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (signed char)123)) : ((~(((/* implicit */int) (short)26188))))))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)26216)) / (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 1]))))))));
                    var_21 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) arr_6 [i_0])), (arr_1 [i_1])))));
                }
            } 
        } 
    }
}
