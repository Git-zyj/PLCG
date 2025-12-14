/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177571
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
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((unsigned int) arr_4 [i_1] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned char) arr_0 [i_1]))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 13967429511009329076ULL)) ? (arr_8 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) 0))))), (min((((/* implicit */long long int) (!((_Bool)1)))), (arr_3 [i_0] [0] [13LL])))));
                    arr_10 [i_1] = ((/* implicit */signed char) ((max((arr_3 [13] [i_0 + 1] [i_0 + 1]), (((/* implicit */long long int) max((280538646U), (((/* implicit */unsigned int) (short)18969))))))) * (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                }
                for (int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) max((var_10), (((/* implicit */unsigned short) arr_11 [i_0] [9LL] [i_0]))))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_5) : (((/* implicit */long long int) 4014428628U)))))) + (((/* implicit */long long int) 5))));
                    var_12 = ((/* implicit */unsigned char) (_Bool)1);
                }
            }
        } 
    } 
    var_13 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) 2831704096U))));
}
