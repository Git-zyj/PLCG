/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108379
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
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_17)))))))), (max((982924334U), (((/* implicit */unsigned int) (unsigned short)0))))));
    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) var_8));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (signed char)-31);
                var_21 = ((/* implicit */unsigned short) ((max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (var_12)))))) < (15353478651245882428ULL)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (3148080082U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)26)))) : (var_1)))) : (min((((/* implicit */long long int) 3269367467U)), (arr_8 [i_3] [i_3] [i_2] [i_3])))));
                    var_23 = ((/* implicit */signed char) var_12);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_8))));
}
