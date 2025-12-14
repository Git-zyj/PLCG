/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110632
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
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_16 *= ((/* implicit */short) (((-(((/* implicit */int) (signed char)127)))) != (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2ULL] [2ULL]))) : (var_5))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)113))))))))));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)56))))) ? (min((((/* implicit */unsigned long long int) var_13)), (var_12))) : (((/* implicit */unsigned long long int) ((long long int) arr_1 [4ULL] [4ULL]))))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))) : (var_12))))));
        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)22346))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) (signed char)109);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_2 + 4] [i_2]), (arr_6 [i_2 + 4] [i_4])))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 3] [i_2 - 1])) < (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1]))))) : (((((/* implicit */_Bool) arr_6 [i_2 + 4] [i_4])) ? (((/* implicit */int) arr_6 [i_2 + 3] [i_3])) : (((/* implicit */int) var_2))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (signed char)31))));
                        var_23 = ((min((((/* implicit */unsigned int) (_Bool)1)), (1843154661U))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                    }
                    var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((4479576238637535638LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-123)))))), (1435289951311723172LL)));
                }
            } 
        } 
    } 
}
