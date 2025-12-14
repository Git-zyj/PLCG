/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176535
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((var_15) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9579))))))) && ((!(((/* implicit */_Bool) ((3640815759U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 4294967289U)) || (((/* implicit */_Bool) (unsigned short)56871)))))) ? ((((!(((/* implicit */_Bool) -6702419409556900793LL)))) ? (max((arr_1 [i_0]), (((/* implicit */int) (_Bool)1)))) : (((arr_2 [i_0 - 2] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-113)))))) : ((-(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2]))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3640815757U)) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0 + 1] [i_0 - 2]))) : (((((/* implicit */_Bool) min(((unsigned char)250), (((/* implicit */unsigned char) (_Bool)1))))) ? ((-(arr_1 [(unsigned char)5]))) : (((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) ((3640815741U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5367)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (2211455590661135484ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))), (((arr_2 [i_0] [1ULL]) ? (6646498675527228010LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))))))))));
    }
    var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((var_3) >= (((/* implicit */unsigned long long int) ((long long int) var_4)))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7168))) % (var_5))) >> (((((((/* implicit */_Bool) (unsigned short)52075)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27137))) : (654151554U))) - (27113U)))))));
}
