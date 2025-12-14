/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109851
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(((/* implicit */int) var_10)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_14 -= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)34961))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    for (unsigned char i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_15 = ((var_8) * (var_8));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) -1036934540))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)49385)))))));
        }
        arr_14 [i_0] = var_10;
        var_18 = ((/* implicit */unsigned long long int) var_2);
    }
    for (int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
    {
        var_19 *= ((/* implicit */short) 18348631415778637046ULL);
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) (+(98112657930914565ULL)));
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) (short)-11522)) + (11527)))));
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((var_7) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)-11521)) + (((/* implicit */int) (short)-11529))))))))))));
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_0))));
        var_22 |= ((/* implicit */signed char) (~(((/* implicit */int) (short)-11521))));
    }
    for (int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
    {
        arr_26 [i_7] [i_7] &= ((/* implicit */unsigned long long int) (-(-1728494038)));
        var_23 = ((/* implicit */int) var_5);
    }
    var_24 ^= ((/* implicit */short) (+(((/* implicit */int) var_1))));
}
