/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156658
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (3868265059U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11)))));
    var_15 = ((unsigned char) (-(((long long int) (unsigned char)8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [(short)1] [(signed char)9] [i_1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 4528694458730015794LL)) && (((/* implicit */_Bool) var_0)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7))));
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((_Bool) (((+(var_4))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13))))))))));
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_17 *= ((/* implicit */unsigned short) min((((long long int) (!(((/* implicit */_Bool) var_0))))), (((/* implicit */long long int) 1880112376U))));
                        var_18 += ((/* implicit */unsigned short) ((signed char) 1123700883587072LL));
                        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((_Bool) (unsigned short)45056)))) ? (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)11)) & (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) : (137438887936LL)))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_20 ^= ((/* implicit */long long int) ((short) ((unsigned int) (unsigned char)31)));
                        var_21 *= ((/* implicit */int) ((unsigned char) ((int) (unsigned char)0)));
                    }
                }
            } 
        } 
    } 
}
