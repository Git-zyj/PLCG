/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126496
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
    var_13 = (+((((-(var_1))) + (((/* implicit */long long int) ((/* implicit */int) var_6))))));
    var_14 = ((/* implicit */int) max((7724377320633810702ULL), (((/* implicit */unsigned long long int) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 10722366753075740931ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_0 + 1] [i_1 + 1])) : (13980305881157735763ULL))) == (min((((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_0 + 1] [i_1 - 1])), (10722366753075740939ULL)))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10722366753075740931ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : ((+(arr_0 [i_1])))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (short)6241);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    var_17 = ((/* implicit */int) max((10722366753075740927ULL), (7724377320633810684ULL)));
                    arr_9 [i_0] [i_0 - 1] [i_2] [i_0] = ((/* implicit */unsigned int) arr_3 [i_1]);
                }
            }
        } 
    } 
}
