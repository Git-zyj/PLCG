/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185180
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
    var_13 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)41890)), (3474196769U)))) - (((((/* implicit */_Bool) 3474196752U)) ? (35184372087808LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23626))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(arr_1 [i_0] [i_0])))), (arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_11 [(unsigned char)6] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)32767)), ((~(-2702630874434129209LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41910))))) : (arr_3 [(unsigned short)8] [1])))) : (((unsigned int) 842341591U))));
                            arr_12 [4LL] [(unsigned short)6] [4LL] = ((/* implicit */unsigned int) (short)15872);
                            arr_13 [(unsigned char)4] [(unsigned char)6] [(unsigned short)10] [(unsigned char)4] |= ((/* implicit */int) (unsigned short)0);
                            arr_14 [i_0] [4] [(unsigned short)8] [10U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -669562201)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_2])))) : (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                arr_15 [(unsigned char)0] [i_1] = ((/* implicit */long long int) arr_2 [0LL]);
            }
        } 
    } 
}
