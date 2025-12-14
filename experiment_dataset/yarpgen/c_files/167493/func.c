/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167493
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) (unsigned char)7)))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-1)), ((short)17730)))) : ((~(((/* implicit */int) (unsigned char)219))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_17 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)3155)) : (((/* implicit */int) var_9)))) >> ((((~(((/* implicit */int) (unsigned char)91)))) + (119)))));
                            var_18 = ((/* implicit */unsigned char) ((unsigned short) var_7));
                            var_19 = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)22))))))))));
                arr_11 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) var_15);
    var_21 &= ((/* implicit */short) ((((((/* implicit */int) (short)17708)) / (((/* implicit */int) (unsigned short)11818)))) + (((((/* implicit */int) var_6)) / (((/* implicit */int) var_13))))));
    var_22 = ((/* implicit */unsigned int) var_12);
}
