/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140770
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1 + 1] [i_2] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) && (((/* implicit */_Bool) var_0)))))) / (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2] [i_1] [(signed char)6]))))))))));
                    var_10 = ((/* implicit */unsigned int) (+((-((-(((/* implicit */int) (signed char)115))))))));
                    var_11 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(min((304125008U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1]))))))), ((~(max((((/* implicit */unsigned long long int) (unsigned char)222)), (2885440729094512367ULL)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)110)), (15561303344615039263ULL))))));
    var_13 += ((/* implicit */short) (-(((/* implicit */int) (signed char)-115))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            {
                var_14 = ((/* implicit */short) min((((((((/* implicit */int) (signed char)-110)) & (((/* implicit */int) (unsigned char)19)))) / ((+(((/* implicit */int) (signed char)4)))))), (((/* implicit */int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (unsigned char)172))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) 338998691)), (arr_9 [i_3])))))))));
                var_15 |= (~(((((/* implicit */unsigned long long int) ((arr_9 [i_4]) + (((/* implicit */unsigned int) arr_12 [i_3]))))) + (((((/* implicit */unsigned long long int) var_6)) + (8133523955406394662ULL))))));
                arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(1100345134422195491ULL))))))) < ((+(((/* implicit */int) ((((/* implicit */_Bool) 2305280059260272640LL)) && ((_Bool)0))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (-((~(((var_5) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173)))))))));
}
