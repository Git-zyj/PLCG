/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113578
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
    var_10 |= ((/* implicit */unsigned long long int) var_9);
    var_11 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)203))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0 - 2] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((570340632U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))))))));
                    var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_2 [i_1 - 1] [i_1 - 2] [i_0 - 2])))) ? ((+(((((/* implicit */_Bool) arr_3 [i_1] [(signed char)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) : (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1717489718))))));
                    arr_7 [i_0 + 1] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min(((short)-30879), (((/* implicit */short) (signed char)53))))), (max((((/* implicit */long long int) arr_5 [i_0 - 1] [i_0] [i_0 + 2])), (arr_4 [i_0] [i_1 - 2])))))), (max((((unsigned long long int) 570340632U)), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0] [i_2]) != (((/* implicit */int) (short)28432)))))))));
                    var_13 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((2641602524678791160LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) == (((/* implicit */int) (unsigned short)49829)))))))) <= (max((max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (arr_4 [i_1] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(short)5] [(short)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1]))) : (arr_1 [i_1 - 2] [i_0]))))))));
                }
            } 
        } 
    } 
    var_14 = (+(min((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))));
}
