/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162964
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
    var_17 = ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) var_5);
        arr_3 [(signed char)2] = ((/* implicit */long long int) arr_2 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((long long int) var_15)))))));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((max((arr_4 [i_1 + 1] [i_0 + 2] [i_2 - 1]), (((/* implicit */long long int) (unsigned char)47)))) >> (((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0 + 2] [i_2 - 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-8))))) + (2071874651452786259LL)))));
                    arr_10 [i_2 - 1] [i_1] [i_1] [i_0 + 1] = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)16013)) : (((/* implicit */int) var_16)))))))) > (((((/* implicit */_Bool) 1757627153)) ? (((/* implicit */int) (unsigned short)49516)) : (((/* implicit */int) (unsigned short)49521)))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (3284102440004585358LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65504))) ^ (arr_6 [i_0] [i_0]))) : (((((/* implicit */_Bool) (signed char)2)) ? (var_8) : (arr_1 [(unsigned short)3]))))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7614698698195655380LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1)))))))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)7)) ? (max((((/* implicit */unsigned long long int) 2487957058761724257LL)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)49535)) ^ (((/* implicit */int) (unsigned short)65528)))))));
        var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) 2792302237U)) ? (16124977466993220488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) - (16124977466993220480ULL)))))));
    }
    var_22 = ((/* implicit */unsigned long long int) (((-(var_10))) < (((/* implicit */unsigned long long int) ((((var_14) + (9223372036854775807LL))) << (((((9223372036854775807LL) / (13510798882111488LL))) - (682LL))))))));
    var_23 = var_1;
}
