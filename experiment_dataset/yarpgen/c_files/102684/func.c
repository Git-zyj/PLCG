/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102684
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
    var_18 = ((/* implicit */short) ((33554431ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (~((+((~(((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (+((-((+(((/* implicit */int) (_Bool)1))))))));
                                var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6559))));
                                arr_12 [i_0] [i_1] [5U] = ((/* implicit */short) (+((~(((127U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [4ULL] [(_Bool)1])))))))));
                                arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) (~(4294967168U)));
                                var_22 ^= (!(((((/* implicit */_Bool) (~(((/* implicit */int) (short)32749))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    var_23 ^= ((((/* implicit */long long int) (-(((((/* implicit */int) (short)63)) ^ (((/* implicit */int) (short)-32749))))))) % (((((/* implicit */long long int) ((/* implicit */int) ((-4391461263568452771LL) < (4391461263568452771LL))))) | ((~(var_11))))));
                }
            } 
        } 
    } 
}
