/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109872
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)13297))))));
                                var_14 = arr_5 [i_4] [i_1];
                                var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)13294)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-13293))))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (936058006U)))))));
                                var_16 = ((/* implicit */unsigned long long int) var_5);
                                var_17 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (short)16383)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-13291))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (short)16406))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-16383)) ? (((/* implicit */int) (short)13308)) : (((/* implicit */int) (short)-13295)))), ((~(((/* implicit */int) arr_16 [i_5 - 1] [i_5 + 2]))))));
        var_20 = ((/* implicit */unsigned int) (unsigned char)174);
    }
    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_18 [i_6 - 1] [i_6 + 1])), (var_7))) % (((/* implicit */long long int) ((((/* implicit */int) (short)-16387)) % ((~(arr_20 [i_6] [i_6]))))))));
        var_22 = ((/* implicit */_Bool) min(((unsigned short)48761), (((/* implicit */unsigned short) (short)32763))));
        var_23 = ((/* implicit */signed char) ((_Bool) (-(((2363647257U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))))))));
    }
}
