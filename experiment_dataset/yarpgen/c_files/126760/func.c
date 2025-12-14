/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126760
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
    var_12 = var_1;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_13 = (i_0 % 2 == 0) ? (((/* implicit */short) max((((((((/* implicit */_Bool) 6870403932472582866LL)) ? (2415264351U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) << (((arr_0 [i_0]) - (6403330460317969357ULL))))), (((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned short) var_11)))))))) : (((/* implicit */short) max((((((((/* implicit */_Bool) 6870403932472582866LL)) ? (2415264351U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) << (((((arr_0 [i_0]) - (6403330460317969357ULL))) - (8108403363045020319ULL))))), (((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned short) var_11))))))));
                arr_4 [i_0] = ((/* implicit */unsigned char) ((-668108304) == (((/* implicit */int) (unsigned char)255))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)1))))), (((min((-2537237216556430383LL), (var_0))) + (((/* implicit */long long int) var_10))))));
                    arr_9 [i_1] [i_2] |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) -2537237216556430370LL)) || (((/* implicit */_Bool) (unsigned char)62)))))));
                }
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))), (arr_7 [i_1] [i_1] [i_1])));
                var_14 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) % (arr_6 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) || (((/* implicit */_Bool) (unsigned char)1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (var_10)))))), (min((((/* implicit */unsigned long long int) max((arr_1 [i_1]), (arr_1 [i_0])))), (min((((/* implicit */unsigned long long int) var_7)), (274877906943ULL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (var_1)));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_7))));
}
