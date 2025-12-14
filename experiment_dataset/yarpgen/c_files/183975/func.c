/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183975
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */signed char) 13900275592103001311ULL);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_9))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(13900275592103001311ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4546468481606550316ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (13900275592103001321ULL)))))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (signed char)84))));
                    arr_9 [(signed char)8] [(signed char)4] [(signed char)8] [(signed char)8] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967285U)) || (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_1 [(unsigned char)4]))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)8040)) > (((/* implicit */int) (unsigned short)55359)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) arr_11 [i_2])) > (var_9)))))));
                        var_20 = ((/* implicit */unsigned int) arr_0 [i_3]);
                    }
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) (unsigned short)10191);
    var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_9)))) || (((((/* implicit */long long int) ((/* implicit */int) var_4))) > (var_9))))))) > (var_10));
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_7))));
}
