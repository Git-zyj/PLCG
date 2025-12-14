/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135563
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 -= ((/* implicit */unsigned int) -3949065357973577409LL);
        var_19 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [(short)6])) : (((/* implicit */int) arr_2 [i_0] [4U]))))), (((-8970757211397744824LL) / (((/* implicit */long long int) var_5)))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [6]))) >= (4211724329U)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) >= (var_12)))))))));
        var_20 = min(((~(max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (var_5))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_0] [12]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_1] [i_1 - 2])) ^ (((/* implicit */int) arr_5 [i_1] [i_1])))) & (((arr_4 [i_1 + 1]) | (arr_4 [i_1 - 1])))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (((+(((((/* implicit */unsigned long long int) arr_4 [i_1])) / (var_4))))) * (((/* implicit */unsigned long long int) (+(min((2147483643), (((/* implicit */int) var_3))))))))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */int) var_6)) : (arr_4 [i_1 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((~(arr_4 [i_1 - 1])))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2490598522U)) & (123490212489924087LL)));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) var_17);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_20 [i_2] [i_4] [i_2] = ((/* implicit */int) min((2151806978U), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_2] [i_4])) * (((/* implicit */int) var_0)))) ^ (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_5])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_17 [i_2] [i_3] [i_4] [i_5] [i_6]), (var_12)))), (((long long int) arr_17 [i_2] [(unsigned short)2] [i_4] [i_5] [i_6]))));
                            var_27 = (unsigned char)2;
                        }
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) ((arr_8 [i_2]) * (3465157021U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) : (((arr_22 [i_2] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)65535), (var_17)))))))));
    }
    var_29 = max((((((/* implicit */int) var_6)) ^ (((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */int) (unsigned char)40)))))), (((/* implicit */int) var_8)));
    var_30 = ((/* implicit */int) var_2);
}
