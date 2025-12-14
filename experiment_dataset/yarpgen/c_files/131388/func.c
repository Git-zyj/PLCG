/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131388
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) -512768381))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)61526);
        var_18 = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) ((6190239951790661096ULL) + (12256504121918890519ULL)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_19 &= ((/* implicit */signed char) (short)32741);
        arr_8 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((long long int) 6190239951790661084ULL))), (min((arr_7 [i_1]), (arr_7 [i_1])))));
    }
    for (unsigned int i_2 = 1; i_2 < 23; i_2 += 4) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16384))) >= (6190239951790661096ULL))) ? ((-(3765569303U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31849))))), (((/* implicit */unsigned int) ((((unsigned int) -7)) == (((/* implicit */unsigned int) ((/* implicit */int) ((16384U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62)))))))))))))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((_Bool) ((((/* implicit */_Bool) (unsigned short)4361)) ? (((/* implicit */unsigned long long int) -6980995921075568676LL)) : (var_10)))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_6 [(short)6] [i_2])), (6634473568987125017LL))), (((/* implicit */long long int) ((unsigned short) arr_7 [i_2])))))) : (var_7)));
        var_21 -= ((((/* implicit */_Bool) ((unsigned int) (signed char)13))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)8192)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 12256504121918890526ULL))))));
        var_22 = ((/* implicit */int) (-(var_10)));
    }
    /* vectorizable */
    for (short i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        var_23 ^= ((/* implicit */short) ((unsigned int) 4294967283U));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) arr_11 [(unsigned char)8] [i_3]);
        var_24 = ((/* implicit */short) ((var_6) ? (((arr_7 [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    }
    var_25 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
    var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-30798))) == (1470827128U)));
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)128)), (6190239951790661099ULL)))) ? (-9209255081106327894LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)9)))))))));
}
