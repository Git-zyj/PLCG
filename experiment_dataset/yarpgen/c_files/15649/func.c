/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15649
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
    var_14 = ((/* implicit */int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_9)))) ? (var_3) : (max((var_13), (var_3)))))));
    var_15 = ((/* implicit */int) min((var_15), (-253167082)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 334853887)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (18292701239841198744ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) max((var_7), (var_11)))) : ((-(arr_1 [i_0] [3])))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                arr_10 [i_0] [i_1] [i_1] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551586ULL), (var_10)))) ? (arr_7 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) (~(-1106757245)))) : ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 1896721918)) : (2350330367314892703ULL)))))));
                arr_11 [i_1] [5ULL] = var_9;
            }
            var_16 = ((/* implicit */int) arr_4 [14]);
            arr_12 [i_0] [2] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_5 [i_0] [i_0] [i_0]))))));
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]))))) ? (var_10) : (((/* implicit */unsigned long long int) (~(-1730509810)))))))));
            arr_13 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((arr_5 [i_1] [i_1] [i_0]) + (2147483647))) << (((arr_1 [i_0] [i_1]) - (2939970933650074682ULL)))))), (14714141168463538230ULL)))) ? (((((/* implicit */_Bool) ((var_10) << (((arr_1 [15] [i_0]) - (2939970933650074667ULL)))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) 2147483640)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0]))))) / (var_12))))));
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
        {
            var_18 = 1170283075;
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL))) ? (((/* implicit */unsigned long long int) ((int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (18446744073709551601ULL) : (2203725757459940886ULL)))))));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2147483647)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 3) 
        {
            arr_21 [7] [7] = ((/* implicit */int) 18446744073709551615ULL);
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [0])) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1106757245)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) < (14714141168463538230ULL)))) : (var_11)))))))));
        }
        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            arr_24 [i_4] = ((/* implicit */unsigned long long int) (~(((arr_19 [i_4]) & (arr_19 [i_4])))));
            arr_25 [i_4] [i_4] [i_6] = var_7;
        }
        arr_26 [i_4] = ((/* implicit */int) max(((-(max((((/* implicit */unsigned long long int) arr_16 [i_4])), (7696937267331747299ULL))))), (((/* implicit */unsigned long long int) -1650421868))));
    }
}
