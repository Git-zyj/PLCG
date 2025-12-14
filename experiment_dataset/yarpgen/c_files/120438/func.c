/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120438
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((max(((-(75490301U))), (((/* implicit */unsigned int) (~(var_5)))))) > (75490301U)));
                var_10 |= ((/* implicit */int) min((((/* implicit */unsigned int) (-(-1980422582)))), (75490301U)));
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) 8)) : (4219476981U)));
            }
        } 
    } 
    var_12 *= ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) + (((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11183))))))) > (((/* implicit */unsigned long long int) max((4219476987U), (((/* implicit */unsigned int) (unsigned char)62))))));
    var_13 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            {
                var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)4123)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) var_1))))))) : (min((((arr_11 [i_2 - 1]) + (((/* implicit */unsigned long long int) -1980422582)))), (((/* implicit */unsigned long long int) (+(var_2))))))));
                arr_12 [i_2] [i_2] [i_2] = ((arr_7 [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [14ULL] [i_2 - 1] [i_2 + 2]))))))));
                arr_13 [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) 11295548209179523405ULL)) ? (7057640560799922923LL) : (2704757229819110546LL));
            }
        } 
    } 
}
