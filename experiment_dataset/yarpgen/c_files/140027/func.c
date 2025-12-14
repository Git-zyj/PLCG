/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140027
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (~(0U)));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) << (((((/* implicit */int) arr_2 [i_0])) - (69))))) ^ (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)145))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) min(((+(arr_9 [i_2] [i_1] [i_2] [i_2]))), (min((arr_9 [i_0] [16U] [i_1] [i_2]), (arr_9 [i_2] [i_1] [i_1] [i_0])))));
                    arr_11 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_8 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_2] [i_2])))))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_15 [i_3] [i_3] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_14 [i_3])), (arr_13 [i_3] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) : (((((/* implicit */_Bool) arr_14 [3U])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)125))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 946470214)) ? (820630096) : (((/* implicit */int) (unsigned char)246)))), (((/* implicit */int) (signed char)127))))) : ((+(max((arr_13 [i_3] [(signed char)10]), (4294967281U))))));
        arr_16 [i_3] [i_3] = max((min((arr_13 [i_3] [i_3]), (((/* implicit */unsigned int) (unsigned char)76)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3]))))));
        arr_17 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2511543940U)));
    }
    var_15 = (!(((/* implicit */_Bool) var_9)));
}
