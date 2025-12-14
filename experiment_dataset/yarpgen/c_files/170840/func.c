/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170840
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_4] = ((/* implicit */long long int) arr_4 [i_0] [i_2] [i_4]);
                                arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (-(-1843275731)));
                                var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)116))))) ? (6743481103103648486LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)162))))) ? (((((/* implicit */int) arr_10 [i_0] [i_1] [i_4] [i_3] [i_4])) << (((((/* implicit */int) (unsigned char)69)) - (63))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))))))));
                                arr_15 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)43195)) % (((/* implicit */int) (unsigned char)40))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) min(((short)21629), ((short)-22712)))) : (((((/* implicit */_Bool) (short)22712)) ? (((/* implicit */int) (short)4740)) : (((/* implicit */int) (short)-4741)))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */int) var_4)), ((-(((/* implicit */int) (unsigned char)46))))))) > ((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) % (-1109495195192317994LL)))))));
    var_17 = ((/* implicit */signed char) ((long long int) var_0));
}
