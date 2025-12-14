/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132813
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
    var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((signed char) ((short) 11933020516089515747ULL)))), (((unsigned int) ((((/* implicit */_Bool) 6226163017979673879LL)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) var_3)))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_4 [(_Bool)1] [i_0 - 1] = ((/* implicit */signed char) 14LL);
        arr_5 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-(6226163017979673879LL)))) : (((unsigned long long int) (short)32185)))), (((/* implicit */unsigned long long int) min((6226163017979673901LL), (7503652961553659949LL))))));
    }
    for (int i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_9 [i_1 + 1] = ((/* implicit */signed char) -6226163017979673879LL);
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    arr_14 [i_1 + 1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_10 [i_1 - 1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 3097714181989083856LL))) && (((/* implicit */_Bool) 3097714181989083856LL)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_3])))) | (((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) : (2485432492U)))))));
                    var_18 = ((/* implicit */long long int) -939494661);
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned short) (signed char)56);
    }
    for (int i_4 = 2; i_4 < 13; i_4 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) == (var_4)));
        var_20 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) -817788090)), (((((/* implicit */long long int) -973653894)) + (0LL))))) % (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (arr_13 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]))))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
        {
            var_21 = ((/* implicit */_Bool) ((int) ((int) arr_19 [i_4 + 1] [i_5 + 2] [i_5 + 3])));
            arr_23 [(short)2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)13423)) ? (((/* implicit */int) max(((signed char)36), (arr_17 [i_5 + 3] [i_5 + 2])))) : (((/* implicit */int) ((short) -2147483630)))));
        }
    }
}
