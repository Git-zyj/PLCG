/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107514
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
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) max((arr_9 [i_2]), (((/* implicit */long long int) arr_6 [i_0] [i_0]))));
                    var_18 = min((var_16), ((short)21662));
                    arr_11 [i_2] [i_1] [i_2] = ((/* implicit */long long int) arr_5 [i_2] [i_1] [i_2]);
                }
            } 
        } 
        arr_12 [i_0] &= ((/* implicit */long long int) var_7);
        arr_13 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_6 [(signed char)14] [i_0]))));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) arr_14 [i_3]);
        arr_16 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((arr_15 [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (var_15) : (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) (signed char)-64))), (((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_9)))))))));
    }
    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        var_20 = (+(((arr_9 [(unsigned short)20]) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [3LL] [i_4]))))));
        var_21 -= ((/* implicit */long long int) arr_6 [i_4 - 1] [15U]);
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_8))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_22 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6)) ? (-6644957222299180867LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106)))));
        }
    }
    var_24 = ((/* implicit */long long int) max((((((((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */int) var_16)))) + (2147483647))) >> ((((-(var_2))) - (2131034482))))), (((/* implicit */int) (signed char)63))));
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-21660)) / (((/* implicit */int) var_14)))))));
    var_26 = ((/* implicit */unsigned int) var_1);
}
