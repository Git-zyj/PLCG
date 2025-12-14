/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117365
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] &= ((/* implicit */long long int) arr_2 [i_0 + 2]);
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (17660824262309601372ULL)));
                var_21 = ((/* implicit */signed char) (unsigned char)106);
            }
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)65)) ? (arr_8 [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205)))));
        }
        var_23 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1]))));
        arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_17) : (((/* implicit */int) arr_12 [i_1]))))) ? (arr_11 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) max((1091057471U), (((/* implicit */unsigned int) arr_3 [i_1]))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_1])), ((-(((/* implicit */int) (unsigned char)65)))))))));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    {
                        arr_24 [i_1] [i_4] [i_5] [i_4] = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_9 [i_1] [i_4])))) + (2147483647))) >> ((((-(((/* implicit */int) arr_9 [i_6] [i_1])))) + (7537)))));
                        arr_25 [i_1] [i_4] [i_5] [i_4] = ((/* implicit */short) arr_3 [i_1]);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_22 [i_1] [3U] [3U] [i_6]))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((arr_19 [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned short) (unsigned char)190);
}
