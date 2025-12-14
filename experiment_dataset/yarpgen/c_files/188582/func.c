/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188582
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((var_1) << (((((/* implicit */int) (short)18675)) - (18675)))))) ? (((/* implicit */unsigned long long int) var_10)) : ((~(34359738367ULL))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [11ULL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((((/* implicit */int) max((var_6), ((short)21308)))) < (((/* implicit */int) (unsigned char)69)))))));
                    arr_8 [i_2] = ((/* implicit */signed char) 1716063010);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_20 = ((/* implicit */short) (+((+(1716062991)))));
        arr_11 [i_3] = ((/* implicit */short) 1716063011);
        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3])))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (-((+(12611682145073786112ULL))))))));
    }
    for (int i_4 = 2; i_4 < 18; i_4 += 3) 
    {
        arr_15 [i_4 + 2] = ((/* implicit */unsigned long long int) max(((((-(((/* implicit */int) (short)28840)))) + ((-(arr_10 [0] [20]))))), ((~(((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (short)28154)) : (1108661708)))))));
        var_23 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)3)) ? (((((/* implicit */_Bool) arr_9 [(signed char)6])) ? (arr_10 [(signed char)16] [i_4 - 1]) : (((/* implicit */int) (short)-15764)))) : (((/* implicit */int) arr_9 [0]))))));
    }
}
