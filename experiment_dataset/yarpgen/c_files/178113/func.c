/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178113
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))))))))) == (((unsigned int) max((16777215), (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [4ULL] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) (-(var_9))))), (((((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) 5573246627755759627LL))))) % (((/* implicit */int) ((signed char) arr_3 [i_0] [i_1])))))));
                arr_8 [i_0] = ((/* implicit */_Bool) ((signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (var_9))), (var_0))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_15 ^= ((/* implicit */_Bool) max((((((/* implicit */int) var_2)) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (short)-16767)))))), ((~(((((/* implicit */int) var_2)) ^ (((/* implicit */int) (_Bool)1))))))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 3899822458U))));
                            var_17 -= ((/* implicit */long long int) -16777215);
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] [(short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1646317552U)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))))) : (min((((/* implicit */long long int) var_13)), (arr_12 [i_0])))));
            }
        } 
    } 
    var_18 = var_13;
    var_19 = var_1;
}
