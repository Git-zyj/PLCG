/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153861
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */short) var_10)), ((short)-32755))))))) - (var_5)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_13 = (-((-(((long long int) -4LL)))));
                    arr_8 [i_1] = ((/* implicit */short) 4294967295U);
                }
            } 
        } 
        arr_9 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32755))) : (arr_0 [i_0] [i_0])))) ? (-1LL) : (((/* implicit */long long int) -2147483645))));
    }
    for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_13 [i_3]) % (((/* implicit */long long int) ((/* implicit */int) max(((short)(-32767 - 1)), ((short)32743)))))))) ? (-12LL) : (3817523783730336737LL)));
        var_15 ^= ((/* implicit */short) arr_3 [i_3 + 1] [i_3 + 1]);
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) (_Bool)1);
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */short) var_10);
        arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_4])))) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_4]))))), (arr_15 [12LL])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8465226100922559547LL)) ? (((/* implicit */long long int) 17624157U)) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3817523783730336737LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))) : (var_7)))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)255)))))));
        arr_19 [i_4] [i_4] = ((((/* implicit */_Bool) (short)-32747)) || (((/* implicit */_Bool) max((((var_4) - (-3817523783730336723LL))), (((/* implicit */long long int) ((unsigned short) arr_3 [i_4] [i_4])))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */short) (!((!(arr_2 [i_8])))));
                        var_18 = ((/* implicit */long long int) (unsigned short)65534);
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 1; i_9 < 14; i_9 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((arr_20 [i_6] [i_5]) ? (((/* implicit */int) arr_34 [i_9 + 1] [i_8] [i_9] [i_8] [i_5])) : (((/* implicit */int) arr_21 [i_7])))))));
                            var_20 = ((/* implicit */int) -6445143621607144067LL);
                        }
                    }
                    var_21 += ((/* implicit */short) arr_3 [i_5] [i_7]);
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) -6445143621607144080LL)) ? (((/* implicit */long long int) var_8)) : (var_5)))));
                    var_23 = var_5;
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) var_1);
        arr_35 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) arr_34 [i_5] [i_5] [(short)14] [i_5] [i_5]))));
    }
}
