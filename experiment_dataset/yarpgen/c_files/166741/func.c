/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166741
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
    var_20 = ((/* implicit */signed char) min(((+(4294967295U))), (4294967295U)));
    var_21 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_1 [(signed char)21] [i_1 + 1]) : (((/* implicit */int) (unsigned char)20))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) & (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4081)))))));
                    var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((min((((/* implicit */unsigned int) (short)32759)), (1U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -86998620)) ? (((/* implicit */int) (short)-32755)) : (arr_0 [i_2] [i_1]))))))) / ((-(9223372036854775789LL)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(2096640U)))) ? (var_19) : (((/* implicit */long long int) max((var_16), ((~(((/* implicit */int) var_11))))))))))));
    var_25 = ((/* implicit */signed char) min(((short)32752), (((/* implicit */short) (_Bool)1))));
}
