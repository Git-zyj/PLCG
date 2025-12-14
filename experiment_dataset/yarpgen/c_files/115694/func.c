/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115694
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
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)51497)) : (((/* implicit */int) (unsigned short)14038))))), (max((-3637530455247631783LL), (((/* implicit */long long int) var_1))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-43))));
            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_12))));
            var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            var_16 = ((/* implicit */signed char) 4294950912LL);
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_2);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4355132053053733298ULL)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_16 [i_0 - 1] [i_2] [i_0] [7LL] [i_0 - 1] = ((/* implicit */int) min((((/* implicit */unsigned int) -1)), (1838170628U)));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483647)), (var_10)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1591434827U)))))))));
            arr_18 [(signed char)5] [i_0] = ((/* implicit */unsigned int) (unsigned short)1023);
        }
    }
    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        arr_21 [i_5] [i_5] = min((-2147483647), (((/* implicit */int) (_Bool)1)));
        var_19 = ((/* implicit */signed char) var_11);
    }
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)71))));
    var_21 = ((/* implicit */int) (unsigned char)101);
    var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)0)), (2410729739U)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))) ? (max((((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) 566017587))))), (max((((/* implicit */long long int) var_6)), (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)3), (((/* implicit */signed char) var_3))))))));
}
