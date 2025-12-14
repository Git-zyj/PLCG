/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121468
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
    var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_5))))))) ? ((+(((((/* implicit */_Bool) (unsigned short)54042)) ? (((/* implicit */int) (unsigned short)56781)) : (((/* implicit */int) var_16)))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13)) || (((/* implicit */_Bool) (short)24608))))) <= (((/* implicit */int) (short)-24609)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 + 2])) ? (((((/* implicit */int) (short)-24609)) + (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_13))))))))));
                var_20 = ((((((/* implicit */int) var_17)) < (((/* implicit */int) arr_0 [i_0 - 1])))) ? (((max((var_14), (((/* implicit */unsigned int) var_2)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (signed char)-74)))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) * (max((var_10), (((/* implicit */unsigned int) arr_3 [i_0] [i_1])))))));
                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_2 [i_0 + 1] [i_0] [i_0]))))))));
                arr_5 [i_0] [(unsigned short)0] = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (short)32754)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-24609)) + (((/* implicit */int) var_2))));
        arr_9 [i_2] = ((/* implicit */short) max((((arr_1 [i_2] [i_2]) ^ (arr_1 [i_2] [i_2]))), (((/* implicit */unsigned int) ((unsigned short) arr_1 [i_2] [i_2])))));
        var_23 += ((/* implicit */signed char) ((((((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61070)) ^ (((/* implicit */int) var_5))))))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_2])), (var_18)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (signed char i_4 = 3; i_4 < 7; i_4 += 1) 
        {
            {
                arr_15 [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) ((unsigned char) (unsigned char)255))));
                var_24 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_1)) / (((((/* implicit */int) (short)-6029)) * (((/* implicit */int) var_13)))))), (((/* implicit */int) var_15))));
                arr_16 [i_3] [i_3] = ((/* implicit */short) var_13);
                var_25 = var_3;
            }
        } 
    } 
    var_26 = var_5;
}
