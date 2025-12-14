/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181950
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
    var_14 += ((/* implicit */int) (-(min((var_12), (min((((/* implicit */unsigned long long int) var_11)), (var_13)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */signed char) ((long long int) min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) ((unsigned short) var_6))))));
        var_15 = ((/* implicit */unsigned int) ((short) min((max((((/* implicit */unsigned long long int) var_9)), (var_10))), (((/* implicit */unsigned long long int) ((_Bool) var_5))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_5);
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_4] [i_4] = min((min((((unsigned int) var_2)), (((/* implicit */unsigned int) ((short) var_5))))), (((/* implicit */unsigned int) (~(var_6)))));
                            arr_16 [i_1] [i_2] [i_2] [i_2] [i_2] [i_1] = var_7;
                        }
                        arr_17 [8LL] [i_1] [21U] [i_1] [i_1] = ((/* implicit */_Bool) (+((~(min((var_5), (var_5)))))));
                        arr_18 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) var_6))))));
                    }
                    var_16 = ((/* implicit */int) (+(min((((((/* implicit */long long int) (-2147483647 - 1))) ^ (288230376151710720LL))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((unsigned char) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_0)))));
    var_18 = ((/* implicit */unsigned int) ((unsigned char) (+((+(((/* implicit */int) var_11)))))));
}
