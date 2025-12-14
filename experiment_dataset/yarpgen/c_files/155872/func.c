/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155872
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
    var_14 = ((/* implicit */unsigned int) var_10);
    var_15 ^= var_0;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */short) 236043525);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_1] [i_3] [0LL] = ((/* implicit */unsigned short) ((((var_5) != (var_0))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (0U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) << (((4294967291U) - (4294967288U))))))));
                                var_16 ^= ((/* implicit */unsigned int) var_4);
                                arr_16 [i_1] = ((/* implicit */long long int) ((min((4294967282U), (((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19))))))) + (4294967265U)));
                                var_17 = ((/* implicit */short) ((var_13) % (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)13)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */int) var_9);
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [4U])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                arr_24 [i_1] = ((/* implicit */int) (~(((31U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))));
                                arr_25 [9U] [i_1] [i_1] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) var_9);
                                var_19 = 1150850839U;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
