/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174696
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
    var_13 = ((/* implicit */unsigned int) max((var_4), (var_3)));
    var_14 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_11)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) 2251799679467520LL)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)187)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned int) ((unsigned long long int) arr_0 [i_0])));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(-2251799679467508LL)))))) ? (((((/* implicit */_Bool) ((long long int) (unsigned char)44))) ? (((((/* implicit */unsigned long long int) -3093673493906928141LL)) * (7478069599962366796ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0]))))));
            arr_8 [i_1] = ((((long long int) min((var_1), (((/* implicit */long long int) var_12))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_6 [i_1]), (((/* implicit */unsigned long long int) var_5))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [(unsigned char)10]))))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((-3093673493906928158LL) - (((/* implicit */long long int) (-(2791699926U))))));
        var_16 = var_7;
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            arr_18 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)137)), (4294967295U)));
            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((unsigned long long int) 4321754525674402764LL)))))));
        }
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            arr_22 [i_3] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) (-9223372036854775807LL - 1LL))));
            var_18 = 32631581810428426LL;
            arr_23 [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((long long int) ((arr_16 [i_5] [i_5] [i_5]) ^ (arr_10 [i_5]))));
            var_19 *= ((/* implicit */unsigned char) arr_16 [i_3] [i_3] [i_5]);
        }
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((arr_10 [i_3]), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned char)3]))) : (var_1))))))))));
        var_21 = ((/* implicit */long long int) (((+(9223336852482686976LL))) <= (((/* implicit */long long int) ((unsigned int) arr_6 [(unsigned char)19])))));
    }
}
