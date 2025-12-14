/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18461
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 3] [(short)1])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1])))) & ((-(((/* implicit */int) arr_3 [i_0] [(unsigned short)2] [(signed char)12]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 1611213892)) || (((/* implicit */_Bool) -2739723481608986951LL))))), (((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_1] [(signed char)2] [i_3])))))) : (min((arr_9 [i_2] [i_3] [i_2] [i_3]), (2739723481608986950LL)))))));
                            arr_10 [i_3] [i_3] [3U] [i_3] = ((/* implicit */unsigned int) (_Bool)0);
                            var_22 += ((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [10U] [i_3 - 1] [i_1 + 1]), (arr_4 [i_0] [i_3 + 2] [i_1 + 1])))) ? (((((((/* implicit */int) var_5)) != (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (2739723481608986950LL))) : (((/* implicit */long long int) arr_7 [i_0] [i_1 - 1] [i_0] [(_Bool)1])))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)0)))) != (((((/* implicit */_Bool) var_15)) ? (2849596686U) : (var_17))))))) < (((((/* implicit */long long int) var_17)) % ((((_Bool)1) ? (-2739723481608986963LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_24 &= ((/* implicit */short) ((((_Bool) (!(((/* implicit */_Bool) var_16))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2739723481608986951LL))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (-2739723481608986950LL) : (((/* implicit */long long int) 3092784705U)))) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)45891)) | (((/* implicit */int) var_10))))))))));
}
