/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184628
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
    var_12 = min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) var_9)), (-12LL))))), (((/* implicit */long long int) var_6)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_1] [0ULL] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) max((var_13), (((signed char) (+(((/* implicit */int) arr_4 [i_2] [i_0] [i_2])))))));
                                arr_18 [(unsigned short)6] [i_2] [(unsigned char)8] = ((/* implicit */long long int) min((((unsigned int) 8821072682110828344LL)), (min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_0 [i_2]))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) var_9);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(14053792846554554271ULL)))) ? (((/* implicit */int) ((arr_2 [i_5]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : ((+(arr_0 [(unsigned short)11]))))) <= (max((var_0), (arr_6 [i_2] [i_2] [i_6])))));
                                arr_28 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) max((arr_7 [i_0] [(unsigned short)15] [(unsigned char)5]), (((/* implicit */unsigned long long int) arr_23 [i_1] [i_1] [i_2] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
