/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156394
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 24; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [i_0]);
                    var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((373567640U), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)32587)))))))) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)52856))))), (arr_5 [i_2 - 1] [i_0]))) : ((~((~(3508058507U)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_8 [i_4]))))) * (arr_17 [i_7] [i_6] [i_3] [i_4] [i_3]))))));
                                var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_3] [i_6] [i_5])) ? (((/* implicit */int) arr_6 [i_3])) : (((((/* implicit */_Bool) min((arr_0 [(unsigned short)3]), (((/* implicit */unsigned short) arr_11 [i_6] [i_6]))))) ? ((~(((/* implicit */int) (unsigned char)29)))) : ((~(((/* implicit */int) (_Bool)1))))))));
                                arr_23 [i_3] [i_5] [15U] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)24914))));
                            }
                        } 
                    } 
                } 
                var_15 = (!(arr_11 [(signed char)19] [i_3]));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_10);
    var_17 = ((/* implicit */_Bool) max((max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))), ((~(((/* implicit */int) var_6))))));
    var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 268427264)) : (var_7)))));
}
