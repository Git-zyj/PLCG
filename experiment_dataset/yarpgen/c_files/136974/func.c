/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136974
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 += ((/* implicit */long long int) ((unsigned short) 1748988782));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        arr_4 [(signed char)17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) << (((((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_12))))) - (218))))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((((/* implicit */unsigned int) ((_Bool) min((var_8), (((/* implicit */unsigned short) arr_2 [i_1])))))), ((((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-27507), (((/* implicit */short) (signed char)-83)))))) : (var_4))))))));
        var_20 = ((/* implicit */int) var_5);
        var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_13)), (var_4)))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_7))) - (((/* implicit */unsigned long long int) ((int) var_8)))))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) (unsigned short)64658)), (-1766168229)))));
        var_23 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) | (-4880922501010970192LL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)32749)), (1469728060U)))))))));
        var_24 = ((/* implicit */long long int) var_8);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            {
                arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) == (max((((/* implicit */long long int) var_8)), (-1LL))))))));
                arr_12 [(unsigned short)2] [(short)10] [(unsigned short)2] = ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_8 [i_3])), (max((var_2), (var_2)))));
                arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (unsigned char)81)))) >> ((((-(arr_7 [i_4]))) - (74368365338166400LL)))));
                arr_14 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((-923098207610928581LL) | (((/* implicit */long long int) arr_9 [i_3])))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) var_13)))))));
                var_25 = ((/* implicit */unsigned long long int) min((2267033203U), (((/* implicit */unsigned int) -1549661308))));
            }
        } 
    } 
}
