/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115170
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (max((((/* implicit */unsigned long long int) (short)32767)), (var_11)))))) ? (((((3744053814U) << (((((/* implicit */int) var_15)) - (31438))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29972))) & (var_14))) - (24806ULL))))) : (var_3)));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)0))));
    var_21 = ((/* implicit */signed char) var_15);
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 267682690995608549ULL)) ? (((/* implicit */unsigned int) var_1)) : (var_8))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((2147483647) == (((/* implicit */int) var_10)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_23 += ((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 384356403U)) ? (((/* implicit */int) (unsigned short)16384)) : (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        arr_10 [i_2] [(unsigned short)15] = ((/* implicit */unsigned int) (short)5);
                        var_24 += ((/* implicit */long long int) arr_4 [i_0] [5] [i_2]);
                    }
                    arr_11 [i_2] = ((/* implicit */long long int) (((+(arr_7 [i_0] [i_1] [i_0]))) / ((-(arr_7 [i_0] [i_1] [i_2])))));
                    var_25 = ((((/* implicit */_Bool) max((var_14), (((((/* implicit */unsigned long long int) 1707454594U)) - (arr_7 [i_0] [i_1] [(short)14])))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (9242779952299535633ULL) : (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))));
                    arr_12 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) (signed char)-61)) == (((/* implicit */int) (signed char)-61))))), (((((/* implicit */_Bool) (short)32767)) ? (var_1) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))))));
                }
            } 
        } 
    } 
}
