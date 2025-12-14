/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158687
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
    var_16 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((524287U), (((/* implicit */unsigned int) (_Bool)0))))) ? (var_10) : (min((((/* implicit */unsigned long long int) var_11)), (var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-45))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)0) ? (((/* implicit */long long int) 4294967294U)) : (var_15))))))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : (9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) min((((short) (_Bool)1)), (((short) var_14)))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) var_15);
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_20 = ((/* implicit */int) ((short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) * (var_10))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)5] [(unsigned short)5])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_8))))))));
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 1) /* same iter space */
        {
            var_21 += ((/* implicit */long long int) min((min(((signed char)-1), ((signed char)116))), (min(((signed char)-92), (((/* implicit */signed char) (!(arr_2 [i_1] [(_Bool)1]))))))));
            var_22 = ((/* implicit */unsigned short) (~(((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (1563618955U))))));
            arr_11 [i_1] [(unsigned short)2] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((arr_7 [i_1] [i_3 - 4] [i_3 - 3]) - (15431150981447993551ULL)))))), (6844977393261711827LL)))) : (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((arr_7 [i_1] [i_3 - 4] [i_3 - 3]) - (15431150981447993551ULL))) - (11768624910655824201ULL)))))), (6844977393261711827LL))));
        }
        for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) max((var_23), (var_8)));
            var_24 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_5 [i_4] [i_4 + 1] [i_4 - 3]))));
            var_25 = ((/* implicit */unsigned char) 15910115145457268403ULL);
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max((((/* implicit */long long int) 4294967272U)), (0LL))))));
        }
        var_27 ^= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)191))))) || (((((/* implicit */_Bool) arr_3 [i_1] [(short)2])) || (((/* implicit */_Bool) var_3)))))))));
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((632380995U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)25790))))) ? (min((-1587931434), (((/* implicit */int) (unsigned short)63769)))) : (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1] [(short)12]))))))) : (((unsigned int) (unsigned short)47005)))))));
    }
    var_29 = ((/* implicit */_Bool) var_6);
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) var_4))))) / (9223372036854775807LL)));
}
