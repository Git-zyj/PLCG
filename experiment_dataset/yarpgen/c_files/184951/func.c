/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184951
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
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (min((var_15), ((~(var_13)))))));
    var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (short)0)))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) -1073741824)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14))) / (arr_3 [i_0] [i_0])))))))) != (((unsigned int) ((signed char) arr_7 [i_0])))));
                    arr_13 [i_0] [(unsigned short)14] [i_0] = ((/* implicit */short) arr_4 [i_1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) (+(((int) (signed char)-114))));
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65522))))) | (((unsigned long long int) 1094981352U)))))));
}
