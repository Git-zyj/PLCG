/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130991
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
    var_20 ^= ((((/* implicit */_Bool) max((((var_11) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((unsigned char)253), (((/* implicit */unsigned char) (_Bool)1)))))))) ? ((-(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */int) max((var_3), (max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)77)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned char) var_19);
                            arr_11 [i_1] [(signed char)9] [10] [i_1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))) ? (var_11) : (var_19))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 2] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 - 1]))))) - (max((((/* implicit */unsigned int) arr_2 [i_1 - 1])), (var_7)))));
                        }
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */unsigned char) (unsigned short)35144);
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (unsigned char)175)))))));
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */int) var_14)) / (var_4))) : (min((var_11), (((/* implicit */int) var_10))))))))))));
}
