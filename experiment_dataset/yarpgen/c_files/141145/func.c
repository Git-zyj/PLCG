/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141145
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
    var_15 = var_2;
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)103)) : (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_3 [i_0])))))) + ((+(((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (signed char)116))))))));
        var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) < (((/* implicit */int) arr_1 [i_1 - 1]))))) : (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1]))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) <= (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1]))))) * (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) (signed char)36))))));
            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_0] [i_0]))));
        }
        for (signed char i_2 = 1; i_2 < 23; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0])) == (((/* implicit */int) (signed char)-53))))), (arr_8 [i_0] [i_2 - 1])))) >= (((((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1])) / (((/* implicit */int) max((arr_3 [i_0]), ((signed char)-56))))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) max(((signed char)-114), ((signed char)-105)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8)))))));
            var_22 = arr_9 [i_2];
            arr_10 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1])) >= (((((/* implicit */int) (signed char)53)) << (((/* implicit */int) (signed char)8))))));
            arr_11 [i_0] &= arr_3 [i_0];
        }
        var_23 = ((/* implicit */signed char) max((((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_2 [i_0]))));
    }
    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) arr_15 [i_3])))))))));
        arr_17 [(signed char)2] [i_3] = (signed char)-5;
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((+((+(((/* implicit */int) arr_12 [i_3])))))) < (((/* implicit */int) min((arr_14 [i_3]), (arr_14 [i_3])))))))));
    }
    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_25 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_18 [i_4])) < (((/* implicit */int) arr_18 [i_4]))))) & (((/* implicit */int) min((arr_18 [i_4]), (arr_18 [i_4]))))));
        arr_20 [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-5)) != (((/* implicit */int) (signed char)-104)))) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [i_4] [i_4])) != (((/* implicit */int) arr_13 [i_4] [i_4]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((/* implicit */int) (signed char)-67)))) <= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_4])) >= (((/* implicit */int) arr_15 [i_4]))))))))));
    }
    var_26 = (signed char)-86;
}
