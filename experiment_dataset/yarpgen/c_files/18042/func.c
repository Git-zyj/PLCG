/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18042
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
    var_20 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) && (var_5))))) + (var_14))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(short)0] [i_0] = ((/* implicit */unsigned short) ((((_Bool) (~(((/* implicit */int) arr_1 [0LL]))))) ? (((unsigned int) max((arr_4 [i_0] [(signed char)17] [(signed char)17]), (((/* implicit */short) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2])))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_2]))))) ? (((1255103209) / (((/* implicit */int) (unsigned short)21872)))) : (((/* implicit */int) min((arr_7 [i_1 - 1] [i_1] [i_2]), (arr_7 [i_1 - 1] [i_2] [(unsigned char)5]))))));
                    arr_9 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_6 [i_0] [(_Bool)1] [i_2] [(short)2])))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4434)) - (((/* implicit */int) (unsigned short)3))))) - (4775759659350806235ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (unsigned short)4440)))) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [(_Bool)1] [i_4] [i_4])) * (((/* implicit */int) arr_16 [i_4]))))) || (((arr_6 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [(short)17]) <= (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3])))))))));
                arr_18 [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) min((max((max((((/* implicit */unsigned long long int) arr_1 [i_4])), (arr_15 [i_3] [(unsigned char)7] [i_4]))), (((/* implicit */unsigned long long int) arr_0 [i_3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 532676608)) ? (1441003071211709603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17736)))))) ? (arr_13 [(_Bool)1] [i_4]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_3] [(unsigned short)13] [i_4])), (arr_12 [i_4])))))))));
            }
        } 
    } 
}
