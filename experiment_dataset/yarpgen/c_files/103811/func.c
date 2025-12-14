/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103811
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
    var_16 = ((/* implicit */short) var_6);
    var_17 ^= ((/* implicit */short) var_6);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_18 += min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)4095))), (min((((arr_3 [i_0] [i_0]) ? (17393426777363108391ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_2)))));
        arr_5 [i_0] [6] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_0]))))), (max((((/* implicit */long long int) arr_3 [(signed char)9] [i_0])), (-6670963940784531327LL)))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_19 *= min((((/* implicit */unsigned int) (unsigned short)4095)), (8388606U));
        /* LoopSeq 4 */
        for (short i_2 = 3; i_2 < 12; i_2 += 1) /* same iter space */
        {
            arr_12 [(short)8] [3LL] [i_1] = ((/* implicit */int) arr_8 [i_1]);
            arr_13 [i_1] [i_1] [i_2 + 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_8 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) (signed char)95))))) : ((-9223372036854775807LL - 1LL)))) / (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [i_2 - 3]) >= (arr_10 [i_2 - 3])))))));
            var_20 = ((/* implicit */_Bool) (unsigned short)61441);
        }
        for (short i_3 = 3; i_3 < 12; i_3 += 1) /* same iter space */
        {
            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_9 [i_3]);
            var_21 = ((/* implicit */short) (+(var_7)));
            arr_18 [11] = ((((/* implicit */int) arr_6 [i_3 + 3])) * (((((/* implicit */int) arr_6 [i_3 + 2])) % (((/* implicit */int) arr_6 [i_3 + 4])))));
            var_22 = ((/* implicit */short) min(((unsigned short)4112), (((/* implicit */unsigned short) (_Bool)0))));
        }
        for (short i_4 = 3; i_4 < 12; i_4 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */short) max((((/* implicit */long long int) ((short) 1704252641162802219LL))), (((((/* implicit */long long int) var_2)) / (arr_8 [i_1])))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(var_5)))) / (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (9223372036854775784LL) : (6670963940784531322LL)))))))));
            arr_21 [i_4] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -1373188800)) ? (((/* implicit */int) arr_6 [i_1])) : (((((/* implicit */_Bool) 3353987225742384298LL)) ? (var_1) : (arr_7 [i_1]))))));
            arr_22 [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4 + 4])))))) <= (((long long int) arr_16 [i_4 - 3] [i_4]))));
            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_11 [(short)0] [i_4 + 3]), (((/* implicit */int) (unsigned short)0)))))));
        }
        for (short i_5 = 3; i_5 < 12; i_5 += 1) /* same iter space */
        {
            arr_26 [(short)5] [14U] [i_1] = ((/* implicit */unsigned short) (short)-10635);
            arr_27 [i_1] [i_1] [i_5] = ((/* implicit */unsigned short) (~(max(((((_Bool)0) ? (arr_10 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) arr_23 [i_1] [i_5])), (arr_10 [i_1])))))));
        }
        arr_28 [i_1] [i_1] = (-(((unsigned int) (unsigned short)51324)));
    }
    var_26 = ((/* implicit */int) ((short) var_8));
}
