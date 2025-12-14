/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161063
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
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) 380553366U);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -285962068254537236LL)) ? (((/* implicit */int) (short)11338)) : (((/* implicit */int) (_Bool)1))))))));
                                arr_14 [i_2] [i_0 + 4] [i_0 + 4] = ((/* implicit */short) 3641184347U);
                                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11354)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-2901565669686020267LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) 
            {
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (short)-9856))));
                        var_22 ^= ((/* implicit */unsigned int) (unsigned char)16);
                        var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) min(((short)11338), ((short)11338)))) : (((((/* implicit */_Bool) ((unsigned short) (short)7600))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) < (1965520042U)))) : (((/* implicit */int) (unsigned short)59080))))));
                    }
                } 
            } 
        } 
    }
    var_24 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-28313), (((/* implicit */short) (unsigned char)122))))) ? ((~(4294967287U))) : (min((1429721142U), (((/* implicit */unsigned int) 4095))))))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) << (((4294967287U) - (4294967279U)))))) <= (min((((/* implicit */long long int) min(((short)-11339), ((short)22711)))), (((-6524264154636913140LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))))));
}
