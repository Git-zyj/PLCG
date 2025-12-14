/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100055
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
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)6))), (((unsigned long long int) (unsigned char)6))))));
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)6)), (8ULL))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)32427)) || (var_0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)31966)) : (((/* implicit */int) var_5))))) : ((+(var_9)))))), (min((((/* implicit */unsigned long long int) 352401315U)), (0ULL)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) 929094999U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_4 [i_1]))))) > (min((max((19U), (((/* implicit */unsigned int) var_3)))), (arr_4 [i_1])))));
                    var_13 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) >= (arr_0 [i_0]))))) + ((-(0ULL))))))));
                }
            } 
        } 
        var_14 -= var_2;
    }
    var_15 = ((/* implicit */unsigned long long int) ((((min((((/* implicit */unsigned long long int) (_Bool)1)), (2ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)93))))))) >= (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (var_8))))))));
}
