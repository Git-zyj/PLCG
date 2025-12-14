/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160398
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [(unsigned short)12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)16])) ? (32760) : (arr_0 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 127ULL)) ? (arr_1 [i_0]) : (((/* implicit */int) (short)(-32767 - 1))))))));
        arr_5 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0] [9ULL]))))) ? (((int) arr_3 [i_0] [i_0])) : ((((((_Bool)0) ? (((/* implicit */int) var_6)) : (arr_1 [i_0]))) & (arr_3 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_2] = ((/* implicit */int) (~(3640543783968613895ULL)));
                    arr_14 [i_1] = ((arr_8 [i_1 + 1]) ^ (arr_8 [i_2]));
                    arr_15 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19565)) ? (-854033690) : (248533081)));
                }
            } 
        } 
        var_13 = (!(((/* implicit */_Bool) 5705962921772984522ULL)));
        arr_16 [i_1] = ((1575473889) | (arr_11 [i_1] [i_1 - 1] [i_1] [(short)2]));
    }
    var_14 = ((/* implicit */int) ((_Bool) -1994469941));
}
