/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15845
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
    var_13 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    arr_8 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0]);
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1]))) > (arr_2 [i_0 - 1] [(unsigned short)13])));
                    var_15 = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) arr_6 [i_0 + 1] [i_2 + 1] [i_2 - 2])))));
                    var_16 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)6750))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_9))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1]))) : (((var_0) & (((/* implicit */unsigned int) 15)))))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    var_18 = ((unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (-461429119)));
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_10 [i_0 + 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) / (var_5)));
                    arr_11 [i_0] [17ULL] [17LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)70))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) arr_10 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (_Bool)1))))));
                }
                arr_12 [i_0 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)35757))));
            }
        } 
    } 
}
