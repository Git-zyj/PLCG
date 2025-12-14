/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123293
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
    var_20 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((var_12) / (((/* implicit */int) ((unsigned short) ((var_14) & (((/* implicit */unsigned long long int) 4559503595426973842LL))))))));
        var_21 += ((/* implicit */int) ((max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))), (((long long int) -2271383189453588403LL)))) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0 - 1] [i_0 - 2]))))));
        var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) arr_0 [4LL] [4LL]))));
        var_23 = ((/* implicit */long long int) ((min((arr_0 [i_0 - 2] [i_0 + 1]), (arr_0 [i_0 + 2] [i_0 + 1]))) ? ((+(var_12))) : (((((/* implicit */int) arr_2 [i_0 + 2])) * (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                {
                    var_24 += ((/* implicit */short) (+(((/* implicit */int) min((arr_6 [i_3 - 1]), (arr_10 [i_1] [i_2] [i_2] [i_3 - 1]))))));
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3])))), (((/* implicit */int) ((unsigned char) var_5)))));
                    var_25 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) 7U)) ? (18047751152223118069ULL) : (((/* implicit */unsigned long long int) 15)))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) arr_5 [i_3]))));
                    arr_13 [i_1] = ((/* implicit */long long int) var_18);
                    var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((1812719623) < (((/* implicit */int) (short)2598)))))));
                }
            } 
        } 
    } 
}
