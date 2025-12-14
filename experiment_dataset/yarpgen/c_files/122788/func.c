/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122788
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
    var_12 = ((/* implicit */unsigned long long int) (+(var_3)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_10 [i_0] [i_0] [i_2] [i_3 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_2])))) ? (max((var_0), (((/* implicit */unsigned int) arr_3 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_3 - 1])) >> (((var_3) - (2010626429))))))));
                        var_14 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) > (((arr_1 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -937036084))))))))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                    }
                    var_15 = ((/* implicit */unsigned short) var_11);
                }
            } 
        } 
    } 
}
