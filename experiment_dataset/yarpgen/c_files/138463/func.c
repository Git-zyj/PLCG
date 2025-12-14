/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138463
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)42816))))) >= (((/* implicit */int) (unsigned short)26397))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_13 = (unsigned short)65019;
                                arr_16 [i_0 - 1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) max((((unsigned int) ((arr_12 [i_3] [i_0 + 2] [i_1] [i_0 + 2]) ^ (((/* implicit */long long int) 4093090763U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2681))) - (4294967295U)))) || (((/* implicit */_Bool) (-(var_1)))))))));
                                arr_17 [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)62861)) << (((((/* implicit */int) (unsigned short)56927)) - (56915)))))), (var_6));
                                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2670)))))) * (((((max((-3470991179171237256LL), (-7149519809464127653LL))) + (9223372036854775807LL))) >> (((var_10) - (3463591055U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_15 *= (unsigned short)28672;
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5])) ? (var_4) : (((/* implicit */long long int) (~(4294967280U)))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        var_17 ^= ((/* implicit */long long int) 849298838U);
        var_18 = ((/* implicit */long long int) (unsigned short)62861);
    }
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), ((unsigned short)24695)));
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((long long int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9671))) != (2097151LL))))) : (4294967288U)));
        arr_26 [(unsigned short)10] [(unsigned short)10] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)11443)), (-4407015833228952821LL)));
        arr_27 [i_7] = ((/* implicit */long long int) max(((unsigned short)2), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))));
    }
    var_21 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((3470991179171237242LL), (((/* implicit */long long int) 2690826453U))))))) ? (((((/* implicit */_Bool) 1452995452U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (unsigned short)2681)))))) : (max((((/* implicit */unsigned int) (unsigned short)0)), (2841971843U))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((max((var_8), ((unsigned short)29341))), (((/* implicit */unsigned short) ((var_5) >= (((/* implicit */long long int) var_3))))))))));
}
