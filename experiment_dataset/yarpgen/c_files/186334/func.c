/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186334
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((var_11), (var_11)))))) && (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (var_6))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1296242430920100768LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)109))) : (-4889705369618876613LL)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)13727), (((/* implicit */short) ((unsigned char) -61346577668565072LL))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) (unsigned short)40714)))));
                        arr_14 [i_0] [i_1] = ((/* implicit */signed char) (~(min((var_11), (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))))));
                        var_14 = ((/* implicit */long long int) (signed char)58);
                        arr_15 [i_3] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_12);
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */long long int) (signed char)65);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) << (((778461741779081647ULL) - (778461741779081627ULL))))));
                    arr_22 [14U] [i_0] [i_0] = ((/* implicit */unsigned char) max((max(((-(1407435186919742060ULL))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) max(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (short)-24771)))))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) (unsigned char)18)))))), (((/* implicit */int) var_8))));
}
