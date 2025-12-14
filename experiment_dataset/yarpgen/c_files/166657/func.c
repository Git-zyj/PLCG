/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166657
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((var_15) % (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14843)) | (((/* implicit */int) var_11))))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) max((var_11), (var_11))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned short)33347))))));
                                var_20 = ((/* implicit */unsigned long long int) var_5);
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)33347)) : (((/* implicit */int) (unsigned short)32189)))))));
                                var_22 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4]))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)32189)) ? (((/* implicit */int) (unsigned short)32189)) : (((/* implicit */int) (unsigned short)32188)))));
            }
        } 
    } 
}
