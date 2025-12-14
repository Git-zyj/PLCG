/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139973
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
    var_20 = ((/* implicit */int) var_17);
    var_21 = ((/* implicit */long long int) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_1 [i_0] [i_2 - 2]), (arr_1 [i_0] [i_2 - 1])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned int) ((((arr_8 [i_2 - 1] [i_3 + 2] [i_3 + 2]) > (arr_8 [i_2 - 2] [i_3] [i_3 + 1]))) ? (((var_18) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [14LL])) : (9215624418751833203ULL))) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0]))));
                                arr_11 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned int) -1560516708);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 |= ((/* implicit */signed char) (+(((int) (+(arr_0 [i_0]))))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)254)))))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) 13U);
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)13))))), (arr_12 [i_7])))) ? (((((((/* implicit */_Bool) (unsigned char)135)) || (((/* implicit */_Bool) var_14)))) ? (((unsigned int) var_16)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)960))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32757))))))));
                        var_28 += ((/* implicit */unsigned char) arr_1 [16] [i_7]);
                        arr_23 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) max(((unsigned char)40), (((/* implicit */unsigned char) var_15))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((12727790043864385937ULL) == (((/* implicit */unsigned long long int) 10LL)))) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (unsigned char)3)))) : (-621485524))))));
    }
}
