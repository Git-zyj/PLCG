/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101201
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
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51272)))))) : (((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)14264)) || (((/* implicit */_Bool) 14074559536667076349ULL))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (4372184537042475267ULL)));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_10 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((arr_0 [i_1]) - (((/* implicit */int) (signed char)-22))))) ? (((/* implicit */unsigned int) 2147483647)) : (((((/* implicit */_Bool) arr_1 [(signed char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)51272), (((/* implicit */unsigned short) ((var_6) < (var_9))))))))));
                        var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)159)), (min((2905020651206859561LL), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1]))))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = ((((/* implicit */_Bool) ((((((/* implicit */long long int) 1958329816U)) / (2905020651206859561LL))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14264)) << (((1958329816U) - (1958329804U))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14264)) ? (((((/* implicit */_Bool) 14074559536667076349ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) : (arr_0 [i_0])))));
                        arr_12 [i_1] [i_1] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */int) var_13);
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-28368)) + (2147483647))) >> (((((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (16562500242332796961ULL)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35269)) ? (2635386184U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20428)))))) ? (2336637479U) : (min((arr_3 [i_0]), (((/* implicit */unsigned int) (unsigned char)159))))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_21 |= ((/* implicit */unsigned int) ((((arr_0 [i_4]) & (((/* implicit */int) var_17)))) % (((/* implicit */int) ((-4616465345821018926LL) <= (((/* implicit */long long int) 2336637479U)))))));
        var_22 = arr_8 [i_4] [i_4] [i_4] [i_4];
        var_23 += ((/* implicit */unsigned char) var_9);
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) 14074559536667076349ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2336637479U)));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_18 [i_5]) : (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned char)200))));
        var_26 = ((/* implicit */long long int) ((((((((/* implicit */int) (unsigned short)14264)) != (((/* implicit */int) (unsigned char)8)))) ? (15302667194182984789ULL) : (((/* implicit */unsigned long long int) var_0)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        arr_19 [i_5] = ((/* implicit */long long int) var_6);
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5] [i_5] [(signed char)2] [i_5 - 1])) ? (424454371U) : (0U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1570135553U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51272)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((arr_17 [i_5]) - (9562302372332192605ULL)))))) : (17592185782272ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_8 [i_5] [i_5] [(_Bool)1] [i_5])), ((unsigned char)233))))))))));
    }
}
