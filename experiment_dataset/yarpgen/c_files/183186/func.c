/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183186
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((max((((/* implicit */long long int) var_4)), (7756885259959066052LL))) ^ (((-7756885259959066052LL) - (-7756885259959066033LL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_0 + 2])))));
                    var_14 = (!(((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (2061584302080LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((short) 15684988648161762259ULL)))))));
                }
                arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_2 [i_0]) == (arr_2 [i_0])))) - (max((((/* implicit */int) max((arr_7 [i_0]), (arr_1 [i_0] [i_1 + 1])))), (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) * (((/* implicit */int) var_4))))))));
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) ((short) arr_3 [i_0] [i_0]));
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_10);
}
