/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116612
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
    var_11 = ((/* implicit */long long int) min((((_Bool) (!(((/* implicit */_Bool) var_5))))), ((_Bool)1)));
    var_12 = ((/* implicit */unsigned short) min(((-(262143))), (((int) max((var_10), (((/* implicit */long long int) var_2)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_4 [6] |= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [14U] [i_0 - 1])), (min((((long long int) -915426995)), (((/* implicit */long long int) (+(((/* implicit */int) (short)-9610)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
        {
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) | (-3699182138242392803LL)))) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_1])));
            var_13 = (+(3699182138242392781LL));
        }
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0] = ((/* implicit */short) 4788065408672455230LL);
            var_14 = ((/* implicit */long long int) -1669085533);
            var_15 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)4)) ? (-3699182138242392796LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
        {
            arr_16 [i_0] [i_3] = (i_0 % 2 == 0) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((min((-3699182138242392806LL), (3699182138242392778LL))) + (9223372036854775807LL))) >> (((((((-1LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_15 [i_0 + 1] [i_0])) - (29522))))) - (9223372036854775782LL))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((min((-3699182138242392806LL), (3699182138242392778LL))) + (9223372036854775807LL))) >> (((((((-1LL) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_15 [i_0 + 1] [i_0])) - (29522))) - (15268))))) - (9223372036854775782LL)))))))));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) -7031648909996045451LL)))))));
                arr_20 [i_0] [i_0] = max((((72057576858058752LL) ^ (((long long int) (signed char)0)))), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (signed char)14))) - (((/* implicit */int) (signed char)-7))))));
                arr_21 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((((/* implicit */long long int) (+(-1769826839)))) * (((-72057576858058751LL) / (-3699182138242392811LL))))))))));
            }
            for (int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                var_18 = ((((/* implicit */_Bool) arr_22 [i_5])) ? (arr_13 [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_5])))))));
                var_19 += ((arr_13 [i_0] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))));
            }
        }
        arr_25 [i_0] = ((/* implicit */signed char) max((((long long int) arr_22 [i_0])), (((/* implicit */long long int) ((((/* implicit */long long int) arr_14 [13U] [i_0 - 1])) >= (arr_5 [i_0 - 1] [i_0]))))));
        arr_26 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) (-(arr_23 [i_0] [i_0] [i_0] [i_0])))) : ((((_Bool)1) ? (3699182138242392791LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29804))))))), (((/* implicit */long long int) (+(((/* implicit */int) (short)28299)))))));
    }
}
