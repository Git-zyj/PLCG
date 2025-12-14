/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15580
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
    var_15 = ((/* implicit */signed char) (+(12258607117544454277ULL)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (!(arr_0 [i_0])))), (arr_2 [i_0]))), ((-(arr_2 [i_0])))));
        var_16 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : ((+(arr_1 [8])))))), ((+((+(arr_2 [(signed char)10])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_6 [i_1]), (arr_6 [i_1])))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (arr_5 [i_1])))))) ? (((/* implicit */int) arr_6 [i_1])) : (min((((/* implicit */int) arr_6 [i_1])), (arr_4 [i_1] [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((signed char) arr_6 [i_1])));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)127)) : (1879048192)));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) min((arr_6 [i_1]), (arr_6 [i_1])))) : (((/* implicit */int) arr_6 [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_2])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_2])))))) * (((arr_2 [18U]) % (arr_9 [i_2])))));
        arr_12 [i_2] [i_2] = ((/* implicit */int) (+(((arr_2 [i_2]) << (((unsigned long long int) arr_0 [i_2]))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3 + 1])) ? (arr_4 [i_3 + 1] [i_4]) : (arr_4 [i_4] [i_3 - 1])));
            arr_19 [i_4] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_2 [14ULL])))) ? ((+(arr_5 [i_3]))) : (((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_5 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))))));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3 - 2])) ? (((/* implicit */unsigned int) arr_1 [i_3 + 1])) : (arr_17 [i_3 + 1] [i_3 - 2] [i_3 + 1]))))));
        }
        for (unsigned char i_5 = 4; i_5 < 16; i_5 += 1) 
        {
            var_21 = ((/* implicit */_Bool) (-(arr_5 [i_3 + 1])));
            arr_22 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_5] [i_5 - 3] [i_5 + 2])) ? (arr_17 [i_5] [i_5 - 2] [i_5]) : (((/* implicit */unsigned int) arr_4 [i_3] [i_5 - 3]))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (((arr_20 [i_3]) ? (arr_4 [i_3] [(signed char)9]) : (((/* implicit */int) arr_23 [i_3] [i_5])))) : (((arr_20 [i_3 - 2]) ? (arr_16 [i_3]) : (((/* implicit */int) arr_20 [i_3 + 1])))))))));
                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_3 - 1] [i_5] [i_5 + 1]))));
            }
        }
        for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            var_24 = ((/* implicit */signed char) ((arr_16 [i_3 + 1]) << (((/* implicit */int) arr_6 [i_3 - 1]))));
            var_25 = ((/* implicit */signed char) arr_24 [i_7] [(signed char)17] [i_7] [i_3 + 1]);
            arr_28 [i_3] = ((((/* implicit */_Bool) ((long long int) arr_1 [i_3]))) ? (((/* implicit */unsigned long long int) arr_1 [i_3 - 1])) : (((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_14 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 + 1]))))));
            var_26 ^= ((/* implicit */int) ((long long int) arr_23 [i_3 - 2] [i_3 - 1]));
            var_27 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_21 [i_3])))) || (((/* implicit */_Bool) ((long long int) arr_2 [i_3 - 2])))));
        }
        var_28 = ((/* implicit */signed char) (+(((/* implicit */int) arr_20 [i_3 + 1]))));
    }
    var_29 += ((/* implicit */signed char) var_11);
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : ((+(var_1))))))));
}
