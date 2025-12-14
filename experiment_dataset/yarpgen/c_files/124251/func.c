/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124251
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
    var_11 = ((/* implicit */signed char) max((((/* implicit */long long int) min(((((_Bool)0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_9))))), (max((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned char) (_Bool)1))))), (min((((/* implicit */long long int) (_Bool)1)), (-33477933603038540LL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1685943924)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_12 -= ((/* implicit */_Bool) var_6);
        var_13 = ((/* implicit */unsigned int) var_4);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((-786016479) | (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_1] [i_2] = (+(((/* implicit */int) arr_7 [i_2] [i_2 - 3] [i_2] [i_2])));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) var_3);
        var_16 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_3])) ? (var_6) : (((/* implicit */int) (_Bool)1)))), (min(((-(((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3])))), ((+(((/* implicit */int) arr_3 [i_3]))))))));
    }
}
