/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13767
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (unsigned short)53383))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1]))) : (((/* implicit */int) (unsigned char)73))));
                var_10 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_3 [i_1] [(_Bool)1] [i_1]))) - (((arr_0 [i_1]) ? (((/* implicit */int) var_7)) : (6)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)2032)))) * (((/* implicit */int) (_Bool)0)))))));
                            arr_17 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16547)) ? (((/* implicit */int) (unsigned short)48665)) : (((/* implicit */int) (unsigned short)12152))));
                            arr_18 [i_2] [i_2] [i_4] [i_2] [i_2] [i_5] = ((/* implicit */_Bool) (+(((((((/* implicit */int) (unsigned short)53364)) % (((/* implicit */int) (short)1016)))) % (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)12150))))))));
                            var_12 = ((/* implicit */_Bool) var_1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_24 [i_6] [i_2] [i_6] [i_7] = ((signed char) arr_9 [i_2] [i_2] [i_2]);
                            var_13 = ((/* implicit */signed char) (unsigned short)53378);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */short) var_3)), ((short)1016)));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)53384)) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) : ((-9223372036854775807LL - 1LL))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)63)), (8231114763271060455LL)))), (18446744073709551615ULL)))));
    var_16 = ((/* implicit */_Bool) var_9);
}
