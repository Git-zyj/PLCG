/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109384
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((long long int) arr_2 [i_0] [(unsigned char)7]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) ((_Bool) max((arr_2 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) (short)24228)))));
            var_17 = ((/* implicit */unsigned int) (~(var_13)));
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (_Bool)0))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) max((arr_8 [i_0 - 1] [i_0 - 1] [i_2]), (((/* implicit */unsigned long long int) (~(min((4294967289U), (((/* implicit */unsigned int) (_Bool)0))))))))))));
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_20 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1835008)))))) + (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_13))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_4)))))))));
            arr_12 [i_0 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (18446744073709551600ULL)));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                arr_17 [i_4] [2] [i_3] [i_4] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_13 [i_0] [3LL] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_16 [i_4])), (arr_9 [i_3])))))), (((/* implicit */long long int) arr_0 [i_0 - 1]))));
                arr_18 [i_0] [i_4] [i_4] = ((/* implicit */unsigned long long int) -7115222707861819059LL);
                arr_19 [i_4] [i_3] [i_3] = ((/* implicit */_Bool) (~(min((((int) 2665038650U)), (((/* implicit */int) (_Bool)1))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((unsigned int) arr_8 [i_0 - 1] [i_3] [(short)19])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 70364449210368LL)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))))));
                var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */int) ((unsigned short) arr_20 [i_3] [i_0 - 1] [i_0 - 1]))) >> (((arr_20 [i_5] [i_0 - 1] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                arr_23 [i_0] [22LL] [i_5] = ((/* implicit */long long int) min((max((((unsigned int) arr_5 [i_0 - 1])), (((/* implicit */unsigned int) min((var_5), (((/* implicit */int) arr_1 [10]))))))), ((~(min((2665038650U), (((/* implicit */unsigned int) (signed char)-104))))))));
            }
            arr_24 [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_5)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((unsigned int) arr_5 [i_3])) : (((/* implicit */unsigned int) var_8)))))));
        }
        arr_25 [1ULL] = ((long long int) ((int) min((arr_3 [i_0 - 1]), (arr_15 [8U]))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) -70364449210375LL)) && (((/* implicit */_Bool) 0ULL)))))))) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) (short)-17697)) ? (min((((/* implicit */long long int) 1629928638U)), (var_6))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))) : (-3704304131887614120LL)))))));
}
