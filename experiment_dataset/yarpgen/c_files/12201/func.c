/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12201
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
    var_14 = var_3;
    var_15 = ((/* implicit */unsigned char) (-(var_5)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (arr_1 [7ULL] [i_2]) : (arr_1 [i_0 - 3] [i_1 + 2]))), (var_7)));
                    var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) var_5)), (min((((/* implicit */unsigned int) (+(var_7)))), ((+(1196096115U)))))));
                    arr_9 [i_0] [i_0 + 1] [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (signed char)120))) ? (min(((+(arr_0 [i_0]))), (((/* implicit */long long int) (-(25165824)))))) : (((/* implicit */long long int) min((max((1001348538), (((/* implicit */int) arr_2 [i_0] [i_0])))), (min((var_3), (((/* implicit */int) (short)21824)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 4; i_3 < 8; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_16 [i_4] = ((/* implicit */signed char) arr_15 [i_3 - 4]);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) arr_10 [i_4] [9])), (var_0))), (((/* implicit */unsigned int) min((arr_3 [i_3]), (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) var_8)) : ((-(((((/* implicit */_Bool) (unsigned short)34697)) ? (12007826087301914869ULL) : (((/* implicit */unsigned long long int) 470131737U))))))));
            }
        } 
    } 
}
