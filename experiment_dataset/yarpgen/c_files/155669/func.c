/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155669
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)5586))));
    var_11 += ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))) : (var_1))));
    var_12 = var_1;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (-(((unsigned int) 679781157364312589LL)))));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) * ((-(((/* implicit */int) arr_0 [i_0])))))))));
        var_14 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)8191)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_9)))))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)1)))))))));
        var_16 = ((/* implicit */unsigned int) ((unsigned short) var_7));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] &= ((/* implicit */unsigned char) ((-1402156245) >= (-1402156265)));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (unsigned char)255)), (-5153315233218545772LL))), (((/* implicit */long long int) (unsigned char)11))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_9 [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1))));
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
            arr_11 [i_2] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (((unsigned long long int) (unsigned short)12953))))));
        }
    }
}
