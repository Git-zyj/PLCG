/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150732
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((max((min((((/* implicit */unsigned long long int) var_0)), (var_5))), (((/* implicit */unsigned long long int) 4273653242611127310LL)))) ^ (var_1)));
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (min((-930767837145789018LL), (((/* implicit */long long int) (unsigned short)0)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [(signed char)8] [i_1])))))));
                    var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((min((arr_4 [i_2] [0ULL] [i_0]), (arr_0 [15ULL]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned short)14]))))))))), (min((((/* implicit */unsigned long long int) var_7)), (var_9)))));
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(((long long int) arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 387413566375644416ULL)) ? (((/* implicit */unsigned long long int) 930767837145789018LL)) : (var_2)))))));
                                arr_15 [i_1] [i_2] [i_2] [i_3] [1ULL] [1ULL] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_5 [i_1] [i_3 - 2] [i_4 - 1])) | (((/* implicit */int) arr_5 [12ULL] [i_3 + 2] [i_4 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) 11402646221899585737ULL);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 930767837145789005LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(930767837145789005LL)))) ? (((/* implicit */int) (signed char)-77)) : (2147483647)))) : (2281395833012109935LL)));
}
