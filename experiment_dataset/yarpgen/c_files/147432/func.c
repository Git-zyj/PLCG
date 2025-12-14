/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147432
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), ((+(((/* implicit */int) (unsigned char)3))))))))))));
        var_18 = (+(8883037875174069620LL));
    }
    var_19 = ((/* implicit */signed char) var_16);
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (~(min((((/* implicit */unsigned int) min((((/* implicit */short) var_16)), (var_9)))), ((+(var_1))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_8 [i_1] = ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? ((+(((((/* implicit */_Bool) 917130181852486385ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)(-32767 - 1))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_1]))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        arr_18 [(unsigned short)0] [i_2] [i_3] [(signed char)2] = arr_9 [i_2] [i_1] [i_3];
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 3; i_5 < 20; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))) - (((/* implicit */int) arr_1 [i_1] [i_4]))));
                            var_22 *= ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) (unsigned char)41)))));
                            var_23 = ((/* implicit */long long int) arr_20 [i_5] [i_2] [i_5 - 2] [i_5 - 1] [i_5 + 1]);
                            var_24 += ((/* implicit */unsigned long long int) (unsigned char)223);
                        }
                        var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_3])), (max(((+(((/* implicit */int) arr_6 [i_3] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)32240)))))))));
                    }
                } 
            } 
        } 
        var_26 = 917130181852486385ULL;
        var_27 &= ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
        var_28 &= ((/* implicit */unsigned short) (short)32240);
    }
}
