/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156270
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
    var_12 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (-4102262242191122161LL)));
    var_13 = ((/* implicit */unsigned int) (_Bool)1);
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1485070418)))) ? (((/* implicit */int) ((max((((/* implicit */long long int) var_8)), (var_3))) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)194)), (3508097254U)))) ? (((/* implicit */int) ((var_11) < (((/* implicit */long long int) var_2))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)35792)) > (((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) (unsigned short)29739)) % (1924110765)))));
                var_15 ^= arr_0 [6LL] [6];
            }
        } 
    } 
}
