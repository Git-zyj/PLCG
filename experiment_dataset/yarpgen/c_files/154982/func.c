/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154982
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((1910145622) - (1910145605)))))) && (((/* implicit */_Bool) arr_7 [9LL] [i_0] [i_2] [i_3])))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) ((((unsigned long long int) var_8)) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7573496527202036500ULL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11)))))))) >= ((+(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) max((min((min((((/* implicit */int) (signed char)101)), (1910145601))), (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))), ((-(((/* implicit */int) var_8))))));
            }
        } 
    } 
    var_21 -= var_6;
}
