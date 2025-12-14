/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179822
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) var_5))))))));
        var_17 = var_7;
        var_18 = ((/* implicit */unsigned short) (_Bool)1);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 8; i_1 += 1) 
    {
        arr_6 [(signed char)10] |= ((/* implicit */int) ((unsigned long long int) var_11));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned char) var_8)))));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (((+(max((((/* implicit */unsigned long long int) var_7)), (0ULL))))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned char)21), (((/* implicit */unsigned char) (_Bool)1))))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) max((268402688ULL), (((/* implicit */unsigned long long int) (unsigned short)44953))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)185)), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_2]))))), (((unsigned long long int) var_5))))));
            var_22 = ((/* implicit */unsigned int) arr_1 [i_2]);
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_22 [i_2] [i_2] [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_13 [i_2] [i_3])))))));
                            arr_23 [i_2] [i_2] [i_2] [10ULL] [(_Bool)1] [i_2] [10ULL] = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_8 [i_2] [i_2]))))));
                        }
                    } 
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_7 = 3; i_7 < 23; i_7 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_7 - 3])) ? (arr_1 [i_7]) : (((arr_1 [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185)))))));
        arr_26 [i_7] = ((/* implicit */unsigned int) (unsigned char)173);
        arr_27 [i_7] = ((/* implicit */unsigned int) ((short) (unsigned char)174));
    }
    var_24 = var_10;
}
