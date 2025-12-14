/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138103
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_11 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)29392)) + (((/* implicit */int) (short)22736)))))))), (max((((/* implicit */unsigned int) var_6)), (((((/* implicit */unsigned int) ((/* implicit */int) (short)29385))) * (2555476711U)))))));
                                var_12 = arr_0 [i_0];
                                var_13 &= ((/* implicit */short) (-(min((var_7), (((/* implicit */int) (unsigned short)24664))))));
                                arr_13 [i_3] [i_0] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [6ULL])) << (((((/* implicit */int) (unsigned short)24651)) - (24644))))) >> (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) arr_4 [i_1]))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */int) 0ULL);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (((((~(9301077511270494992ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8233))))) && (((/* implicit */_Bool) var_1))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((max((((/* implicit */int) max((var_8), (var_5)))), (((int) 2555476711U)))) ^ (((/* implicit */int) var_8)))))));
    var_17 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18863)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (short)8251))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (short)31)) % (((/* implicit */int) var_1)))))), (min((((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) 1739490584U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
}
