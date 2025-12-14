/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12406
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
    var_11 -= ((/* implicit */unsigned char) var_0);
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))), (((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) var_10)), (var_6))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (arr_1 [i_0])));
            var_14 = ((/* implicit */unsigned char) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_6 [i_0] [i_1])));
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3))))))))));
            var_16 |= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) var_0))));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_17 = ((/* implicit */long long int) ((unsigned long long int) 9223372036854775807LL));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [(short)5] [i_2] [i_2]))) ? (((/* implicit */int) min((arr_4 [i_2] [i_3] [i_4]), (arr_4 [i_2] [i_3] [i_4])))) : ((((_Bool)1) ? (((/* implicit */int) (short)-20389)) : (((/* implicit */int) (short)-20384))))));
                        var_19 -= ((/* implicit */unsigned int) arr_9 [i_0] [i_4] [i_0]);
                    }
                } 
            } 
            var_20 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) min((max((((unsigned long long int) arr_9 [i_0] [i_0] [i_0])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))), (((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) var_10)))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [(short)7] [i_0])), (var_9))))))))) : (((/* implicit */unsigned int) min((max((((unsigned long long int) arr_9 [i_0] [i_0] [i_0])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))), (((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) var_10)))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [(short)7] [i_0])), (var_9)))))))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_19 [i_0] [i_0] = ((/* implicit */short) ((unsigned short) arr_10 [0] [i_5]));
            var_21 = ((/* implicit */int) (-(2389244049U)));
            arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_5] [i_0]))));
            arr_21 [i_0] [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_0] [i_5]));
            arr_22 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
        }
        arr_23 [i_0] = ((/* implicit */long long int) ((unsigned char) ((signed char) min((((/* implicit */int) arr_12 [i_0] [i_0] [i_0])), (var_4)))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))));
        arr_24 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) ? (var_4) : (max(((~(((/* implicit */int) arr_11 [(unsigned char)6] [i_0] [i_0] [i_0])))), (min((var_4), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
    }
}
