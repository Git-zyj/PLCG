/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189199
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
    var_20 = ((max((var_14), (var_6))) ? (((((/* implicit */_Bool) (-(7292793026725446026LL)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_18)))) : (((var_18) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (signed char)-111)))))) : (((/* implicit */int) var_12)));
    var_21 = ((/* implicit */long long int) min((var_21), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))), (var_7)))));
    var_22 = ((/* implicit */long long int) (+(((var_14) ? (max((((/* implicit */unsigned int) var_8)), (4294967281U))) : ((~(4294967270U)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9)))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)123)) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (arr_3 [(short)5]) : (((/* implicit */long long int) arr_4 [i_2]))))) ? (((((/* implicit */_Bool) -7292793026725446009LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_2 [(short)9] [(short)9] [i_2])))) : ((~(((/* implicit */int) (unsigned char)139))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -4370676766650213238LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9839))) : (-4791051500235619579LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(short)7])) ? (((/* implicit */int) (unsigned short)46559)) : (((/* implicit */int) var_8))))) : (min((((/* implicit */long long int) arr_7 [i_0])), (arr_0 [10U])))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((((/* implicit */_Bool) 2009124977U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))), ((+(min((-5490536456206443518LL), (((/* implicit */long long int) var_1))))))));
}
