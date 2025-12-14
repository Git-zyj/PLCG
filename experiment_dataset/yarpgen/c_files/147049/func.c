/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147049
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
    var_12 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17179869182LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-61))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61))))) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61)))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1)))))))) : ((((!(((/* implicit */_Bool) (short)-596)))) ? (((/* implicit */unsigned long long int) var_3)) : (var_7)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((6533303109406004296ULL) - (((((/* implicit */_Bool) 7ULL)) ? (arr_3 [i_0] [i_0] [12LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45)))))))));
                arr_7 [i_0 + 1] [i_0] [i_0] = ((((/* implicit */_Bool) ((int) arr_5 [i_0 + 1] [i_0 - 1]))) ? ((~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 2])))) : (((/* implicit */int) (signed char)-62)));
                var_14 = arr_0 [i_0] [i_0];
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 &= ((/* implicit */short) arr_1 [i_4]);
                                var_16 = ((/* implicit */unsigned char) 2703893680U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 &= ((/* implicit */short) var_0);
}
