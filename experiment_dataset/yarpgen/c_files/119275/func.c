/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119275
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))), (var_12)));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned short)10] [i_2] = ((/* implicit */_Bool) 3847513632976525091LL);
                    var_20 = ((/* implicit */unsigned short) min((min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_3 [9ULL])))), (((/* implicit */int) (unsigned char)188))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) ((unsigned char) 2624425275078468511LL)))))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_7 [15] [i_1 - 1] [i_1 - 1])))))))));
                }
            } 
        } 
    } 
}
