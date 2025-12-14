/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140721
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
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((var_7) % (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (max((((/* implicit */unsigned short) (_Bool)1)), (var_4)))))))));
                arr_5 [15LL] [14] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)1)), (7914412747772170297LL)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((short) min((max((((/* implicit */long long int) var_6)), (var_7))), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned short) var_2))))))));
        arr_8 [i_2] = ((((/* implicit */_Bool) (unsigned short)46669)) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(var_8)))) && (((/* implicit */_Bool) -1955564187))))) : (var_8));
    }
    var_13 = var_3;
}
