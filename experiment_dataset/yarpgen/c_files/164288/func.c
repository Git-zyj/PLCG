/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164288
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
    var_18 = ((/* implicit */signed char) var_2);
    var_19 -= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8863448605977039048LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) && (((/* implicit */_Bool) var_7)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [(signed char)7] = ((/* implicit */signed char) var_13);
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_17))));
                    arr_8 [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */int) var_9)), (arr_0 [i_0] [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) || (((/* implicit */_Bool) arr_1 [i_2])))))))) || (((arr_2 [(unsigned char)4] [i_0]) && (((/* implicit */_Bool) min((var_15), (var_13))))))));
                    arr_9 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? ((-(((/* implicit */int) ((short) var_16))))) : (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))) + (-8863448605977039052LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 8863448605977039047LL)))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) 8863448605977039046LL)) || (((/* implicit */_Bool) max((-12304000933407804LL), (((/* implicit */long long int) (unsigned char)2))))))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) -1590298578)) * (((((/* implicit */_Bool) (+(315017632932604996LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) : ((+(var_1)))))));
}
