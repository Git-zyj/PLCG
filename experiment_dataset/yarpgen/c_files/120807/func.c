/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120807
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((int) 399497279))) * ((-(var_4))))), (((/* implicit */unsigned int) var_11))));
                var_21 -= ((((/* implicit */_Bool) min((-399497279), (((/* implicit */int) max((var_8), (var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)211)) & (((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) 4121439760U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20896))) : (-7964868130572644381LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_1]))))))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)83))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0 + 1]))));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_4 [(signed char)12])) ? (max((var_1), (((/* implicit */unsigned int) arr_4 [8ULL])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2]))))))))));
                var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4730)) ? (661808170) : (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_10))));
}
