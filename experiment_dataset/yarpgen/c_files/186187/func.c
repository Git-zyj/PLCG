/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186187
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
    var_14 = ((/* implicit */unsigned int) ((((1208236662U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10941)) ? (((/* implicit */int) (short)10955)) : (((/* implicit */int) (signed char)-40))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) arr_1 [(unsigned char)16]);
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [0U]))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (short)-10951)))))))));
        var_17 = ((/* implicit */_Bool) ((unsigned int) 5690617766267292777ULL));
        var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_12))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((((-(arr_2 [(short)5] [i_1]))) + (9223372036854775807LL))) >> (((arr_2 [i_1 - 1] [i_1 - 1]) - (7485130555812732973LL))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_10 [i_1] [i_2] [(short)12] [i_2] = ((/* implicit */short) var_8);
                    arr_11 [i_1 - 1] [i_1] = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_3 + 1])))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_1 [(unsigned short)3]), (((/* implicit */short) arr_9 [i_3 + 1] [10] [i_3 - 1] [(short)5])))))))) + ((+(max((1208236662U), (0U)))))));
                }
            } 
        } 
        var_22 &= ((/* implicit */unsigned char) min(((+(((/* implicit */int) (short)13594)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967281U)) || (((/* implicit */_Bool) (signed char)38)))))) >= (min((0U), (((/* implicit */unsigned int) (_Bool)1)))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned long long int) (~(((unsigned int) arr_4 [i_4]))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((arr_6 [i_4] [i_4] [i_4]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_4]))))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) min(((short)5225), ((short)13594)));
    }
}
