/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178922
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((2147483647) * (((/* implicit */int) var_13))))) > (var_3)))))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) (!(arr_9 [i_0] [(signed char)0] [i_0 + 1] [(_Bool)1] [i_0 + 2])))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)22))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((var_11) > (((/* implicit */unsigned int) arr_3 [i_0])))))));
                    var_19 += (+(((/* implicit */int) (unsigned char)28)));
                }
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) (unsigned char)223);
}
