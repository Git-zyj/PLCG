/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165962
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 274453345114786158LL))));
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */long long int) min((var_2), (((max((var_2), (((/* implicit */unsigned long long int) var_5)))) << (((/* implicit */int) max(((short)-18734), (((/* implicit */short) arr_3 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            for (unsigned short i_4 = 4; i_4 < 19; i_4 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 3] [i_3 + 3])) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1)))))))));
                    var_19 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_8 [i_3 + 2] [i_3 + 3] [i_4 - 1]), (((/* implicit */long long int) (short)-1))))), (max((3173707665506163733ULL), (((/* implicit */unsigned long long int) arr_8 [i_3 + 2] [i_3 + 2] [i_4 - 1]))))));
                    arr_14 [7LL] = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) max((min((-475337062), (475337062))), (2147483647)));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -185587833)))) ? (((/* implicit */int) ((var_12) != (((/* implicit */int) (short)18482))))) : (var_12)))) && (((/* implicit */_Bool) var_7))));
}
