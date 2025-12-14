/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122217
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
    var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((717134229U), (4294967295U)))) ? (((/* implicit */unsigned int) (-(var_5)))) : (717134229U)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_13 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) 3577833061U)) / (1978587581313522758ULL)));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_7 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */long long int) min((((min((((/* implicit */int) (unsigned short)23545)), (-897806958))) / (((/* implicit */int) (signed char)75)))), (((/* implicit */int) arr_3 [i_0]))));
                var_14 = ((/* implicit */unsigned long long int) ((((arr_0 [i_2]) / (((/* implicit */int) arr_5 [i_2] [i_1] [i_0])))) - (((int) arr_0 [i_2]))));
            }
        }
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [i_0] [i_0]);
            /* LoopNest 2 */
            for (unsigned char i_4 = 3; i_4 < 8; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (min(((+(arr_2 [i_0]))), (((/* implicit */unsigned int) arr_12 [i_4 + 2] [i_4 + 3] [i_4] [i_4] [i_4] [i_4 + 2])))))))));
                        arr_15 [i_0] [i_4] [i_4 + 1] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_11 [i_0] [i_0] [i_5]);
                        arr_16 [i_0] [i_3] [i_3] [8LL] [i_4 - 3] [i_5] = ((/* implicit */unsigned int) (short)-7375);
                    }
                } 
            } 
        }
        var_17 |= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)6849)), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [0LL]))))) ? (((/* implicit */int) var_3)) : (min((1614164056), (((/* implicit */int) (unsigned char)155))))))));
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
        var_18 = ((/* implicit */unsigned char) 1244372716);
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (min((((/* implicit */unsigned int) -1917189093)), (717134231U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))) ? (((((/* implicit */_Bool) ((long long int) var_6))) ? (min((((/* implicit */unsigned int) var_6)), (717134229U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)36684)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1833995006)) ? (2874881855299641443LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) -1917189093)), (max(((+(var_8))), (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))))));
    var_21 = ((/* implicit */short) ((int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) : (1577508082U))) <= (((/* implicit */unsigned int) ((int) (unsigned char)171))))));
}
