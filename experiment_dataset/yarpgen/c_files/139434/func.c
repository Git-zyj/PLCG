/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139434
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) arr_0 [i_0]))))) || (((/* implicit */_Bool) ((unsigned char) arr_0 [(_Bool)1])))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))) + (0U)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (((0ULL) >> (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [(signed char)9] [i_2] [i_2] = ((/* implicit */unsigned int) (-((+(max((18446744073709551597ULL), (((/* implicit */unsigned long long int) (signed char)90))))))));
                        arr_15 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((arr_4 [i_3] [i_2] [i_1]) && (arr_1 [i_1]))) || (((/* implicit */_Bool) 18446744073709551603ULL)))) ? (((max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) max((arr_12 [i_2 - 1]), (((/* implicit */int) arr_4 [i_1] [i_2] [i_3]))))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_8)))));
                    }
                } 
            } 
        } 
        var_10 = (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0])));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((0ULL) + (((/* implicit */unsigned long long int) 290617316U)))) : ((+(18446744073709551611ULL))))) << (((arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]) + (130540717))))))));
    }
    var_12 = ((/* implicit */int) ((6061389111197437385ULL) * (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)9429)) * (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))))));
    var_13 ^= ((/* implicit */int) ((unsigned int) (unsigned short)56106));
}
