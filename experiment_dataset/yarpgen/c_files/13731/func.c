/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13731
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_20 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7207995689933706330LL)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)-1))))) ^ ((+(arr_5 [i_0] [i_0]))));
                        var_21 = ((/* implicit */unsigned long long int) ((3377699720527872LL) ^ (var_15)));
                        var_22 = ((/* implicit */signed char) 827837637);
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) -3377699720527873LL))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) arr_7 [i_1] [i_2] [i_1]);
                        arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        var_25 = ((/* implicit */signed char) ((int) (+(arr_0 [i_1] [i_1]))));
                        var_26 = ((/* implicit */unsigned int) -8035894018010769102LL);
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_13 [i_0] [i_2]))));
                        var_28 = ((/* implicit */short) var_9);
                        var_29 = ((/* implicit */long long int) var_19);
                    }
                    var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1]))))) % (max((arr_5 [i_0] [21U]), (((/* implicit */unsigned long long int) var_8))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_25 [(signed char)15] = ((/* implicit */_Bool) ((signed char) (((((_Bool)1) || (((/* implicit */_Bool) -3377699720527872LL)))) ? (((((/* implicit */_Bool) var_6)) ? (-1LL) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -827837637)) && (((/* implicit */_Bool) -3377699720527880LL)))))))));
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), ((+(((unsigned long long int) (-(294472579135866013ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned long long int) arr_22 [i_7 + 1] [i_7 + 1] [i_7])), (arr_18 [i_10] [i_10] [i_7 + 1] [6LL] [i_10] [i_7 + 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_6] [i_6])))))));
                                arr_33 [i_8] [i_8] [(unsigned char)9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (signed char)100)) >> (((-3377699720527873LL) + (3377699720527898LL))))) : (((/* implicit */int) arr_2 [i_6] [i_10]))));
                                var_33 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_11)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
