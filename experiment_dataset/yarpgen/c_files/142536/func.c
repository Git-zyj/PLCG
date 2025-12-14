/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142536
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */unsigned char) 3764919046U);
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 131072)) ? (8998403161718784ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) 131072)) ? (3178923705691463567ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -131069)) ? (1021896213U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))))))));
                            arr_14 [i_0 - 1] [(signed char)0] [i_2] [i_2] [i_3] = ((((/* implicit */int) var_12)) % (-131081));
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((131076) != ((+(((/* implicit */int) var_10)))))))));
                            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3725685053400954614LL)) ? (-131069) : (-131073)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) 131081)) ? (16334165052177989954ULL) : (((/* implicit */unsigned long long int) -131069))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 += (unsigned char)11;
}
