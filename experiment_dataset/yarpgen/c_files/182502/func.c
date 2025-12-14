/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182502
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
    var_10 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) min((min((1519151687U), (((/* implicit */unsigned int) -1250825204)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [(unsigned char)10]))) - (((((/* implicit */unsigned int) arr_4 [i_0])) * (arr_10 [i_0] [(_Bool)0] [i_0] [i_0] [5])))))));
                                arr_11 [(unsigned short)4] [i_0] [(_Bool)1] [i_0] [i_3] [(unsigned char)2] = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) max((arr_10 [i_0] [(unsigned short)16] [i_0] [(unsigned char)16] [2U]), (arr_10 [i_1] [i_1] [i_0] [21] [i_4])))))), ((!(((/* implicit */_Bool) ((arr_0 [i_0] [i_2]) - (arr_3 [i_0]))))))));
                                var_12 = min((min((arr_4 [i_0]), (((int) arr_2 [i_3] [(_Bool)1])))), ((-(min((arr_0 [i_0] [i_0]), (arr_3 [i_0]))))));
                                var_13 = ((/* implicit */long long int) arr_1 [20]);
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [(unsigned char)0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0] [i_0 - 2] [i_0] [i_1]);
                var_14 = max((((((/* implicit */int) ((unsigned short) arr_3 [i_0]))) + (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0] [i_0])))), ((~(((/* implicit */int) ((unsigned short) (_Bool)0))))));
                arr_13 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned char)231), (((/* implicit */unsigned char) (_Bool)1)))))));
                var_15 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_6 [(unsigned char)2] [i_0] [i_0] [i_0] [i_1] [(unsigned short)11]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_7);
}
