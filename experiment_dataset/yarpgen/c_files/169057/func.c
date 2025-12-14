/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169057
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_6 [i_0] = (!(((/* implicit */_Bool) ((unsigned short) ((unsigned short) arr_0 [i_0] [i_1])))));
            arr_7 [i_0] = ((/* implicit */short) var_2);
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) ((short) ((unsigned short) 995127025U)));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_0 + 1])) : (((/* implicit */int) arr_5 [i_2 - 1] [i_0 + 1]))))) ? (((/* implicit */int) ((var_0) != (((/* implicit */int) arr_5 [i_2 - 1] [i_0 - 1]))))) : ((-(((/* implicit */int) (short)-9159))))));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_0] [i_2 - 1] = ((/* implicit */unsigned long long int) ((_Bool) max((arr_5 [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_3] [i_0] [i_3]))))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) min((((((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */int) arr_2 [i_5 - 1])))) + (2147483647))) << ((((((~(((/* implicit */int) var_4)))) + (11))) - (9))))), (((/* implicit */int) ((signed char) arr_4 [i_5 - 1] [i_5])))));
            arr_21 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((short) ((arr_20 [i_0 + 1] [i_0 - 1] [i_5 - 1]) <= (arr_20 [i_0 + 1] [i_0 - 1] [i_5 - 1]))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) (-((-(arr_0 [i_0 + 1] [i_6 - 1])))));
            arr_24 [i_0] [i_6] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((arr_11 [i_0 - 1] [i_0 + 1] [5U]) ^ (((/* implicit */long long int) arr_9 [i_0] [(short)16] [i_0] [i_0]))))) ? (((/* implicit */long long int) min((var_2), (var_3)))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9148))) : (-4373202033081936835LL))))));
        }
        arr_25 [i_0] = ((/* implicit */short) ((int) 2852517049333149759ULL));
    }
    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        arr_28 [i_7] = ((/* implicit */long long int) (+(max((((4294967271U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7])))))))));
        arr_29 [i_7] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7]))))));
    }
    var_19 = ((/* implicit */int) var_14);
}
