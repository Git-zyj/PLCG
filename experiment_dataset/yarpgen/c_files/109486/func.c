/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109486
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
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
    var_18 = ((/* implicit */unsigned long long int) (-(((((var_15) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30226))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_0] [i_0])))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 11783921635466724766ULL))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_4] [i_1 + 2] [i_1 + 1])) | (((/* implicit */int) arr_0 [i_1 - 1] [i_1])))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (unsigned char)73))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (((~(arr_9 [i_0] [i_1 + 2] [i_1]))) ^ (((((/* implicit */_Bool) var_15)) ? (arr_9 [i_0] [i_0] [i_1 + 2]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        }
        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            var_25 = ((/* implicit */_Bool) ((unsigned int) max((-1470783922), (((/* implicit */int) (unsigned char)183)))));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_5])))))))))))));
            var_27 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) (short)23278)))))));
            arr_18 [i_0] = ((/* implicit */unsigned short) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_11 [i_5] [i_5] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)190))))))))) : ((~(-179392034312007863LL)))));
        }
        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))));
        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_16))))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((((/* implicit */int) arr_20 [i_6])) * (((/* implicit */int) arr_20 [i_6])))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)7936))))));
        var_30 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_20 [i_6]))));
        arr_22 [i_6] = (((!(arr_20 [i_6]))) || (((/* implicit */_Bool) (unsigned short)59077)));
    }
}
