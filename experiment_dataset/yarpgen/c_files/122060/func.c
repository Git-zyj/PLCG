/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122060
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
    var_15 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1] [i_2]))))))) / (min((196608U), (((/* implicit */unsigned int) (short)(-32767 - 1))))))))));
                            var_17 = ((/* implicit */short) max((var_17), ((short)(-32767 - 1))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_18 = 522029150;
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32744))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
