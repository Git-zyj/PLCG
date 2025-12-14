/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138889
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
    var_20 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) 730877906))), (((unsigned long long int) var_0))))) ? (var_2) : (((var_6) / (((/* implicit */int) var_19))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((11U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))))))) ? (((long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_5))))) : (((((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) 2123414020U)))) - (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_22 = ((1712585216) >> (((min((((/* implicit */int) arr_0 [i_0] [i_0])), ((+(((/* implicit */int) var_17)))))) + (53))));
        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0]))) * (((arr_1 [i_0]) / (arr_1 [i_0])))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) 2123414014U))));
        var_25 = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (max((var_2), (((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */int) (short)126)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_26 |= ((/* implicit */long long int) arr_4 [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) 2708183895485821283ULL)) ? (6682683579899902LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))) >= (((/* implicit */long long int) -519909045))))) % ((+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_1])) >= (((/* implicit */int) arr_5 [i_1])))))))));
        arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_1 [i_1]) | (((/* implicit */int) arr_0 [i_1] [i_1])))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_2 [11ULL]), (((/* implicit */unsigned short) arr_3 [i_1])))))))) : ((-(min((10008496518871492816ULL), (((/* implicit */unsigned long long int) 2123414014U))))))));
        var_27 ^= ((8438247554838058785ULL) * (((/* implicit */unsigned long long int) -730877910)));
    }
    var_28 = min(((+(2318739896U))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) -450690669)) : (3467917U))));
}
