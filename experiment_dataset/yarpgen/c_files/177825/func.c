/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177825
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(2068877534U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (min((((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_3))))))));
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2479144753U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))) : (0ULL))), (((/* implicit */unsigned long long int) (-(var_11))))));
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (var_9)))))))) : (var_3)));
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11))))));
    }
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_17 -= ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_9)))) ? ((~(var_2))) : (((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) var_9))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -6294912536469880360LL)))))));
                            var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */short) var_10)), (var_7)))), ((-(var_3)))));
                            arr_16 [i_4] [i_4] = ((/* implicit */long long int) var_6);
                            arr_17 [i_1] [i_1] [i_4] [i_4] [(unsigned char)11] [i_1 + 1] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) ? (min((var_9), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 18; i_6 += 3) 
                        {
                            var_21 = var_3;
                            arr_20 [i_4] [i_2] [i_4] [i_4] [i_6] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                    }
                } 
            } 
        } 
        arr_21 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_5);
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -2118722545)), (-2924781215336118917LL)))) ? (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
    }
    var_23 = ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_4))))) ? (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)73)))) ? (0) : (((/* implicit */int) (_Bool)0))))));
}
