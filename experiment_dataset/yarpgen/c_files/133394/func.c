/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133394
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
    var_10 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 1])))));
                var_12 |= ((/* implicit */unsigned int) max((var_9), ((((+(((/* implicit */int) var_2)))) * (((/* implicit */int) ((unsigned char) var_2)))))));
                var_13 |= ((/* implicit */unsigned int) max((var_1), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)194)) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 497044609)) ? (((/* implicit */int) arr_0 [i_1 + 3] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))) : (min((var_8), (((/* implicit */unsigned long long int) arr_2 [8LL] [i_1 + 3]))))))));
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(((/* implicit */int) (((-(-5580912875229673305LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_2 = 3; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) (-(max((min((((/* implicit */unsigned long long int) var_6)), (var_1))), (((/* implicit */unsigned long long int) max((var_6), (497044609))))))));
        arr_8 [i_2] = ((/* implicit */_Bool) (((+(arr_6 [i_2 + 1]))) / (((/* implicit */long long int) -2147483635))));
        var_16 -= ((/* implicit */unsigned short) ((int) var_8));
    }
    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            arr_15 [i_3] [(_Bool)0] [i_3 - 3] = ((/* implicit */unsigned int) ((((-497044609) + (2147483647))) << (((var_0) - (8177926134309894608ULL)))));
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */long long int) (~(arr_17 [i_5] [i_3] [i_3])))) < (max((((/* implicit */long long int) var_7)), (arr_6 [i_5])))))), (((((/* implicit */_Bool) ((unsigned long long int) 497044608))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) 497044608))))))))))));
            var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3] [i_3] [i_5])) / (-497044608)))) ? (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3 + 2] [i_3 - 1])))))));
        }
        arr_19 [i_3] = ((/* implicit */_Bool) var_6);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        arr_24 [i_6] = ((/* implicit */short) (+(arr_21 [i_6])));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_6])) ^ (497044608)));
        var_21 += ((/* implicit */unsigned long long int) arr_6 [i_6]);
        var_22 += ((/* implicit */signed char) var_7);
        arr_25 [i_6] [4ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
    }
    var_23 ^= var_8;
}
