/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143138
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
    var_17 = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383))) * (11484936345547134660ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (1891737361838960355LL))))))) > (((/* implicit */unsigned long long int) max((8388607LL), (min((8388614LL), (((/* implicit */long long int) var_15)))))))));
    var_18 = ((((/* implicit */_Bool) 6961807728162416975ULL)) ? (-8388614LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    var_19 = var_8;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) <= (((long long int) ((unsigned char) 11484936345547134656ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_2])) ? (-8388608LL) : (-8388639LL)))))) : (arr_5 [i_0] [i_1] [4U])));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) min((8388608LL), (((((/* implicit */_Bool) 2147483647)) ? (281474943156224LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -6512191944995794051LL))));
    }
}
