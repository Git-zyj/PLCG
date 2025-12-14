/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137823
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
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) var_15);
                    var_21 = ((unsigned int) (~(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_2])))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))) : (0U))), (((/* implicit */unsigned int) ((_Bool) (unsigned char)89))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        arr_12 [i_0 + 2] [i_1] [i_0] [i_3 + 1] [14U] [6U] &= ((/* implicit */unsigned int) arr_4 [i_0] [(short)11] [i_2]);
                        var_23 = ((/* implicit */_Bool) var_13);
                        arr_13 [i_0] [i_3] [0U] [i_0] [i_0 + 2] = ((/* implicit */int) ((long long int) (unsigned short)65523));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        arr_17 [i_0 + 2] [i_0 + 2] [i_2] &= ((/* implicit */_Bool) var_2);
                        arr_18 [i_0] [10] [i_0] [i_4] = ((/* implicit */short) ((unsigned int) (+(max((((/* implicit */unsigned long long int) arr_2 [i_2])), (1099511627744ULL))))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (unsigned char)161))));
                    }
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_15 [13] [i_0 + 2] [i_0 - 1]))));
                }
            } 
        } 
        var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) ((((var_8) & (((/* implicit */unsigned int) arr_2 [i_0])))) ^ (((/* implicit */unsigned int) arr_14 [i_0 + 2] [i_0 + 1] [10] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)89), ((unsigned char)188)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)193)))))))) : (max((((/* implicit */int) (unsigned char)167)), (arr_14 [i_0 - 2] [i_0] [(signed char)4] [i_0 + 1])))))));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)183)) | (((/* implicit */int) (_Bool)1))))))))));
    }
    var_28 = ((/* implicit */_Bool) var_8);
    var_29 = ((/* implicit */signed char) ((min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (13U))), (var_4))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
}
