/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11549
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
    var_11 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((-212845263) + (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) >= (-212845263))))) : (var_0))) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_12 ^= ((/* implicit */int) var_5);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [0] [4] = ((/* implicit */unsigned long long int) ((var_4) - (((((/* implicit */int) ((_Bool) var_3))) - (321127397)))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)1633)) && (((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 212845263)) && (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1]))))) : (((/* implicit */int) var_6))));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_3 [i_0 + 3] [i_0 + 3]) > (((/* implicit */int) arr_4 [i_0 + 3] [i_0 - 1]))))) * (((((/* implicit */_Bool) (unsigned short)47354)) ? (((/* implicit */int) (unsigned short)32073)) : (((/* implicit */int) (unsigned short)32073))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) ((unsigned long long int) 687591700)))))))));
            var_14 = ((/* implicit */int) max((var_14), (-212845264)));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0 + 3] [i_2] [i_5] [i_4])) && (((/* implicit */_Bool) var_1)))))));
                            var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_1 [i_0 + 3])))) ? (((((/* implicit */_Bool) arr_15 [19] [i_5] [i_0 + 1] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_2] [i_3] [i_3])) : (473778719)))) : (((((/* implicit */_Bool) -212845263)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1])))))));
                        }
                    } 
                } 
            } 
        }
        arr_16 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -212845276)) && (((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0 + 3])))) ? (((((/* implicit */_Bool) ((unsigned long long int) -232906212))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -212845276)) || ((_Bool)1))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) : (arr_12 [i_0] [i_0] [i_0 + 2] [i_0 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174)))));
    }
    for (signed char i_6 = 1; i_6 < 21; i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) (unsigned short)33463)) || (((((/* implicit */_Bool) (signed char)88)) && (((/* implicit */_Bool) 2005297668)))))))) < (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))) - (var_10))) + (((unsigned long long int) arr_9 [i_6 + 3]))))));
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (1996854625485203732ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)171)) : (-212845264)))))) >> ((((+(212845265))) - (212845237)))));
        arr_21 [i_6] = ((/* implicit */long long int) -212845264);
    }
    var_17 |= ((/* implicit */unsigned int) var_5);
}
