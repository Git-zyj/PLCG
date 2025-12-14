/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134310
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
    var_11 = ((/* implicit */_Bool) var_4);
    var_12 ^= ((((/* implicit */_Bool) var_4)) ? ((-((+(((/* implicit */int) (_Bool)1)))))) : ((-(((((/* implicit */int) (unsigned short)29198)) * (((/* implicit */int) var_9)))))));
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (((((/* implicit */unsigned long long int) var_7)) + (5454500020528449810ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
    var_14 ^= var_8;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 1) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_0 + 3] [i_1]));
            arr_4 [i_0] [i_1] = ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
            var_17 -= ((/* implicit */short) ((((unsigned long long int) var_9)) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)12235)))))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_18 = ((/* implicit */int) 2523534721U);
            arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_4);
        }
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            var_19 ^= ((/* implicit */unsigned char) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3] [i_3 - 1])))));
            arr_11 [i_3] = var_4;
            arr_12 [i_3] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_6 [i_0 - 1])));
        }
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_4)) ? (arr_10 [3] [i_0] [i_0]) : (((/* implicit */int) var_3)))))))));
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (!((_Bool)1)));
    }
    for (unsigned short i_4 = 1; i_4 < 7; i_4 += 1) /* same iter space */
    {
        var_21 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (arr_14 [i_4])))) != (arr_0 [i_4 + 3])))) * (((/* implicit */int) ((((/* implicit */int) (short)511)) > (((/* implicit */int) ((unsigned short) var_0))))))));
        var_22 *= ((/* implicit */short) ((_Bool) max((min((5454500020528449810ULL), (8530254402933753228ULL))), (((/* implicit */unsigned long long int) arr_7 [i_4 + 3])))));
    }
}
