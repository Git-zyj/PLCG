/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168105
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
    var_10 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (~((-2147483647 - 1))))) : (((unsigned long long int) 423971605U))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((1472660306U), (((/* implicit */unsigned int) (unsigned char)71))));
                arr_5 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */long long int) 2147483647);
                var_12 = ((/* implicit */int) var_7);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) 13U)) % (15545561198879898965ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(8232149579516641887LL)))) ? (((/* implicit */int) arr_1 [i_3])) : (((((/* implicit */int) (signed char)13)) & (((/* implicit */int) (signed char)23)))))))));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_7 [i_0] [i_0 - 2] [i_0 - 1]))))) & (((((/* implicit */_Bool) (signed char)29)) ? (-7742906812244768598LL) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)41)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)13)) || (((/* implicit */_Bool) -7155112780617714888LL))))), ((signed char)-9)))), ((~(((/* implicit */int) min(((unsigned char)71), ((unsigned char)118))))))));
}
