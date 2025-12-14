/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161753
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_4 [i_0] [i_1 - 1]);
                arr_6 [i_0] [12ULL] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))) % (var_10))), (((/* implicit */long long int) ((max((var_15), (((/* implicit */unsigned int) arr_1 [i_1])))) * (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (var_6)))))))));
                var_18 = ((/* implicit */signed char) (!(((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) >= (((/* implicit */int) (unsigned char)192))))));
                var_19 |= ((/* implicit */unsigned char) max(((((+(((/* implicit */int) var_11)))) + (((/* implicit */int) max((((/* implicit */signed char) var_4)), ((signed char)-36)))))), ((-(arr_4 [i_1 + 2] [i_1 + 2])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_20 -= ((/* implicit */unsigned char) var_0);
                arr_11 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_2])), (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529))) : (var_3)));
            }
        } 
    } 
}
