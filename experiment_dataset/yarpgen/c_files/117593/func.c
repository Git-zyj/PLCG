/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117593
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) 1961704386);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) arr_1 [(_Bool)1] [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_11 [i_1] [i_2] [i_2]))))));
                var_20 = ((/* implicit */long long int) arr_2 [i_2]);
                var_21 += ((/* implicit */signed char) ((short) (-(var_10))));
                arr_12 [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((29360128U) * (((/* implicit */unsigned int) -1748227986))))) + (max((((13510798882111488LL) ^ (((/* implicit */long long int) -928485011)))), (-13510798882111503LL)))));
                arr_13 [i_1] |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_1] [(short)9] [i_2]))));
            }
        } 
    } 
}
