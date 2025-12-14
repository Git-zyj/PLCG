/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104710
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
    var_15 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        arr_2 [(signed char)12] = ((/* implicit */short) ((((((/* implicit */int) ((arr_1 [i_0]) && (arr_1 [i_0])))) / ((+(((/* implicit */int) var_10)))))) >> (((/* implicit */int) ((((((var_8) + (2147483647))) >> (((/* implicit */int) arr_1 [i_0 - 2])))) >= (((/* implicit */int) (!(var_9)))))))));
        arr_3 [(_Bool)1] = ((/* implicit */short) (!(((((/* implicit */int) ((var_7) <= (var_7)))) <= (((/* implicit */int) var_10))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_0 [i_1]) & (((/* implicit */long long int) ((arr_4 [i_2] [i_1]) >> (((var_8) + (999230935))))))))) / (((var_1) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)228)) * (((/* implicit */int) var_13)))))))));
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (((((-(arr_8 [i_0] [5U] [i_0]))) + (var_8))) <= (((/* implicit */int) ((((/* implicit */int) var_13)) > (var_8))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        arr_14 [i_3] &= ((/* implicit */unsigned char) ((((((((((/* implicit */int) var_3)) + (2147483647))) >> (((/* implicit */int) var_13)))) < (((/* implicit */int) var_3)))) && (var_11)));
        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */int) arr_11 [i_3])) / (((/* implicit */int) arr_12 [i_3]))))));
        var_18 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (!(var_11))))))) >> (((((arr_13 [i_3]) + (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))))) - (2625438645U)))));
    }
    for (short i_4 = 1; i_4 < 9; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_9))));
        var_20 = var_10;
        var_21 = (+(((/* implicit */int) (_Bool)0)));
    }
    var_22 = ((/* implicit */unsigned int) ((((((((((/* implicit */int) var_3)) / (((/* implicit */int) var_4)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1))))))) > ((-(((((/* implicit */int) var_12)) * (((/* implicit */int) var_14))))))));
    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << ((((~(var_2))) - (4204013190001476907ULL)))))) <= (((((var_2) ^ (var_1))) >> (((((var_1) >> (((var_7) - (731688976))))) - (176ULL)))))));
}
