/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15962
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
    var_14 = ((((/* implicit */_Bool) ((((-1792054585) / (((/* implicit */int) var_4)))) - (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) (((-(var_8))) <= (var_6)))));
    var_15 = ((/* implicit */signed char) -1073803480);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) || (((/* implicit */_Bool) ((var_9) % (arr_1 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1 - 1] = ((/* implicit */unsigned int) ((short) var_9));
        var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2])))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_4))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_18 = ((/* implicit */_Bool) (~(((2814959667U) >> (((1792054584) - (1792054571)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                for (int i_4 = 3; i_4 < 14; i_4 += 4) 
                {
                    {
                        arr_16 [i_2] [i_3] [i_4] |= ((/* implicit */unsigned int) arr_13 [i_4] [i_3] [i_3] [i_2] [i_1 + 2]);
                        var_19 = (unsigned short)25;
                        arr_17 [i_1] [4ULL] [4ULL] [i_1] [2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)87)))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */_Bool) (-(((int) (signed char)100))));
        }
        arr_18 [i_1 - 2] |= ((/* implicit */int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) -578738698)) ? (((/* implicit */int) var_4)) : (var_10))))) == (((/* implicit */int) var_1))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_6)))) ? (var_6) : (((/* implicit */unsigned long long int) var_3))));
    var_22 = ((/* implicit */signed char) var_3);
}
