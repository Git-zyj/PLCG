/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187589
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
    var_17 = ((/* implicit */short) var_14);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned short) max((((((/* implicit */int) arr_3 [i_0] [(signed char)16] [i_0])) > (((/* implicit */int) var_11)))), (((((((/* implicit */int) var_0)) - (((/* implicit */int) var_11)))) > (((/* implicit */int) arr_5 [9LL] [i_1] [i_2]))))));
                    arr_9 [i_0] [(short)5] [22LL] [(_Bool)1] = ((/* implicit */_Bool) ((signed char) (short)(-32767 - 1)));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) arr_0 [i_0 + 1]);
                        arr_12 [i_0] [(unsigned char)3] [i_2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])) % (((/* implicit */int) (signed char)-1)))) > (((/* implicit */int) arr_6 [i_0 - 2] [(unsigned short)8] [i_0 - 2]))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (short)(-32767 - 1)))) / (((/* implicit */int) max(((unsigned short)5632), (((/* implicit */unsigned short) var_6)))))));
                        var_19 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32752))) : (var_12))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                    {
                        var_20 = max((((/* implicit */long long int) var_9)), (arr_2 [i_4] [i_2] [i_1]));
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)22581))));
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) var_13);
                        var_22 = ((/* implicit */signed char) ((short) ((var_16) > (6471645040565032107ULL))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((arr_4 [5ULL]), (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))))));
                    }
                }
            } 
        } 
    } 
}
