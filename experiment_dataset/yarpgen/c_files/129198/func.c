/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129198
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
    var_18 = ((/* implicit */unsigned char) ((((int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_5))))) ^ (((/* implicit */int) var_15))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0 + 1] = ((_Bool) ((((/* implicit */int) (unsigned char)78)) << (((/* implicit */int) (_Bool)1))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) 1216360749U);
                    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0])) > (((/* implicit */int) arr_0 [i_2 - 1] [i_1]))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))) ? (((/* implicit */int) ((_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1]))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1])) <= (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                        arr_15 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((signed char) arr_7 [i_0] [i_1] [i_2 + 1]));
                    }
                    for (int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        var_20 = var_11;
                        arr_20 [8LL] [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_4] = ((/* implicit */_Bool) (unsigned short)14588);
                    }
                    arr_21 [i_0] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (((1216360749U) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (long long int i_6 = 3; i_6 < 11; i_6 += 1) 
        {
            {
                arr_28 [i_5] [8ULL] |= ((/* implicit */short) max((arr_11 [8LL]), (((/* implicit */unsigned int) ((short) arr_7 [i_6 - 2] [i_6 - 3] [i_6])))));
                arr_29 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((/* implicit */int) ((_Bool) (+(var_8)))))));
                var_21 += max((((/* implicit */unsigned int) ((unsigned short) var_6))), (((((/* implicit */_Bool) 2184788004U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10485))) : (1216360749U))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_11);
}
