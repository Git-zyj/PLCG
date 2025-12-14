/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183050
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
    var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) ((signed char) var_12))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (_Bool)1))))))));
    var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) var_10)))) ? (((/* implicit */int) (short)30993)) : (var_7)));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) max(((short)-6770), (((/* implicit */short) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (_Bool)0)))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [17LL] = ((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))) | (var_13)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (+(((max((4392399752848127347LL), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) / (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-1), (arr_0 [i_0] [i_0])))))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [(unsigned short)15] [i_0])))) > (72057594037927935LL))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 14; i_2 += 4) 
            {
                {
                    var_23 *= ((/* implicit */unsigned char) var_4);
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 4] [i_2 + 2] [i_2 + 2])) == (((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 4] [i_0] [i_2 - 4]))))) & (((/* implicit */int) ((signed char) (short)-25187)))));
                }
            } 
        } 
    }
    for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
    {
        arr_13 [i_3 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_11 [i_3 + 2])) || ((!(((/* implicit */_Bool) arr_6 [i_3] [i_3] [(_Bool)1])))))) ? (arr_4 [i_3]) : (((/* implicit */int) var_0))));
        arr_14 [i_3] = ((/* implicit */long long int) arr_10 [i_3]);
        arr_15 [(signed char)7] [i_3 - 1] = arr_12 [10LL];
    }
    for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        arr_19 [i_4] = ((/* implicit */_Bool) (~(max((((((/* implicit */int) arr_7 [i_4] [(short)16] [i_4] [(short)16])) / (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_6 [i_4] [i_4] [i_4])) : (arr_17 [i_4])))))));
        arr_20 [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (((+(142989288169013248LL))) == (((/* implicit */long long int) ((((/* implicit */int) (short)511)) ^ (((/* implicit */int) (_Bool)1)))))))) >> (((min((((/* implicit */long long int) arr_12 [i_4])), (((long long int) var_10)))) - (19365LL)))));
    }
}
