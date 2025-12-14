/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163753
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_12)) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((-5176770254690964122LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31128))))))) : (((((/* implicit */_Bool) var_6)) ? (1881558739951170298LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24981))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_14) : (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */int) var_5)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) -5176770254690964122LL);
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((var_3) < (((/* implicit */int) var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)22031)) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20199)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32241)) ? (var_4) : (((/* implicit */int) var_5))))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            {
                var_16 -= ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)24982)))))) ^ (((((/* implicit */_Bool) (short)-14701)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (485546878530168510ULL))))), (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)-32241))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (-(var_12))))));
                    var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (short)-1))));
                }
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) ^ (((((/* implicit */_Bool) max((var_12), (var_3)))) ? (max((((/* implicit */unsigned long long int) (short)24353)), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                            arr_25 [i_4] [i_4] [i_7] = ((/* implicit */unsigned long long int) ((var_1) | (max((((((/* implicit */int) var_15)) % (((/* implicit */int) var_7)))), (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_7)) - (12127)))))))));
                        }
                    } 
                } 
                arr_26 [14U] [14U] [i_3] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) 14343673398664648874ULL)) ? (((/* implicit */int) var_13)) : (var_1))), (((/* implicit */int) max(((short)-9569), ((short)-19104))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_4);
}
