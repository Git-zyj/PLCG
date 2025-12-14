/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156868
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) arr_0 [i_0]);
        var_20 += ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) var_16);
                    arr_11 [i_0] [(unsigned short)14] [(unsigned short)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) max((var_5), (min((((/* implicit */short) (_Bool)1)), ((short)-25029))))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((10496417315478356652ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32256))))))) : (max((((/* implicit */unsigned long long int) var_18)), (7950326758231194963ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) * ((-(10496417315478356642ULL))))))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) arr_5 [i_0]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_3])) < (arr_0 [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_3] [i_3] [i_3] [i_3])), (var_9))))) : ((-(arr_15 [i_3] [(unsigned short)0])))))) ? (arr_15 [(signed char)18] [20U]) : (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3]))) : (var_3)))));
        var_23 = ((/* implicit */signed char) min((((unsigned int) arr_7 [i_3] [i_3] [10U] [i_3])), (((/* implicit */unsigned int) (_Bool)0))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (arr_0 [i_3]) : (((/* implicit */int) var_4))))) : (min((arr_15 [i_3] [(signed char)18]), (((/* implicit */unsigned int) arr_5 [i_3]))))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)64)), (9007061815787520ULL))) : (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_8 [i_3])), (216172782113783808LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (arr_2 [i_3]))))))))))));
    }
    var_25 = ((/* implicit */signed char) var_10);
    var_26 = ((/* implicit */short) var_17);
}
