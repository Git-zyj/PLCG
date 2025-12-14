/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106680
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
    var_10 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21611)) >> (((((/* implicit */int) var_6)) - (27768)))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_4))))))), (0ULL)));
    var_11 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)24492)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_0))));
    var_12 = ((/* implicit */unsigned char) 7262180786744924420LL);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (unsigned short)27413)))) : (((/* implicit */int) ((short) arr_4 [i_0 + 1]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43925))))) >> (((((/* implicit */_Bool) 2063661601)) ? (min((((/* implicit */unsigned long long int) var_8)), (11375612772166211120ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_1 [i_3])))))))));
                            var_15 = ((/* implicit */int) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191))) : (arr_6 [i_2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_1 - 1] [i_0 + 1])))))));
                        }
                    } 
                } 
                var_16 = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) ((short) arr_4 [i_0])))));
            }
        } 
    } 
}
