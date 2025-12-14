/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158880
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
    var_10 = ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 879854831U))))) || ((((_Bool)1) || (((/* implicit */_Bool) 1610612736))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (3780214155U)))) && (((/* implicit */_Bool) max((min((((/* implicit */int) (short)32762)), (1087660037))), (((/* implicit */int) (_Bool)1)))))));
        arr_4 [(unsigned short)8] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 514753141U))))) : (((/* implicit */int) max((var_5), (var_5))))))), (((((((/* implicit */long long int) var_0)) | (5636012503548134481LL))) | (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)128)))))))));
    }
    for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551585ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) % (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (5410197248522644075ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_7))) / (((/* implicit */int) (unsigned short)54615)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_0))))));
        arr_10 [i_2] [(signed char)18] |= ((/* implicit */long long int) var_5);
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)65527))))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_7)))))))));
        var_15 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (~(-21LL)))) ? (((/* implicit */unsigned long long int) 3780214163U)) : (max((((/* implicit */unsigned long long int) (short)-26744)), (9179211938700426454ULL))))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_9))));
}
