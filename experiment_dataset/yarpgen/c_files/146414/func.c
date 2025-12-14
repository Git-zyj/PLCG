/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146414
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)115);
                    arr_9 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (max((((/* implicit */long long int) arr_0 [i_1])), (var_16))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(9223372036854775799LL)))))))));
                    arr_10 [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((short) arr_0 [i_0]));
                    arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) min(((-(8309156055503180358LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0])))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((var_15) ? (((/* implicit */int) ((((/* implicit */_Bool) 8309156055503180379LL)) && (((/* implicit */_Bool) 2909208945995768565LL))))) : (((/* implicit */int) var_10))));
    var_18 = ((/* implicit */unsigned int) var_13);
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), ((-(0)))));
}
