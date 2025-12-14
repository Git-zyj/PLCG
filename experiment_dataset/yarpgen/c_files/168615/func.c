/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168615
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1450878214U)) >= (2587658218246212043ULL)));
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((14357682794493143400ULL) / (2587658218246212043ULL))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */int) ((unsigned long long int) var_4));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_8))));
        var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)227)))) + (((int) 15859085855463339572ULL))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (var_1))))) <= (var_4)));
        var_16 *= ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (2784364119U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)19)))))) <= (((((/* implicit */_Bool) var_5)) ? (((18446744073709551615ULL) >> (((2587658218246212043ULL) - (2587658218246211987ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 1] [i_3] [i_3 + 2])))))));
            var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((arr_7 [i_2]) ? (var_8) : (var_3)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [10U] [10U])) : (((/* implicit */int) var_9))))))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(3692917947U))))))) & ((~((~(((/* implicit */int) (unsigned char)36))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            arr_12 [i_4] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_9)))) % ((+(((/* implicit */int) min(((short)27475), (((/* implicit */short) var_0)))))))));
            var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((arr_7 [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8))), (((/* implicit */long long int) (-(var_5))))))), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (15859085855463339560ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_8 [i_2] [i_2] [i_4])), (var_4))))))));
            var_21 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_0)))))))), ((+(((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))));
        }
        var_22 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)(-127 - 1)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (short)-9215)) - (((/* implicit */int) (_Bool)0)))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_15 [i_5] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9198))) ^ (1044156731763929217ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_14 [i_5] [i_5]))))));
        arr_16 [i_5] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (short)9215)), (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) >= (((/* implicit */unsigned long long int) var_3))));
    }
}
