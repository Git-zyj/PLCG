/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182076
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
    var_13 = ((/* implicit */unsigned long long int) max((1142063338U), (((/* implicit */unsigned int) (signed char)-17))));
    var_14 = ((((((/* implicit */int) var_8)) + (2147483647))) << ((((((~(((/* implicit */int) (!(var_7)))))) + (15))) - (13))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */signed char) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_7)))))))) ? (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)34399))))))) : (min((var_5), (((/* implicit */unsigned int) min((((/* implicit */short) var_7)), (var_8))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = min((3016184350U), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 - 2] [i_1 - 2])) < (127ULL))))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)16)) << (((((/* implicit */int) (unsigned char)131)) - (131)))))))) ? (((((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_12)))) - (((/* implicit */unsigned long long int) (-(var_12)))))) : (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) < (var_5)))))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)65534)))) % (((((/* implicit */int) (signed char)3)) >> (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_0])) ? (arr_2 [i_1 - 2] [(unsigned char)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) * (var_5))), (((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_0] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-2147483635), (((/* implicit */int) (unsigned short)65535))))) && (((/* implicit */_Bool) (-(var_2)))))))));
}
