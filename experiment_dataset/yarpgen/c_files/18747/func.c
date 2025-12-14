/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18747
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
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */_Bool) arr_6 [(short)10] [i_1] [i_1]);
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (-(((/* implicit */int) ((_Bool) 14644396627188451235ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_15 *= ((/* implicit */_Bool) var_12);
                                arr_14 [i_3] [i_3] [i_3] [7U] [9U] = ((/* implicit */short) ((min((9909608097372834676ULL), (3650754968360723215ULL))) | (((/* implicit */unsigned long long int) arr_3 [4U] [i_1] [12ULL]))));
                                arr_15 [i_3] = ((/* implicit */unsigned long long int) (-(-1922759452)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = (~(((/* implicit */int) (_Bool)0)));
}
