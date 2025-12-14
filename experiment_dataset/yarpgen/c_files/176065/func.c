/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176065
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (-704174278)))) : (max((((/* implicit */unsigned int) -96012749)), (arr_2 [i_0]))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
    {
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) 11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 3])))))) + (arr_2 [i_1 + 1])))) : (((arr_7 [i_1 + 1] [i_1 - 2]) - (arr_7 [i_1 - 3] [i_1 + 1]))))))));
        var_15 = ((/* implicit */unsigned char) ((_Bool) 3758096384U));
        var_16 = ((/* implicit */long long int) (+(((int) var_2))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */short) min((((arr_6 [i_2]) & (arr_6 [i_2]))), ((~(arr_6 [i_2])))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) -12))) ? (min((((/* implicit */long long int) arr_2 [i_2])), (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 103972980U)) ? (arr_2 [i_2]) : (arr_2 [i_2]))))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_1 [i_2]))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), ((((!(((/* implicit */_Bool) (signed char)-85)))) ? (((/* implicit */unsigned long long int) (~(6885054236110386687LL)))) : (0ULL)))));
        arr_14 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1916072952) & (((((/* implicit */_Bool) 11)) ? (1568488461) : (((/* implicit */int) (signed char)-60)))))))));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        arr_19 [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1964250346)) ? (-412434034) : (var_6)))) ? (max((2850886542763261680ULL), (((/* implicit */unsigned long long int) (signed char)77)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((6622442618075643870LL) > (((/* implicit */long long int) ((/* implicit */int) var_2))))))))) : ((+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) 255)) : (4436155469233401231ULL))))));
        arr_20 [i_3] [i_3] = ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) 1696795317)) + (262112U))), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) arr_17 [i_3])) : (((((/* implicit */_Bool) (~(-96012755)))) ? (max((((/* implicit */int) arr_17 [i_3])), (arr_15 [13U]))) : (((/* implicit */int) ((var_5) != (((/* implicit */long long int) 18U))))))));
        var_20 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (_Bool)1)))), (((arr_15 [i_3]) ^ (1566658479)))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (unsigned char)111))));
    var_22 = ((/* implicit */unsigned int) var_0);
    var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 249809916)) : (0ULL)))))) ? (((/* implicit */unsigned long long int) var_5)) : (max((var_7), (((/* implicit */unsigned long long int) var_3))))));
}
