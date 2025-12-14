/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151849
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1] [i_2 - 3])))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (-6994449042653181580LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */int) arr_4 [i_0] [(unsigned short)7])) & (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_2 [i_0] [i_1 - 2])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)11896)) == (((int) arr_5 [i_0] [i_0] [(signed char)11] [i_0]))))))))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */unsigned int) var_10);
    var_20 = ((/* implicit */short) max((max((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)4088))))))), (((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) min((var_1), (((/* implicit */short) var_4))))))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)53639)))))));
}
