/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168566
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
    var_18 = ((/* implicit */_Bool) max(((~((+(((/* implicit */int) (unsigned short)22707)))))), (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) arr_14 [(_Bool)1] [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3]);
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (unsigned char)210))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_1)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 2])))))));
                var_22 += ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (unsigned short)42828))) <= (((((/* implicit */_Bool) ((short) 18446744073709551615ULL))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)27182)) != (((/* implicit */int) arr_9 [i_1] [i_1] [i_0] [i_0]))))) : (((/* implicit */int) var_10))))));
            }
        } 
    } 
}
