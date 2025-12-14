/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121355
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) != (var_4))))) - (var_2)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (short)7))));
        arr_2 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((signed char) ((((/* implicit */int) (short)-8)) / (((/* implicit */int) (short)-1))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(((int) arr_0 [i_0]))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((long long int) (signed char)-1)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_16 = (+(arr_14 [i_1] [i_2] [i_3] [i_4]));
                        var_17 *= ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_2 + 3] [i_4] [i_4] [i_2 + 1])) % (((/* implicit */int) (short)-7))));
                    }
                } 
            } 
        } 
        var_18 = (~(((/* implicit */int) (short)10)));
    }
    var_19 = ((/* implicit */_Bool) (~((((~(1432979256458475148ULL))) + (((unsigned long long int) var_12))))));
}
