/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110613
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
    var_14 = ((/* implicit */int) var_3);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 &= ((/* implicit */unsigned int) 5619455910192410030LL);
        arr_2 [i_0] = ((/* implicit */unsigned short) min((arr_1 [i_0] [i_0]), (((/* implicit */signed char) var_3))));
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
        arr_4 [i_0] [i_0] |= ((((/* implicit */int) max((max((var_0), (arr_1 [i_0] [i_0]))), (((/* implicit */signed char) arr_0 [i_0]))))) & (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) var_4))), (max((((/* implicit */signed char) arr_0 [i_0])), (arr_1 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */int) ((((/* implicit */int) (short)9)) > (((/* implicit */int) ((3995239489U) >= (1884610387U))))));
        var_17 = ((/* implicit */unsigned int) ((3307037829588102683LL) % (((/* implicit */long long int) arr_7 [i_1] [i_1]))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (short i_6 = 3; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((max((var_1), (((/* implicit */int) arr_10 [i_4 + 1])))), (((/* implicit */int) arr_1 [i_4 + 2] [i_6 - 3]))));
                                var_19 = ((/* implicit */unsigned int) var_11);
                                var_20 -= ((/* implicit */short) 2004433304);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 3; i_8 < 12; i_8 += 4) 
                        {
                            {
                                arr_28 [i_4] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_26 [i_8])), (arr_12 [i_8 - 2] [i_3] [i_8 - 2])))) : (arr_18 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8 + 2])))));
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((unsigned long long int) 5767065432059556231ULL)) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6421)) ? (((/* implicit */int) ((unsigned char) (unsigned short)65535))) : (((/* implicit */int) (unsigned short)65530))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 -= ((/* implicit */unsigned short) max(((short)-10302), (((/* implicit */short) (signed char)-59))));
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_23 = arr_29 [i_9];
        var_24 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) ((signed char) (short)-18274))) : ((+(((/* implicit */int) arr_30 [i_9]))))))));
        var_25 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18012)) ? (((/* implicit */int) arr_30 [i_9])) : (((/* implicit */int) (signed char)58))))) ? (((/* implicit */int) (unsigned short)59137)) : (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)63)))))) / (((/* implicit */int) arr_30 [i_9]))));
        var_26 = ((/* implicit */_Bool) (((-(arr_29 [i_9]))) * (((/* implicit */int) min((var_12), (((/* implicit */short) max((var_0), ((signed char)-58)))))))));
        arr_31 [i_9] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (signed char)-60)) / (((/* implicit */int) var_10))))))));
    }
}
