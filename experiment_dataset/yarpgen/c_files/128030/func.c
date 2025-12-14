/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128030
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
    var_20 = ((/* implicit */signed char) var_8);
    var_21 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */long long int) 536870880)) : (4091036720815965794LL))) * (((/* implicit */long long int) ((((arr_6 [i_0]) & (var_12))) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)21280))))) & (max((((/* implicit */long long int) (unsigned char)166)), (var_11)))))), ((((!(var_15))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_5 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) (unsigned char)166);
                                var_24 &= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21280)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned short)4]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_9 [11ULL] [i_1] [i_3] [(short)0])) ? (((/* implicit */int) (unsigned char)74)) : (((/* implicit */int) var_16)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */short) (((+(((/* implicit */int) var_6)))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)-21259)))))));
                                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_6] [i_5] [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) | (((/* implicit */unsigned long long int) var_19))))) ? (1843485438049669234ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_5] [i_5] [i_0])))));
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_0]))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21295)))))) ? ((+(18446744073709551615ULL))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6] [18U] [i_5] [i_2] [i_1] [18LL]))) | (arr_0 [i_1] [i_5])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2] [i_5] [i_1] [i_0])))))) : (-4091036720815965795LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
