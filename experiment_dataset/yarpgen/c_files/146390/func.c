/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146390
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_18 += ((/* implicit */_Bool) ((((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
        var_19 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_16) : (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)4032))));
            var_21 += ((/* implicit */short) ((unsigned int) arr_5 [i_2] [i_1]));
        }
        var_22 = ((/* implicit */unsigned int) arr_0 [3U] [3U]);
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (var_17))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) || (((/* implicit */_Bool) (short)(-32767 - 1)))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) ((((arr_10 [i_3]) & (((/* implicit */unsigned long long int) arr_9 [i_3] [i_3])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [i_3]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 1; i_4 < 23; i_4 += 2) 
        {
            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 2])) < (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-40)) || (((/* implicit */_Bool) (unsigned char)224)))))));
            arr_14 [i_4] = ((/* implicit */unsigned long long int) ((var_3) * (arr_9 [i_4 + 2] [i_4 - 1])));
            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_4 + 1])) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned char)59)))))));
        }
        var_27 ^= ((((/* implicit */_Bool) min((arr_9 [i_3] [i_3]), (arr_9 [i_3] [i_3])))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) max((arr_9 [i_3] [i_3]), (((/* implicit */unsigned int) var_2))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)-4033)))))))));
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned char) (!((_Bool)1)));
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_15))));
        var_30 = ((/* implicit */unsigned char) var_3);
    }
    var_31 = ((/* implicit */short) (+((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4032))))))));
}
