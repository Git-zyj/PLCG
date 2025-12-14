/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131636
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
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)120))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (max((((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-1960)))), ((+(((/* implicit */int) (_Bool)1))))))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_1])) >> (((((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45965))))) - (221905950U))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_4);
    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_11)))) && (((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) var_17))) / (var_7))))) : (((/* implicit */long long int) 588511739U))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (var_1))))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)18639)))))));
                    var_26 -= ((/* implicit */unsigned long long int) arr_4 [i_2] [i_3] [i_4]);
                    var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)1530)) : (((/* implicit */int) (short)-32174))))) ? (((((/* implicit */_Bool) 89656324)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)1024)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (short)-1959))))));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((((/* implicit */_Bool) arr_9 [i_2] [i_3] [i_4])) || ((!(((/* implicit */_Bool) 696952981U))))))));
                }
            } 
        } 
        arr_13 [i_2] [i_2] &= ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned short)1))))));
    }
}
