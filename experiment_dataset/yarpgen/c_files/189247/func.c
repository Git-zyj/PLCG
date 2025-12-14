/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189247
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
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) ((unsigned long long int) var_8))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_15 = arr_7 [i_2];
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0 + 2] [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_5 [i_0])))));
                                var_16 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) ((_Bool) (unsigned char)0))) * (((/* implicit */int) arr_14 [(_Bool)1] [i_1] [i_1] [i_2] [i_2] [i_4] [i_4])))));
                                var_17 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2] [i_3]);
                                arr_16 [i_0] = ((/* implicit */unsigned long long int) ((short) ((unsigned int) (~(((/* implicit */int) arr_5 [i_1]))))));
                                var_18 += ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_0]))))) & (((unsigned long long int) arr_4 [12ULL] [i_3] [i_4])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) ((int) arr_2 [i_0 - 1] [i_0]))))));
                    var_20 = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_1]);
                }
                var_21 = ((unsigned short) (signed char)6);
            }
        } 
    } 
}
