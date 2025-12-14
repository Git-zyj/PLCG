/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156725
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
    var_10 = ((/* implicit */unsigned short) min((min((((/* implicit */int) ((var_6) == (((/* implicit */int) (_Bool)1))))), (var_9))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)48))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)144)) + (((/* implicit */int) (unsigned short)65535))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_7);
        var_11 = ((/* implicit */unsigned short) ((_Bool) ((arr_1 [i_0] [i_0]) ? (1141800263U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64866))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min(((~(((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0))))) << (((-815506061) + (815506071))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_12 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (815506061) : (((/* implicit */int) (unsigned short)1))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned char)18] [(unsigned char)18])) ^ (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_14 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((arr_12 [i_2 + 1] [i_1 - 3]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_5)))))))) && (((/* implicit */_Bool) ((var_6) >> (((var_9) - (1657955877))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((arr_12 [i_3] [i_2 - 1]), (((/* implicit */unsigned int) (unsigned short)35865))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35865))) >= (13956615079788189876ULL)))) : (((/* implicit */int) ((unsigned short) (unsigned short)48472)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
                        {
                            arr_19 [i_4] [i_4] [(signed char)20] [i_4] [i_4] [i_2] = ((((/* implicit */int) arr_0 [i_5 - 1])) & (((/* implicit */int) (unsigned short)65521)));
                            arr_20 [i_4] [i_5] [i_5] [i_4] [i_3] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 760581611U)) && (arr_6 [i_1] [i_2])));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            arr_23 [i_1 + 1] [i_2] [(unsigned short)0] [i_4] [i_2] = ((/* implicit */unsigned int) ((short) var_1));
                            arr_24 [i_1] [i_4] [i_1] [i_3] [i_4] [i_6] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_22 [i_1] [(unsigned char)0] [i_1] [i_1] [(unsigned char)0])))) & (-1198630802)));
                            arr_25 [13] [i_4] [i_4] [i_3] [i_4] [i_1 - 3] [i_1] = ((/* implicit */signed char) ((unsigned short) -1));
                        }
                    }
                    for (int i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) -2133367755))) - (2147483647)));
                        arr_28 [i_2] [i_2] [i_3] [i_7] [i_3] [16U] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)24791)))) + (var_2)));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 3; i_8 < 22; i_8 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) (-(var_3)));
        var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [(unsigned short)12] [(unsigned short)12] [i_8 - 3] [i_8] [(unsigned short)19] [i_8])) || (((/* implicit */_Bool) var_6))))) ^ (arr_27 [i_8 - 1] [i_8])))), (arr_8 [i_8])));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
    {
        arr_33 [i_9] [i_9] = ((/* implicit */short) (~(var_3)));
        var_17 = (-(((/* implicit */int) (_Bool)0)));
        arr_34 [i_9] = ((/* implicit */unsigned long long int) ((var_6) < (((/* implicit */int) arr_32 [i_9]))));
        var_18 = ((/* implicit */unsigned char) (_Bool)0);
    }
}
