/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110174
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
    var_19 |= ((/* implicit */int) var_4);
    var_20 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) var_9)))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0 - 4] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0]))))) & (((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_0] [i_0 + 4] [i_0] [(signed char)6] [i_0] [i_0]))))) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_2 [i_2])))) : ((-(((/* implicit */int) arr_0 [i_0]))))))));
                        arr_12 [i_3] [i_2] [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0 + 3] [i_0 + 2] [6] [8] [i_0 - 4] [i_0]);
                        var_22 = ((/* implicit */unsigned char) arr_8 [i_2] [i_2] [i_3 + 1] [i_3]);
                        var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_0 [i_1])))), ((~(((/* implicit */int) arr_0 [i_0 + 2]))))))) ? (((unsigned int) (unsigned short)60292)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 15519609028297355452ULL)) ? ((~(((/* implicit */int) (unsigned short)60303)))) : (((/* implicit */int) arr_2 [0U])))))));
                        var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_0] [i_1 + 1] [i_0]))) & (((unsigned long long int) (unsigned short)5233)));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) (+(arr_4 [i_0 + 3])))) + (((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
        var_25 = ((/* implicit */unsigned short) var_16);
    }
    var_26 = ((/* implicit */int) max((var_26), (var_18)));
}
