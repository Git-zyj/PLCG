/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126691
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)1] [i_1])))))) ? (((/* implicit */long long int) arr_3 [i_0] [i_0])) : (arr_0 [i_1])));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned char) (+(max((arr_8 [i_2] [i_2 + 2] [i_2 - 2] [i_2 - 1]), (((/* implicit */long long int) ((var_5) / (arr_3 [i_1] [i_2]))))))));
                    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */int) var_8)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1] [i_2])))))));
                }
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!((((_Bool)0) && ((_Bool)0))))))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (~(arr_8 [1LL] [i_1] [i_1] [i_3])))), (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1]))))))))));
                    var_18 = ((/* implicit */unsigned long long int) (-(arr_0 [i_0])));
                    arr_11 [i_3] = var_3;
                }
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_10);
}
