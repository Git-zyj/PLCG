/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158574
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
    var_11 = ((/* implicit */int) (short)-1);
    var_12 -= ((/* implicit */_Bool) ((((var_7) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned char)61))) : ((~(max((var_4), (var_4)))))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (+(((((var_7) ? (((/* implicit */int) (short)-8332)) : (((/* implicit */int) var_1)))) << (((max((var_9), (((/* implicit */int) (short)-28)))) + (47))))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) min(((signed char)-20), ((signed char)57)))), (max((((/* implicit */int) var_6)), (-1))))))));
                    var_15 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) 4041294068U)) ? (-1257509217) : (((/* implicit */int) arr_3 [i_1] [i_0])))) : (((/* implicit */int) (signed char)-103)))), (var_0));
                }
            } 
        } 
    } 
}
