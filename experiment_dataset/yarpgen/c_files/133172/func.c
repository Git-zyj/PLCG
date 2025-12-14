/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133172
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((var_13), (arr_3 [i_0] [(unsigned char)5])))) ? (((6465239767633271964ULL) * (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) <= (((/* implicit */int) arr_4 [i_0]))))))))));
                arr_8 [(_Bool)1] = ((/* implicit */_Bool) var_7);
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_1])))) ? ((-(arr_3 [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14339)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    arr_17 [i_4] [i_4] [i_2] = ((/* implicit */short) arr_14 [i_4] [i_3] [i_3]);
                    var_15 = ((/* implicit */short) ((((max((((/* implicit */unsigned long long int) var_11)), (3426591707360137791ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14339))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_16 = ((/* implicit */_Bool) max((arr_16 [i_2] [i_3] [i_2]), (max((arr_16 [i_2] [i_3] [i_3]), (((/* implicit */unsigned int) (signed char)16))))));
                }
            } 
        } 
    } 
}
