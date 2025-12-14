/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104802
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_5 [i_0] [i_1 - 3] [i_2] [i_1 - 3])))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (16721284608984547774ULL))))));
                            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_6 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_3])) : (((((/* implicit */_Bool) (unsigned short)2831)) ? (((/* implicit */int) var_2)) : (arr_5 [i_3] [i_3] [i_3] [i_3])))))));
                            var_20 *= ((/* implicit */signed char) (unsigned short)10332);
                        }
                    } 
                } 
                var_21 *= ((/* implicit */signed char) max((arr_5 [i_0] [i_0] [i_1 - 4] [i_0]), (((/* implicit */int) (unsigned short)65535))));
                var_22 = ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [6U] [i_1 + 1] [i_1 - 2]))) ? (((/* implicit */int) arr_3 [(unsigned short)9] [i_1])) : ((-(min((((/* implicit */int) arr_8 [i_1] [2] [i_0] [i_1])), (var_14))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (int i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        {
                            arr_16 [i_1] [i_0] [i_0] [i_4] [i_5] = ((/* implicit */signed char) var_4);
                            var_23 = ((((/* implicit */int) arr_0 [i_0])) & ((~(((/* implicit */int) (unsigned short)7176)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_17))))), (var_1))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (-2147483629)))), (min((var_13), (((/* implicit */int) (signed char)4))))))))))));
}
