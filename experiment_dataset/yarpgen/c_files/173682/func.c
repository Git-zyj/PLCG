/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173682
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (unsigned short)52506))));
        var_15 ^= ((/* implicit */_Bool) (unsigned short)13025);
    }
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) 127LL);
        var_17 = ((/* implicit */int) min((var_17), (max((max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_11)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)32760))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) var_10))))) ? (((((/* implicit */int) (signed char)116)) + (-1507635271))) : (max((1969555522), (((/* implicit */int) (short)13066))))))) || (((/* implicit */_Bool) min((min((var_4), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_9 [i_2] [i_2]) : (((/* implicit */int) (unsigned char)21))))))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((max((((/* implicit */unsigned short) arr_2 [i_2])), (var_8))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)119)) || (((/* implicit */_Bool) (unsigned short)12))))))))));
        var_21 = ((/* implicit */int) -6132179743402223871LL);
    }
    for (short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) (unsigned short)29941)) ? (((/* implicit */int) (unsigned short)1536)) : (((/* implicit */int) (unsigned short)0))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((14241905121931375742ULL), (((/* implicit */unsigned long long int) arr_2 [i_3]))))) ? (max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)13033)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) ((_Bool) arr_8 [i_3])))));
    }
}
