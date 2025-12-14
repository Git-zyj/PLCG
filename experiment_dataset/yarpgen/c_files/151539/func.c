/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151539
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (max((arr_1 [14ULL]), (((/* implicit */long long int) arr_2 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min(((short)-1679), ((short)1669))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_2] [i_2])) << (((((/* implicit */int) (short)1700)) - (1685)))))))))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_17))));
                        }
                        var_24 = ((/* implicit */long long int) ((_Bool) min((((/* implicit */int) (short)1704)), ((+(((/* implicit */int) (_Bool)1)))))));
                        arr_15 [i_3] [6U] [i_1] [i_3] [i_2] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0]);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (+(((/* implicit */int) (short)-1704)))))));
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 3; i_6 < 21; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (short i_9 = 2; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_26 = var_4;
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((((/* implicit */int) (short)1711)) % (arr_28 [i_5] [i_5] [i_5] [(_Bool)1] [i_5]))) >> ((((~(max((var_10), (((/* implicit */long long int) var_13)))))) + (2144576804333046243LL))))))));
                            }
                        } 
                    } 
                    arr_32 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) var_16);
                    arr_33 [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */short) max((max((((/* implicit */long long int) var_19)), (((long long int) arr_16 [i_7] [i_6 - 1])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)1668)))))));
                }
            } 
        } 
        var_28 = ((/* implicit */int) max((var_28), ((~(((/* implicit */int) (short)-1695))))));
    }
    var_29 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-55)) ? (min((var_17), (((/* implicit */long long int) var_19)))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))), (((/* implicit */long long int) ((short) (-(((/* implicit */int) var_5))))))));
}
