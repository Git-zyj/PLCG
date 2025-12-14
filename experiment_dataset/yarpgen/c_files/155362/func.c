/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155362
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)127))));
                    var_15 = ((/* implicit */unsigned short) (-(((unsigned int) (!(((/* implicit */_Bool) var_5)))))));
                    var_16 = min((((/* implicit */unsigned long long int) (unsigned short)127)), (min((((/* implicit */unsigned long long int) (unsigned short)65409)), (2311401427427623378ULL))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (unsigned char)3);
                                var_18 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-11)))), ((+(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)6704));
}
