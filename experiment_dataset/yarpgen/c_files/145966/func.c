/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145966
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
    var_19 = ((/* implicit */signed char) ((unsigned char) var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((int) (_Bool)1))))) ? (4015046129563009147LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52794)))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1])) ? (((/* implicit */int) (signed char)39)) : (2147483647)))) ? (((arr_2 [i_1 + 2] [i_1 + 2]) | (((/* implicit */int) (short)3018)))) : (((int) 2147483624))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 2147483619))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_14)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)10743)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 2])) - (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 2] [i_2 - 1]))))), (((14026840919471183683ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) (signed char)57))), ((+(((/* implicit */int) (_Bool)1))))))) ? ((((((-(2847554737222098628LL))) + (9223372036854775807LL))) >> (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 2] [i_2 + 2])))) : (((((/* implicit */_Bool) ((int) (short)1268))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)1810))))) : (((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_2]))) : (-5661546641504842447LL)))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((((((/* implicit */_Bool) 2147483624)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_12 [i_3] [i_3] [i_2 + 1]))) | (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_2])) : (((/* implicit */int) (short)1617)))))))));
            }
        } 
    } 
}
