/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134589
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_2] [i_2] [i_0])), (arr_2 [i_0 - 2]))))));
                    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -920554556)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) : (-797208652137200380LL)));
                    var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)26)))) ? (((((/* implicit */_Bool) 1454082225)) ? (7584000288264889222ULL) : (((/* implicit */unsigned long long int) -2634998876905500267LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) : (4816601042784178857LL))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)250)) ? (-2062686399) : (2065086393)));
    var_19 = ((/* implicit */short) min((var_12), (var_15)));
    var_20 += ((/* implicit */unsigned char) var_4);
}
