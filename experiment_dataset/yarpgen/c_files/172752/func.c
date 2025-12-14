/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172752
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
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) arr_2 [i_0] [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_2] [i_1] [i_0] = arr_0 [i_1] [i_0];
                        var_11 = ((/* implicit */unsigned char) (+(-5958113476804289842LL)));
                        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_3] [i_3] [i_2] [i_1] [i_0 - 1] [i_0]))) == (var_5)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_13 -= ((/* implicit */int) ((_Bool) min((13209487019983210868ULL), (((/* implicit */unsigned long long int) (signed char)3)))));
                        var_14 |= ((/* implicit */unsigned long long int) (!((_Bool)1)));
                        var_15 = ((/* implicit */unsigned long long int) var_8);
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)57735))))) + ((-(3910527825386603037LL)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (~(arr_16 [i_0 + 4] [i_0] [i_0 + 4] [i_0 - 1] [i_5 - 1])));
                            var_18 ^= (-(((unsigned long long int) arr_0 [i_6] [i_1])));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (unsigned char)221))));
                            arr_18 [i_6] [i_5 + 1] = ((/* implicit */unsigned long long int) ((unsigned short) (-(arr_1 [i_2]))));
                        }
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (12345095838537913543ULL)));
                        var_21 = ((/* implicit */long long int) (unsigned short)7800);
                    }
                    arr_19 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((min(((unsigned char)29), (((/* implicit */unsigned char) (signed char)-1)))), (((/* implicit */unsigned char) max(((signed char)-29), (((/* implicit */signed char) arr_4 [i_2] [i_1] [i_0 + 1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)128)))) : (((unsigned int) ((unsigned long long int) 895517990)))));
                    arr_20 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (unsigned char)128);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_23 [i_7] [i_7]))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) ((long long int) (unsigned short)57735))) ? (16177959527310729265ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7] [16ULL])))))));
    }
    for (unsigned short i_8 = 2; i_8 < 10; i_8 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)103))));
        arr_26 [i_8 - 1] = ((/* implicit */signed char) max((((unsigned int) max((13650693712769543020ULL), (((/* implicit */unsigned long long int) 4294959104U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) 120259084288LL))))))));
    }
    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_2))))));
}
