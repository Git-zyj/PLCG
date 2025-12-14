/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129854
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
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_13 &= ((/* implicit */short) (~((-(arr_2 [i_0 - 2] [i_0 - 3])))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (+(18446744073709551615ULL));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) - (arr_7 [i_1 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1])))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (signed char)-118))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (~((-(-3523957474922262262LL)))));
                var_17 = arr_1 [i_2 + 2];
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 3; i_5 < 8; i_5 += 2) 
                    {
                        {
                            arr_21 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (3194026950612121349LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2 + 3])))))) == (((unsigned long long int) (_Bool)1))));
                            var_18 = ((/* implicit */_Bool) arr_12 [i_2 - 1] [(signed char)2]);
                            arr_22 [i_2 + 2] [9U] [i_3] [i_2 + 2] [(signed char)4] = ((/* implicit */unsigned int) (-(var_6)));
                            var_19 = ((/* implicit */unsigned short) (short)17359);
                        }
                    } 
                } 
                arr_23 [i_3] [i_3] [i_2 - 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)19929))));
                var_20 = ((/* implicit */unsigned int) (unsigned char)172);
            }
        } 
    } 
}
