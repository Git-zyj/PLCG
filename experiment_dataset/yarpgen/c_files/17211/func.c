/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17211
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
    var_18 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) ((4884192124429913622LL) + (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_8)) + (var_2)))))) == (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) <= (((/* implicit */int) arr_1 [i_0] [0])))))) - (((long long int) arr_3 [(short)8] [i_0] [i_0]))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) 897717429U))))));
                var_20 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 1614834779U)) && (((/* implicit */_Bool) arr_2 [i_0] [5LL]))))))) + (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) < (2884680665U))))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)100)) == (((/* implicit */int) (short)-17747))))) >= (((/* implicit */int) ((((/* implicit */_Bool) 5223801816740277350ULL)) && (((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0]))))))))) >= (((long long int) ((long long int) var_4))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_16 [10ULL] [10U] [i_2] [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) ((unsigned long long int) (unsigned short)15)))) >= (((((var_7) >> (((((/* implicit */int) arr_14 [(unsigned char)5] [(short)8] [i_2] [i_4])) - (10521))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 16066896379278047922ULL))))))));
                                arr_17 [i_0] [i_1] [5LL] [i_3] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)43661)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(signed char)2] [i_4] [i_2] [i_3]))) % (var_5))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_1]))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_17)))))))))));
                                var_22 -= ((unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) 13222942256969274277ULL)))));
                                arr_18 [5ULL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] [i_4])) || (((/* implicit */_Bool) var_5)))))) >= (((unsigned int) arr_1 [i_0] [i_2]))))) == (((/* implicit */int) ((_Bool) ((short) 712759773))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) (unsigned short)12185))) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) >= (((/* implicit */int) var_1)))))))) != (((/* implicit */int) ((((/* implicit */int) ((var_10) < (682912568)))) >= (((var_12) / (1250609624))))))));
}
