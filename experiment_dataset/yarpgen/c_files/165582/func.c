/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165582
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((_Bool) 658008081277363911LL));
        var_13 = ((/* implicit */unsigned short) min((((unsigned int) max((var_1), (((/* implicit */long long int) var_5))))), (((/* implicit */unsigned int) (((+(var_0))) < (((/* implicit */unsigned int) arr_2 [i_0 - 2])))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-123)) ? (-102718088862491827LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_15 = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) (((~(arr_5 [i_2 - 1] [i_1 + 2] [i_0 + 1]))) ^ (((/* implicit */unsigned long long int) ((3140289569U) << (((((/* implicit */int) arr_11 [i_1 - 2] [i_2 - 1] [(short)4] [i_2])) - (61))))))))) : (((/* implicit */unsigned short) (((~(arr_5 [i_2 - 1] [i_1 + 2] [i_0 + 1]))) ^ (((/* implicit */unsigned long long int) ((3140289569U) << (((((((/* implicit */int) arr_11 [i_1 - 2] [i_2 - 1] [(short)4] [i_2])) - (61))) - (44)))))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))))) || (((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned short)44353))))));
    }
    /* LoopNest 2 */
    for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_20 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (max((((/* implicit */long long int) (_Bool)0)), (var_8)))))));
                var_17 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (arr_17 [i_4 + 2] [i_4 - 1]))));
                arr_21 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_16 [i_4])), (arr_15 [10LL])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_19 [i_5])))) <= (((((/* implicit */_Bool) arr_17 [i_4] [i_5])) ? (((/* implicit */unsigned long long int) arr_17 [i_4 - 1] [i_4 - 1])) : (arr_18 [(short)17] [i_5])))))) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
