/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123480
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
    var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)9624))) <= (var_6))) ? (((((/* implicit */_Bool) (unsigned short)32704)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32704))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) >> (((((/* implicit */int) max((((/* implicit */short) var_7)), (max((((/* implicit */short) var_16)), ((short)-9640)))))) - (97)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (~(var_12)));
        var_21 = ((/* implicit */unsigned int) arr_1 [i_0] [5ULL]);
        var_22 = ((/* implicit */unsigned char) var_10);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [4U] = ((281472829227008LL) / (((/* implicit */long long int) max((var_10), (856697706U)))));
        arr_5 [i_1] = ((/* implicit */unsigned short) arr_1 [i_1] [(unsigned char)4]);
        var_23 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))) - (arr_3 [i_1] [i_1])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) ((signed char) max((var_11), (((/* implicit */unsigned int) (signed char)100)))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (short)-9624)), ((unsigned short)32699)));
            arr_12 [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned char)64)))) / (((/* implicit */int) (unsigned char)192))))), (min((1096156318U), (((/* implicit */unsigned int) var_17))))));
        }
        arr_13 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((_Bool) var_17)))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_2])) + (2147483647))) >> (((var_10) - (3538153264U))))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((_Bool) var_17)))) || (((/* implicit */_Bool) ((((((((/* implicit */int) arr_6 [i_2])) - (2147483647))) + (2147483647))) >> (((var_10) - (3538153264U)))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) min((((arr_7 [(signed char)6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))))), (((/* implicit */unsigned long long int) min((((unsigned int) (short)9645)), (((/* implicit */unsigned int) (short)-9625)))))));
        arr_16 [(unsigned char)7] [i_4] = ((/* implicit */signed char) ((min((3772446080126068829ULL), (((/* implicit */unsigned long long int) (unsigned char)253)))) | (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-9625)) : (((/* implicit */int) (short)9640)))))));
        var_26 = ((/* implicit */unsigned char) (((~(var_10))) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
        arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) var_14)), ((short)9640)))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)64)) && (((/* implicit */_Bool) 14674297993583482779ULL)))))))) & (((/* implicit */int) ((((/* implicit */_Bool) (short)-9645)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_8))))))))));
    }
    var_27 = ((/* implicit */signed char) var_0);
}
