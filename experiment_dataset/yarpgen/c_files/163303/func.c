/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163303
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
    var_15 = var_3;
    var_16 = ((/* implicit */unsigned char) ((long long int) var_5));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((unsigned char) (signed char)9));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((int) 650203870)))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((-650203867) >= (((/* implicit */int) (_Bool)1))))), ((((~(var_3))) * (((/* implicit */unsigned int) -650203850)))))))));
                    arr_12 [(signed char)12] [i_2] [i_3] = ((((18446744073709551615ULL) % (28ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    arr_13 [i_1] [i_1] = ((/* implicit */long long int) min((max((((/* implicit */int) (_Bool)1)), (var_5))), (((/* implicit */int) ((_Bool) var_9)))));
                    arr_14 [i_2] [i_2] [i_2] = ((unsigned char) min(((signed char)-85), ((signed char)-93)));
                }
            } 
        } 
        arr_15 [i_1] [i_1] = ((/* implicit */short) ((((unsigned long long int) (short)-29041)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((int) (signed char)-4))) && (((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)134))))))))));
        arr_16 [(_Bool)1] = ((/* implicit */int) ((unsigned char) var_1));
        arr_17 [i_1] [i_1] = ((/* implicit */signed char) -504764865);
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
    {
        arr_21 [i_4] = (+(((int) -650203858)));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)6900))))) <= (var_9)));
    }
    var_21 = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned int) ((unsigned char) var_1)))));
    var_22 = ((/* implicit */signed char) (~((~(((/* implicit */int) ((_Bool) var_3)))))));
}
