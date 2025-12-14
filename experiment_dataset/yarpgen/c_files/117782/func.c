/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117782
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)0)), ((+(((/* implicit */int) var_14)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_19 += ((unsigned short) arr_6 [i_1] [(unsigned short)9]);
                    var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)4]))) + (3407161233890930282LL))))));
                }
            } 
        } 
    } 
    var_21 += ((((/* implicit */int) ((short) var_12))) % (((/* implicit */int) var_17)));
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) + ((~(((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            {
                var_23 *= ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_4] [i_4] [i_3]))));
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_4] [i_4])) ? (((/* implicit */int) arr_6 [11LL] [i_4])) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_4]))))) ? (2122911431) : (((/* implicit */int) ((short) var_11))))))));
            }
        } 
    } 
}
