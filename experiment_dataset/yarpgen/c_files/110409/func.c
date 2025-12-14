/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110409
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
    var_20 = ((/* implicit */unsigned long long int) ((short) var_19));
    var_21 ^= ((/* implicit */short) (_Bool)0);
    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_3), (((/* implicit */signed char) (_Bool)1))))) && (((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 314558085U)))))) && (((/* implicit */_Bool) var_11))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_8))))));
                        var_24 -= var_17;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 18; i_5 += 2) 
            {
                {
                    var_25 &= ((/* implicit */unsigned long long int) ((signed char) 5753120045646315881ULL));
                    arr_15 [i_0] [i_4] [i_4] = ((/* implicit */unsigned long long int) -1643697440);
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0]);
        var_27 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((1332091424) / (((/* implicit */int) var_2)))), ((-(((/* implicit */int) (short)-27743))))))), (min((((((/* implicit */_Bool) 1643697417)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1))))))));
    }
    for (int i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (var_14) : (min((arr_13 [i_6] [i_6]), (arr_13 [i_6] [i_6]))))))));
        var_29 -= ((/* implicit */short) arr_12 [i_6] [i_6] [i_6]);
        var_30 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) & (var_14))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_6] [i_6])), (var_12)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) / (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) min((1), (((/* implicit */int) arr_0 [i_6]))))));
        arr_19 [i_6] = ((/* implicit */int) (((+(((((/* implicit */_Bool) (short)-2468)) ? (((/* implicit */int) (short)-26693)) : (((/* implicit */int) var_5)))))) != (((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
    }
}
