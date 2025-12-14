/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188191
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_11);
        var_18 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) var_17)) ^ (((/* implicit */int) arr_2 [i_0])))) <= (var_4)))) | (((/* implicit */int) ((short) ((arr_1 [i_0] [i_0]) * (((/* implicit */int) (_Bool)1))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (4166542319U))) % (var_15)))) ? ((+(((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_5)) - (39150))))))) : ((-(var_6)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_20 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-20685), (((/* implicit */short) (_Bool)1)))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (max((arr_5 [i_1]), (((/* implicit */unsigned long long int) 1852476802)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            var_21 = min((((max((((/* implicit */int) (_Bool)1)), (var_6))) | (((/* implicit */int) arr_6 [(short)6])))), (((((/* implicit */_Bool) (short)-31812)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))));
        }
        for (signed char i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            var_22 *= (short)-20827;
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_1] [i_3])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_10))))) : ((~(arr_17 [(short)10] [(short)8]))))) - (((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned short) var_6))))))));
                        var_24 ^= ((/* implicit */unsigned long long int) ((var_15) > (var_13)));
                    }
                } 
            } 
            var_25 = ((/* implicit */int) arr_18 [i_3 + 4] [(signed char)20]);
        }
        arr_22 [(unsigned short)12] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_1] [(short)13] [(short)13])) && (((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-5063)))) : (((/* implicit */int) ((short) (short)19)))));
    }
    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [(_Bool)1])) ? (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_11 [i_6] [i_6] [i_6]))))) : (((/* implicit */int) ((unsigned short) arr_12 [i_6] [(_Bool)1])))));
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned int) (_Bool)1);
        var_27 = ((/* implicit */signed char) arr_9 [i_6]);
    }
}
