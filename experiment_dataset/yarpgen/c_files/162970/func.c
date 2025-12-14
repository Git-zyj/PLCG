/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162970
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 2147483647)) ? (((unsigned long long int) arr_4 [i_1] [i_1])) : (((/* implicit */unsigned long long int) ((int) 7514694764505653987LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) == (((var_4) / (((/* implicit */long long int) 1329010769)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    var_10 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) != (((/* implicit */int) (signed char)23))))) >= (((/* implicit */int) arr_4 [i_0] [i_2]))));
                    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_2] [i_1] [i_2])) : (((/* implicit */int) (signed char)74))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2] [i_1] [i_2]))))))))));
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) 9894504830652022841ULL))));
                }
            }
        } 
    } 
    var_13 *= ((/* implicit */signed char) min((((((/* implicit */int) ((983412337U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) & (((/* implicit */int) ((unsigned char) var_4))))), (((/* implicit */int) var_0))));
}
