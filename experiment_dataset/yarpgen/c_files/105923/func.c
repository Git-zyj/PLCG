/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105923
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
    var_11 = ((/* implicit */_Bool) var_0);
    var_12 = ((/* implicit */_Bool) var_10);
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((820244760U) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((var_1) + (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_4 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)109))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_6 [i_1]), (var_7)))), (arr_1 [i_0 + 2]))))));
                    arr_9 [i_0] [i_0] [(signed char)14] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? ((-(1875130842U))) : (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [(_Bool)1])))))));
                    arr_10 [i_0] [i_1] [i_1] = (unsigned char)118;
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)105);
        arr_12 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_6)) - (((/* implicit */int) arr_2 [i_0 - 3])))), (((int) arr_2 [i_0 - 3]))));
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_1 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (9005010823690990006LL) : (((/* implicit */long long int) 714991004))))) ? (-190682919) : (((/* implicit */int) (signed char)-71)))))));
        var_15 = ((/* implicit */int) var_9);
        var_16 = var_5;
        arr_15 [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_3])) / (((/* implicit */int) (unsigned char)150)))) == (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3])) ? (((((/* implicit */int) (unsigned char)98)) - (((/* implicit */int) (unsigned char)77)))) : (((/* implicit */int) max((arr_3 [i_3]), (((/* implicit */short) (_Bool)1)))))))));
    }
}
