/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147395
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
    var_19 = ((/* implicit */signed char) ((var_1) ? (((/* implicit */int) var_2)) : (var_7)));
    var_20 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)121)), (12707391677373501730ULL)));
    var_21 = ((/* implicit */signed char) var_9);
    var_22 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */int) var_2);
        arr_2 [i_0] = var_7;
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */long long int) var_6)) : (var_18))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) ((unsigned short) 7377052093640153295LL)))))))))));
    }
    for (int i_1 = 1; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19889))) : (var_16)))) ? (((int) var_0)) : (((/* implicit */int) (unsigned short)45647))))) ? (((/* implicit */int) ((signed char) var_9))) : (((/* implicit */int) arr_4 [i_1 - 1])));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_16))));
            var_26 = ((/* implicit */signed char) var_10);
        }
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min((((((/* implicit */_Bool) var_18)) ? (arr_6 [i_1 + 1] [i_1 + 1]) : (arr_6 [i_1 + 1] [i_1 + 1]))), (((unsigned long long int) arr_6 [i_1] [i_1 + 2])))))));
        arr_10 [i_1] = ((/* implicit */signed char) var_9);
        /* LoopSeq 3 */
        for (short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_28 = ((/* implicit */int) max((((/* implicit */unsigned int) var_0)), (var_16)));
            arr_13 [i_1 - 1] = ((/* implicit */long long int) var_5);
        }
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            arr_18 [(signed char)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -7377052093640153290LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) ? (var_18) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            var_29 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_1 [i_1 - 1])), (4807441169204147991LL))), (var_17)));
            arr_19 [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) var_3);
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            arr_22 [i_5] [i_1 + 2] = ((/* implicit */unsigned short) var_18);
            arr_23 [i_5] = var_13;
        }
    }
    for (int i_6 = 1; i_6 < 16; i_6 += 4) /* same iter space */
    {
        arr_26 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) & (arr_0 [i_6])));
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (arr_24 [i_6]))), (((/* implicit */int) ((signed char) arr_21 [15ULL] [i_6] [i_6 + 2])))));
    }
    for (int i_7 = 1; i_7 < 16; i_7 += 4) /* same iter space */
    {
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned short) ((arr_14 [i_7 - 1]) & (var_6)));
        arr_31 [i_7] [i_7] = ((/* implicit */_Bool) var_11);
        var_30 += ((/* implicit */signed char) arr_6 [i_7] [i_7]);
    }
}
