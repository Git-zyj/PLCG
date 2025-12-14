/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127846
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1772205656)) ? (0ULL) : (((/* implicit */unsigned long long int) 2776634137U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21107))) : (9899562727241313900ULL)))) ? ((-(var_2))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 1811279911)) : (10833531361966117983ULL)))))))));
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44460))) | (3519155220U)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned char) (unsigned short)26769);
                    var_17 = var_13;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [3U] [i_1] [i_0] [i_4] = (unsigned short)65513;
                                var_18 = ((/* implicit */unsigned int) arr_4 [11] [(unsigned char)9] [i_4]);
                                arr_15 [i_0] = ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 4) 
        {
            {
                var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_12), (arr_17 [i_5] [i_6 + 2])))) && (((/* implicit */_Bool) arr_19 [i_6 - 1] [i_6] [i_6]))))) - (((((/* implicit */_Bool) var_6)) ? (var_10) : (((((/* implicit */int) (unsigned char)29)) * (((/* implicit */int) var_7))))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)147)) || (((((/* implicit */int) var_12)) != (((/* implicit */int) arr_17 [(unsigned short)4] [(unsigned char)17])))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))))))));
            }
        } 
    } 
}
