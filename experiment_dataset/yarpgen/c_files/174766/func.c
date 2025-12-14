/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174766
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
    var_14 = ((/* implicit */signed char) 11541648818441529692ULL);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? ((~(6905095255268021924ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124)))));
                    arr_7 [i_0] [0U] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((var_8) - (5727663934873958069LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))) : (11541648818441529692ULL))) < (((/* implicit */unsigned long long int) ((long long int) 11541648818441529696ULL)))));
                    arr_8 [i_0] [i_0] [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned char)29))));
                    arr_9 [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned char)31)) ? (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) ((7285321009070666959LL) < (var_8))))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)54098), (((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned char) (signed char)91)))))))) ? (((/* implicit */int) ((signed char) (unsigned short)54098))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -1134241561759804879LL)))))));
        arr_11 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)76)))) * (((/* implicit */int) (signed char)-124))))), (3548987532U)));
    }
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << ((((((-(((/* implicit */int) (signed char)123)))) + (151))) - (15)))))) ? (min((((/* implicit */long long int) var_2)), (-3013643878510874515LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)143)) * (((/* implicit */int) ((4702446103141103579LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)208)) * (((/* implicit */int) (_Bool)0))));
}
