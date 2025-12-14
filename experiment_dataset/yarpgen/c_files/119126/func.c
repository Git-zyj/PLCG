/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119126
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) min((3758096384U), (3758096368U)));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */int) ((var_9) && (((/* implicit */_Bool) 3758096368U))))) - (((/* implicit */int) arr_2 [i_1] [(signed char)9])))) + (41053)))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (+(-485132670))))), ((+(((/* implicit */int) ((unsigned short) -1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 3; i_2 < 6; i_2 += 3) 
    {
        for (int i_3 = 1; i_3 < 7; i_3 += 3) 
        {
            {
                arr_13 [i_2] = ((/* implicit */signed char) (~(((unsigned int) 536870935U))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_12 ^= ((/* implicit */short) ((unsigned int) (+(((/* implicit */int) var_3)))));
                            arr_19 [i_2] [2U] [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2308888941U)) || (((/* implicit */_Bool) var_10))));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_3 - 1]))) - (max((9007199254740991ULL), (((/* implicit */unsigned long long int) -1188283535))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((var_11) && (((((/* implicit */_Bool) max((3758096361U), (((/* implicit */unsigned int) -1610209483))))) && (((/* implicit */_Bool) max((3137920037287658697ULL), (var_10))))))));
}
