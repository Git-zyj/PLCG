/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128928
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_1 - 1] [i_2])))))) & (-2285013733635930998LL)));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned int) (-(((var_5) / (arr_3 [i_0])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 23; i_3 += 1) 
    {
        for (unsigned int i_4 = 2; i_4 < 24; i_4 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 24; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) arr_10 [i_3 - 1]);
                                arr_20 [i_4] [(signed char)20] = ((/* implicit */int) (!(((/* implicit */_Bool) ((min((var_1), (((/* implicit */long long int) arr_8 [(unsigned short)8])))) << (((max((arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]), (2113929216))) - (2113929189))))))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((((unsigned int) var_2)) & (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_6] [i_6])))))))));
                                var_24 = ((var_13) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_3] [i_4])) >> ((((~(-2113929192))) - (2113929173)))))));
                                arr_21 [i_3] [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [i_4] [i_5 - 1] [i_4])), (-2285013733635931005LL)))) ? (((/* implicit */long long int) max((arr_11 [i_3] [i_4] [(unsigned short)3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_4] [i_4] [i_5])))))))) : (max((((long long int) 3781916004U)), (7982664165804638988LL)))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_4] [i_4 + 1]))))) && (((/* implicit */_Bool) (-(((long long int) 2285013733635930998LL)))))));
            }
        } 
    } 
}
