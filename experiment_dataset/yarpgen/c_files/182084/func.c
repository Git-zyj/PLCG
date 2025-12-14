/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182084
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_10 += (short)-32757;
                var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0])) ? (min(((+(((/* implicit */int) (short)-3603)))), (((((/* implicit */_Bool) (short)-7202)) ? (((/* implicit */int) (short)-3625)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))) : (((/* implicit */int) var_4))));
                var_12 += ((/* implicit */short) arr_3 [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) var_6))));
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-7216)) ? (((/* implicit */int) (unsigned short)55521)) : (max((((((/* implicit */_Bool) (unsigned short)22744)) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (short)3603)))), (((/* implicit */int) ((((/* implicit */int) (short)25314)) <= (((/* implicit */int) var_1)))))))));
                            arr_9 [i_0] [i_1 + 3] [i_2 - 2] [i_3] = ((/* implicit */short) ((((/* implicit */int) min(((short)-7202), (arr_0 [i_2 - 2] [i_2 - 1])))) * (((/* implicit */int) ((short) max((((/* implicit */unsigned short) (short)-15700)), (var_1)))))));
                            arr_10 [i_0] [i_1] [i_0] [i_2] [i_3] [i_3] |= ((/* implicit */short) ((unsigned short) (unsigned short)16384));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) (short)-12991);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) ((short) min((((((/* implicit */int) (unsigned short)24762)) * (((/* implicit */int) var_6)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)24762)))))));
                var_17 *= max(((short)(-32767 - 1)), ((short)11843));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)13015)) ^ (((/* implicit */int) var_4)))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_5))))))) ? ((~(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((var_2), (var_5)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))));
}
