/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147666
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
    var_16 = ((/* implicit */unsigned char) max((((var_15) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_12))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_17 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_2 [i_2])), (max((var_9), (((/* implicit */unsigned long long int) ((0ULL) > (((/* implicit */unsigned long long int) -4677661920511819788LL)))))))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((unsigned int) 18446744073709551615ULL)))))));
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((unsigned short) var_1))) ? (min((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */long long int) (signed char)102)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-76)))))));
                }
                var_19 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << ((((+(var_9))) - (3951092251639790844ULL)))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_3 [9ULL])) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) (unsigned char)9)))) : (arr_0 [i_0]))), (((/* implicit */int) ((((/* implicit */int) (!(var_15)))) < (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))))))));
                arr_8 [i_0] = ((/* implicit */signed char) var_1);
                var_21 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_5))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15900))) % (794411487U)))))))));
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) (-2147483647 - 1))))))))))));
}
