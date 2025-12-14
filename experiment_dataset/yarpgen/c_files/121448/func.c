/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121448
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(var_13)))) || (((/* implicit */_Bool) var_9))))) : (var_3)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_8 [i_0 + 1] [i_1] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? ((~(((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1])))) : (((/* implicit */int) (unsigned char)5))));
                arr_9 [8LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)4)) < ((+(((/* implicit */int) arr_5 [i_0 - 1] [i_1]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_12 [i_0] [i_0] [i_0]))));
                            var_18 = ((/* implicit */unsigned short) ((((arr_7 [i_3 + 1]) << (((arr_12 [i_0 - 1] [i_0 - 2] [i_3 + 1]) - (7270895266952981209ULL))))) == (((/* implicit */unsigned long long int) min((arr_10 [i_0] [14ULL]), (arr_10 [i_2] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 |= var_13;
    var_20 = ((/* implicit */unsigned long long int) ((unsigned int) var_9));
    var_21 = ((/* implicit */unsigned long long int) var_12);
}
