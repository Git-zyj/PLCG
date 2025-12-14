/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17087
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    arr_8 [6U] [i_1] [i_2 - 2] = ((/* implicit */long long int) ((unsigned char) ((-1LL) % (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
    var_16 = ((signed char) var_9);
    var_17 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (long long int i_5 = 2; i_5 < 19; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((signed char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8))), (((/* implicit */long long int) var_4)))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_11))));
                                var_20 += ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_6] [i_6] [i_6] [11] [i_6 + 1] [i_6 - 1]))) ^ ((-9223372036854775807LL - 1LL)))) >= (((/* implicit */long long int) (~(((var_14) % (((/* implicit */int) var_7)))))))));
                                arr_26 [i_3] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (+(1LL)))) ? ((~(((/* implicit */int) (signed char)24)))) : (((/* implicit */int) ((short) var_10))))));
                                var_21 = arr_20 [7] [i_3] [i_3] [i_3];
                            }
                        } 
                    } 
                    arr_27 [i_3] [i_3] [i_3] = ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)25900)) : (((/* implicit */int) arr_19 [i_3] [i_3] [i_5 - 2]))))), (1728394276U)))) & ((+(9223372036854775807LL))));
                    var_22 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_5 - 1] [(signed char)16])) & (var_2))) ^ (-672114264)));
                }
            } 
        } 
    } 
}
