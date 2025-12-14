/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102866
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
    var_19 = (~(((unsigned int) ((((((/* implicit */int) (signed char)-99)) + (2147483647))) << (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0]);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) arr_0 [i_2]);
                            /* LoopSeq 1 */
                            for (int i_4 = 3; i_4 < 24; i_4 += 2) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2 + 1] [i_3] [i_4 + 1])) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_4])) || (((/* implicit */_Bool) var_0)))))))));
                                arr_16 [i_0] [i_4] [i_4] [i_0] [i_4] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0 + 2]) != (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))) - (max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0 + 1])))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (10829267705263333203ULL) : (max((7617476368446218412ULL), (((/* implicit */unsigned long long int) (unsigned char)232))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */unsigned long long int) (~(var_1)))) + (max((((/* implicit */unsigned long long int) var_13)), (10829267705263333214ULL)))))));
                            }
                            arr_17 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_10 [i_0] [i_1] [i_2] [i_3])));
                            var_21 = ((/* implicit */unsigned short) arr_12 [i_0] [i_2] [i_1] [i_0] [i_0]);
                            arr_18 [i_1] [i_3] [i_2] [i_0] = ((/* implicit */int) min((max((min((var_11), (((/* implicit */unsigned int) arr_7 [i_3] [i_2] [i_0])))), (((var_10) ? (var_16) : (arr_12 [i_0] [i_0] [i_2] [i_2] [i_0]))))), (((/* implicit */unsigned int) var_17))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = var_9;
}
