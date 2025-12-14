/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158520
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16378)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1023)) - (((/* implicit */int) (unsigned short)32768))))) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (unsigned short)992)))) : ((+(((/* implicit */int) var_10))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [(unsigned char)23] |= ((/* implicit */_Bool) (short)14981);
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (unsigned short)359)))))) : ((((!(((/* implicit */_Bool) (unsigned short)16128)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] = ((/* implicit */signed char) ((short) arr_11 [i_0] [i_1 + 1] [i_2] [i_0]));
                            arr_15 [23ULL] [(short)23] [i_1] [(_Bool)1] [i_2] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2 - 1])) || (((/* implicit */_Bool) min(((unsigned short)51299), (((/* implicit */unsigned short) var_9))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) % (((/* implicit */int) ((short) var_4)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)12518)))) % (4201098446U)))));
                            arr_16 [i_2] [i_2] [i_0] [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_12 [i_2 - 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
