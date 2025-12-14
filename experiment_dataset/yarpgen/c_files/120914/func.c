/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120914
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 3087576898259439092LL))))));
                                var_15 -= ((/* implicit */signed char) ((((/* implicit */int) max(((signed char)14), ((signed char)-1)))) + (((/* implicit */int) max(((!(((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) (signed char)-27)))))))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_5))))))))));
                                var_17 = ((/* implicit */unsigned short) arr_5 [i_3]);
                                arr_13 [i_1] [(unsigned short)22] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_3 + 2])) ? (((/* implicit */int) arr_0 [i_3 + 1])) : (((/* implicit */int) (signed char)-1))))));
                            }
                            for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                            {
                                var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned short)32043)), (((var_10) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 + 1])))))));
                                arr_16 [i_2] [i_5] [i_2] [i_5] [i_0] &= ((/* implicit */short) arr_4 [i_0] [i_0]);
                            }
                            arr_17 [(unsigned short)24] [17LL] [i_2] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) (-((~(((/* implicit */int) arr_14 [i_3 - 2] [(unsigned short)18] [i_1] [i_1] [i_0] [i_0]))))))) : (((long long int) min((((/* implicit */long long int) var_9)), (var_10)))));
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] = var_6;
                var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? ((+(((/* implicit */int) var_13)))) : ((-(((/* implicit */int) var_9))))));
                arr_19 [i_1] [i_1] = (-((((+(var_8))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18997))))));
                var_20 = (-((~(var_3))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (var_10))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))))))))));
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_0))));
}
