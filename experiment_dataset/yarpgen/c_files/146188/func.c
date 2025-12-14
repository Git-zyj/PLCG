/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146188
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [3LL] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((max((722416713U), (722416713U))) == (max((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])), (2479137279U))))))));
                arr_7 [i_1] [17U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_5 [17LL] [i_1])))) >= (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_4) : (722416713U))) + (var_3)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_15 [i_2] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 722416717U)), (15882520151019895744ULL)));
                arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) (short)1431);
                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_12)), (arr_5 [i_2] [i_3]))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 3572550583U)) ? (2564223922689655872ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                arr_18 [i_2] [(short)0] [i_2] = ((/* implicit */int) (-(min((263210922U), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (var_12)));
    var_14 = ((/* implicit */int) (-(var_2)));
}
