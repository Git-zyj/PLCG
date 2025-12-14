/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139616
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
    var_20 ^= ((/* implicit */unsigned short) ((_Bool) (((-(var_11))) + (((/* implicit */unsigned int) ((int) (_Bool)1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) min((var_21), ((((_Bool)1) || (((/* implicit */_Bool) (short)15))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0] [i_0]) >= (-1001977791)));
        arr_3 [(unsigned short)8] [3] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)15360))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_22 *= ((/* implicit */_Bool) (short)36);
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-20091)) + (((/* implicit */int) (unsigned char)66)))) ^ (((/* implicit */int) ((4035225266123964416ULL) <= (((/* implicit */unsigned long long int) var_8)))))));
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)63)) + (((/* implicit */int) var_12))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_25 -= ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
                    arr_11 [i_2] [2ULL] [2ULL] [(unsigned short)7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_2 + 1] [i_2 - 3] [i_1])) <= (var_18)));
                    arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])) - (var_5)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_2 - 2] [i_2 - 1]))));
                                var_27 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (511)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 -= ((/* implicit */unsigned long long int) ((unsigned short) (~(var_6))));
    }
}
