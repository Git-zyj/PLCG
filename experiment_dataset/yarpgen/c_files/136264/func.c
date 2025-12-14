/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136264
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) var_6))));
    var_11 = ((/* implicit */unsigned short) 17244831382089769435ULL);
    var_12 = ((signed char) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = max((1201912691619782180ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))))));
                    var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_1 [i_2])))))))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-31))))) ? (((unsigned long long int) 17244831382089769426ULL)) : (((var_4) ^ (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15646400321790227220ULL)) ? (-2132950904) : (((/* implicit */int) (signed char)-59))))) ? ((-(((/* implicit */int) ((signed char) var_5))))) : ((~(arr_2 [i_3 + 2])))));
                        var_15 = ((/* implicit */unsigned long long int) arr_10 [i_2]);
                        var_16 += ((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) arr_2 [i_3 + 2]))))), (((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (arr_2 [i_3 - 1]) : (arr_2 [i_3 + 1])))));
                    }
                }
            } 
        } 
    } 
}
