/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184657
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
    var_18 ^= ((/* implicit */long long int) ((int) var_12));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) min(((unsigned short)3268), (((/* implicit */unsigned short) var_6)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_2 [11ULL] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)2840)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3255))) : (137438953471LL)))))) > (arr_0 [i_0])));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) % (((((_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)19441))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (short i_3 = 4; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (max((var_1), (((/* implicit */unsigned int) (unsigned short)62257)))))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_22 += ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [(short)12] [i_1] [i_1] [(unsigned char)6]);
                            var_23 = ((/* implicit */long long int) (_Bool)1);
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_1] [i_1] [i_1] [(unsigned short)7] [i_1 + 1] [i_1]), (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1] [i_2] [i_3]))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) >> (((((/* implicit */int) min(((unsigned short)8569), ((unsigned short)56967)))) - (8548))))) <= (((/* implicit */int) arr_8 [i_1] [i_1] [14LL] [(unsigned char)6] [i_1])))))));
                            var_26 -= ((/* implicit */unsigned short) (_Bool)1);
                        }
                    }
                } 
            } 
        } 
        var_27 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) arr_0 [i_0])))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_16 [i_5] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [(short)4] [i_5])))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (short)-11))));
    }
}
