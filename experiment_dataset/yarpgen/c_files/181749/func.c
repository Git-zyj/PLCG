/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181749
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
    var_20 += (short)-32237;
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-12606))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 3] [i_1 + 1])) <= (((/* implicit */int) arr_1 [i_0 - 3] [i_2 - 2]))))))));
                            var_22 = ((/* implicit */unsigned short) min((arr_1 [i_1 - 3] [i_1 - 3]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1] [i_2])) <= (((/* implicit */int) arr_5 [i_0 - 2] [i_2 - 1] [i_2 + 1])))))));
                            var_23 = arr_3 [i_0 - 2];
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */int) arr_8 [i_1 + 3] [i_0 - 1])) > (((/* implicit */int) arr_8 [i_1 + 3] [i_0 - 2]))))), (min((arr_8 [i_1 + 2] [i_0 - 2]), (arr_8 [i_1 - 3] [i_0 - 2])))));
                var_25 = ((/* implicit */unsigned long long int) 4294967295U);
                var_26 = ((/* implicit */int) min((max((((/* implicit */long long int) -175063241)), (((((/* implicit */_Bool) (short)-5483)) ? (arr_0 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (short)5485))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-38)), ((short)-5483)))) : ((~(((/* implicit */int) arr_9 [i_0])))))))));
            }
        } 
    } 
}
