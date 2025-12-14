/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152276
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
    var_11 = ((/* implicit */short) (unsigned short)3);
    var_12 -= ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_3))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0] [i_0] [i_0]);
                    arr_9 [i_0] [i_0] [i_2] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((max((min((((/* implicit */long long int) 3369777022U)), (3894037802556276216LL))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-14622))))))) << (((((unsigned int) arr_5 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1])) - (3903042727U)))))) : (((/* implicit */unsigned char) ((max((min((((/* implicit */long long int) 3369777022U)), (3894037802556276216LL))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-14622))))))) << (((((((unsigned int) arr_5 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 1])) - (3903042727U))) - (2293891929U))))));
                }
            } 
        } 
        var_14 = 17529845253086555891ULL;
    }
    var_15 = ((short) var_9);
}
