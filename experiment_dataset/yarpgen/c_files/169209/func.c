/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169209
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? ((~(var_10))) : (((/* implicit */long long int) arr_1 [i_0])))));
        arr_3 [i_0] [8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65523))))))) || (((/* implicit */_Bool) arr_1 [(signed char)2])));
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */int) (unsigned short)15)), (12))));
        arr_6 [i_1 + 1] = ((/* implicit */_Bool) (+(((((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) / (max((var_0), (((/* implicit */long long int) arr_4 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) var_4))));
    }
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */_Bool) ((int) arr_1 [i_2]));
        arr_13 [i_2] = ((/* implicit */_Bool) min((min((-2074034780), (((/* implicit */int) (unsigned short)65523)))), (arr_4 [(_Bool)1])));
        var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)6)) : (arr_4 [i_2]))), (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_2]))))));
        var_17 = ((/* implicit */int) ((unsigned int) -1664006683));
        arr_14 [i_2] = ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 9004164776008074367LL))))), (((var_3) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (short)6231))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_2]), (((/* implicit */int) (unsigned short)10))))))))) : (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : ((~(15943741300241542658ULL))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 15943741300241542658ULL)) ? (((/* implicit */int) (_Bool)1)) : (1540228215)))), (max((((/* implicit */long long int) arr_8 [i_3])), (3370166988669951381LL)))));
        var_19 = ((/* implicit */unsigned short) min(((+(-731469808453402187LL))), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_16 [i_3])) ? (arr_4 [i_3]) : (((/* implicit */int) var_13)))), ((~(((/* implicit */int) var_7)))))))));
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_3])), (((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (unsigned short)12)))))))));
    }
}
