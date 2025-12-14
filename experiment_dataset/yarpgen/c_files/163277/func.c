/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163277
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((((-440360146) != (((/* implicit */int) (unsigned short)7)))) ? (-440360147) : (((/* implicit */int) (signed char)121)))) == (((/* implicit */int) ((((unsigned int) 0U)) == (((/* implicit */unsigned int) ((440360145) / (2147483647))))))))))));
                    arr_8 [i_1 + 2] = 18349010860754062627ULL;
                    var_13 += ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -440360146)) || (((/* implicit */_Bool) (unsigned short)0))))), (((((/* implicit */_Bool) -440360146)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((2147483647) > (-440360153)))) & (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (long long int i_3 = 2; i_3 < 23; i_3 += 4) 
    {
        arr_13 [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((-440360160) / (((/* implicit */int) (unsigned short)35595))))) * (min((((/* implicit */unsigned int) 440360156)), (592554772U)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483646)) ? (-440360146) : (-440360130)))) != (1470011039U)))) : (max((((((/* implicit */int) (unsigned short)58482)) | (((/* implicit */int) (signed char)-30)))), (((/* implicit */int) ((_Bool) (signed char)56)))))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29))) >= (462098885U)));
    }
}
