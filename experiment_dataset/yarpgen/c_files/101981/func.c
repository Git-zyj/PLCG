/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101981
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
    var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((var_9), (var_9)))) ? (((/* implicit */int) ((short) var_0))) : ((~(((/* implicit */int) var_1)))))), ((~(((/* implicit */int) var_6))))));
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] = (unsigned short)65535;
                            arr_11 [i_1] [i_1] [2U] [i_3] |= ((/* implicit */_Bool) (signed char)-43);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_4] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U)))) ? (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1])) ? (max((arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [i_5]), (((/* implicit */unsigned int) arr_5 [i_0])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_13))))) : (min((arr_15 [i_5] [i_1] [i_0] [i_0 - 1] [i_4] [i_0]), (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                            var_18 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) arr_15 [i_0 + 1] [i_1] [i_0] [i_0] [i_0 + 1] [i_1])), (((((/* implicit */_Bool) (signed char)-36)) ? (4501506040500751951ULL) : (4382070349299126848ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 += (+(((/* implicit */int) var_0)));
}
