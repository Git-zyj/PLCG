/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16500
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
    var_17 = ((/* implicit */_Bool) ((long long int) min((((((/* implicit */int) (unsigned char)29)) - (((/* implicit */int) (unsigned char)29)))), (((/* implicit */int) (short)21384)))));
    var_18 = ((/* implicit */signed char) min((var_18), (var_7)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) ((2390854232U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85)))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1 + 4]))))), (min((var_11), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1]))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)88)) ^ (((/* implicit */int) (unsigned char)244)))), (((/* implicit */int) var_14))));
                    var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((arr_0 [i_2]), (((/* implicit */unsigned int) (unsigned char)11))))))) * (max((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1])), (arr_5 [i_1 + 3] [i_2 - 1] [i_2 + 2] [i_1]))));
                }
                for (unsigned char i_3 = 3; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [4U] [i_1 - 2]))))))) >= (((long long int) (signed char)103)))))));
                    arr_12 [i_0] [i_1] = ((/* implicit */signed char) (+(max(((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_3])))), (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_9)))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)46)), (((((/* implicit */_Bool) 9079256848778919936LL)) ? (8536380134588810513LL) : (((/* implicit */long long int) 465901027U))))))) ? (1131605197U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32)))));
    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
}
