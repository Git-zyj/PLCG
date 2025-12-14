/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136009
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
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 *= min((((/* implicit */unsigned short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)55)))), ((unsigned short)51456));
                    var_15 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)51456)) == (min((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) (unsigned short)51456))))))));
                    var_16 = ((/* implicit */signed char) max((max((var_13), (484959992))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (3109575553U)))) ? (((((/* implicit */_Bool) (unsigned short)14080)) ? (((/* implicit */int) (unsigned short)14063)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)38)) * (max((var_13), (((/* implicit */int) (short)-6164)))))))));
                                var_18 += ((/* implicit */signed char) min((((/* implicit */int) min((arr_1 [i_0 - 2]), ((signed char)-1)))), (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0 - 2]))))));
                                var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned char) var_10)), (arr_5 [i_3])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_13);
}
