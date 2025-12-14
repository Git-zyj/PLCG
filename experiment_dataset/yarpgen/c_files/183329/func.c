/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183329
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((int) 12193900748369372027ULL));
                var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((var_3) >> (((arr_2 [i_0]) + (9037820976329310584LL))))) >> (((/* implicit */int) ((_Bool) 1268479513U)))))), (max((((/* implicit */long long int) var_9)), (((var_15) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 12; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned short) arr_10 [i_3]))), (((((/* implicit */_Bool) arr_11 [i_4 + 2] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_4 + 2] [i_4 - 1]))) : ((+(3026487771U)))))));
                    var_20 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))) - (min((arr_11 [i_3] [i_4]), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_2]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_20 [i_2] [(unsigned char)2] [i_4 - 2] [i_3] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) ((long long int) arr_9 [i_4] [i_5] [i_6]));
                                var_21 = ((/* implicit */_Bool) arr_10 [i_3]);
                                arr_21 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_3])), (min((var_15), (((/* implicit */long long int) 1390376557))))))) % (min(((+(11377028446294671658ULL))), (((/* implicit */unsigned long long int) max((arr_9 [i_2] [i_3] [i_4 + 3]), (((/* implicit */long long int) arr_19 [i_6] [i_6] [(short)7] [i_5] [i_6])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) ((short) var_9)))))) || (((/* implicit */_Bool) var_10))));
}
