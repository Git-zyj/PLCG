/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127845
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
    var_17 = ((/* implicit */unsigned long long int) var_8);
    var_18 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [(_Bool)1] [(short)10] [16LL] [16LL] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)51835)))) > (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_5 [i_0 - 1] [(signed char)0] [i_0])))) : (((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (unsigned char)148))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */signed char) (-(((unsigned long long int) ((18446744073709551600ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))))))));
                                var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_4]))));
                                var_20 = ((/* implicit */_Bool) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
