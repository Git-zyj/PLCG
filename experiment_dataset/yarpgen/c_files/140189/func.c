/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140189
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) ((unsigned short) 5216730923491393350ULL))))) : ((~(((/* implicit */int) arr_5 [(_Bool)0] [i_2 - 1] [i_2 - 3] [i_0]))))));
                    arr_7 [i_0] [i_1] [(unsigned char)3] = ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2] [i_2])), ((unsigned short)23630)))) << (((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_6 [i_1] [i_2]))) - (3523590376791144047ULL))))) & ((~((~(((/* implicit */int) arr_5 [8U] [(_Bool)1] [i_2] [3ULL]))))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) max((min(((unsigned short)159), (((/* implicit */unsigned short) arr_5 [8ULL] [i_2 - 2] [i_2 - 2] [i_2])))), (((/* implicit */unsigned short) min((arr_5 [i_0] [i_2 + 3] [i_2 + 2] [1U]), (arr_5 [i_1] [i_2 + 1] [i_2 + 1] [i_2]))))));
                    var_11 = ((/* implicit */unsigned long long int) 3771423102408375620LL);
                }
            } 
        } 
    } 
    var_12 -= ((/* implicit */signed char) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_2))));
    var_13 = (_Bool)1;
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5216730923491393350ULL)) && ((_Bool)1)))), (var_7))))))));
}
