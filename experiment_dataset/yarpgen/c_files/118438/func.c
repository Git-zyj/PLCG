/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118438
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
    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37))) > (3315901476U)));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((arr_0 [i_0 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2ULL]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_22 = var_6;
                        var_23 = ((min((((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (short)18883)))), (((/* implicit */int) arr_4 [i_0] [i_0 + 3] [i_0])))) * ((((~(((/* implicit */int) var_11)))) | (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2] [(unsigned short)9])))));
                        arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_1 - 2] [i_0 + 1] [i_0 - 2]), (arr_8 [i_0] [i_1 - 2] [i_0 - 3] [i_0])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_1 - 2] [i_0 - 1] [i_2])) ? (arr_8 [i_0 + 2] [i_1 - 2] [i_0 - 3] [i_3 + 2]) : (arr_8 [i_0] [i_1 + 1] [i_0 + 3] [i_0])))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)195)) ? (max((((/* implicit */unsigned long long int) var_3)), (16383ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))))), (((/* implicit */unsigned long long int) (signed char)65)))))));
                    }
                } 
            } 
        } 
    }
}
