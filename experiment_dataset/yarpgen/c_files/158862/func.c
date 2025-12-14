/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158862
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
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 311200140)), (28ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)56695)))) : (((((/* implicit */_Bool) 3007950028455839662ULL)) ? (var_7) : (((/* implicit */long long int) 311200147))))))), ((((-(var_0))) / (((/* implicit */unsigned long long int) (-(311200147))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) (signed char)-110)) ? (4914159529502221740ULL) : (((/* implicit */unsigned long long int) 1690625911U)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)7)))))))));
                    var_19 = ((/* implicit */unsigned int) (short)32767);
                    var_20 = ((/* implicit */short) ((((-311200127) | (((/* implicit */int) (short)0)))) < (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [i_1])))) || (((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */int) (signed char)58))))))))));
                }
            } 
        } 
    } 
}
