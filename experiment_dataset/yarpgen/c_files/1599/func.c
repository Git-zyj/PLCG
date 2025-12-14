/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1599
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (unsigned short)65527))))) || (((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) < (5565609552781279492ULL)))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((((/* implicit */int) ((330646296U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) << (((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_1) : (((/* implicit */int) var_19)))) + (607014197)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_15 [(signed char)9] [(signed char)9] = ((/* implicit */long long int) max((((((/* implicit */_Bool) 177803469U)) ? ((+(var_4))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12881134520928272119ULL)) ? (((3964320995U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)3176))))) : (((((/* implicit */_Bool) (unsigned char)247)) ? (330646286U) : (3256712037U))))))));
                                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)234)) || (((/* implicit */_Bool) 4294967283U))));
                                arr_17 [i_0] [(_Bool)1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) min(((unsigned short)59549), ((unsigned short)2))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = var_4;
    var_21 = ((/* implicit */unsigned int) var_19);
}
