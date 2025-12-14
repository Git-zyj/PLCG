/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139361
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (max((var_0), (((/* implicit */long long int) var_1))))))) > (var_9)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)135)), ((-(min((((/* implicit */long long int) (unsigned short)34747)), (arr_3 [(unsigned char)6])))))));
                arr_4 [0LL] &= ((/* implicit */unsigned char) ((-487899460) > (((/* implicit */int) (_Bool)0))));
                var_16 += ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned char) ((arr_3 [(unsigned short)14]) > (arr_3 [(unsigned short)4])))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((max((arr_3 [i_1]), (((/* implicit */long long int) arr_6 [i_0])))) > (max((((/* implicit */long long int) arr_6 [i_1])), (arr_3 [i_1]))))))) > (arr_3 [i_1])));
                    arr_8 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) min((arr_5 [i_0]), (arr_5 [i_0])))) > (((/* implicit */int) ((arr_2 [i_0] [i_1]) > (arr_2 [i_1] [i_2]))))))) > (((/* implicit */int) arr_1 [i_2]))));
                    var_17 = ((/* implicit */unsigned short) min((arr_3 [i_1]), (((/* implicit */long long int) ((min((arr_3 [i_1]), (((/* implicit */long long int) arr_5 [i_1])))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))))));
                    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_1]))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (-(var_10)));
}
