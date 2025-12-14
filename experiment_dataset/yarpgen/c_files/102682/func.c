/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102682
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((arr_0 [(short)13]) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - ((+(((/* implicit */int) arr_1 [i_0 + 1] [i_0])))))))))));
        var_19 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_0 [i_0 - 2])))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */short) arr_0 [11ULL]))))))) ? (((/* implicit */int) (short)17835)) : (((/* implicit */int) var_5)))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [5LL])) ? (((/* implicit */int) arr_2 [i_1])) : ((-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) (short)17835))))))))))));
        var_22 = ((/* implicit */unsigned short) max((((7195903444088189662LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)17835))))), (((/* implicit */long long int) arr_2 [i_1]))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((_Bool) ((short) ((short) arr_2 [i_1]))))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_3 [i_1] [i_1])))))))));
    }
    for (short i_2 = 2; i_2 < 9; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) min((arr_4 [i_2]), (((/* implicit */short) (_Bool)0))))))) % (max(((~(((/* implicit */int) (short)17835)))), (((/* implicit */int) arr_4 [i_2]))))));
        /* LoopNest 3 */
        for (long long int i_3 = 3; i_3 < 10; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        var_25 = arr_8 [i_3] [i_3];
                        arr_17 [i_2] [(short)6] [i_2] [i_5] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_10 [i_5])))) % (var_1)));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        for (short i_7 = 3; i_7 < 24; i_7 += 1) 
        {
            {
                var_26 = ((((/* implicit */_Bool) ((short) (short)-15100))) ? ((~(((/* implicit */int) (_Bool)0)))) : (min((-34954298), (((/* implicit */int) arr_21 [i_7] [i_7 - 2])))));
                /* LoopNest 3 */
                for (short i_8 = 1; i_8 < 23; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-7918))));
                                var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1984))) <= ((-(-6270404615187504617LL)))));
                                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (short)2658))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
