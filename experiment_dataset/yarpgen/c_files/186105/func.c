/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186105
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */_Bool) (+(8438599424900324087ULL)));
                var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-7709))))) && (((/* implicit */_Bool) max((10008144648809227510ULL), (((/* implicit */unsigned long long int) (signed char)23))))))) ? (max((var_9), (((/* implicit */long long int) (signed char)10)))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)19)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */int) var_10);
                            var_17 = ((/* implicit */_Bool) min((var_17), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)93)) == (((/* implicit */int) (signed char)22)))))))))))));
                            var_18 = ((/* implicit */_Bool) max(((+(18446744073709551615ULL))), (arr_8 [i_0] [i_0] [i_2] [i_2])));
                            var_19 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-109)))) : (min((4350506428375543819ULL), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_3])))))), (((/* implicit */unsigned long long int) ((short) ((8438599424900324117ULL) - (((/* implicit */unsigned long long int) 1196894228))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((-1359375611115312241LL), (((/* implicit */long long int) var_10)))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) ((((/* implicit */long long int) var_7)) < (-11LL)))) : (min((1729886405), (((/* implicit */int) (signed char)27))))))) : (((unsigned long long int) ((long long int) var_13)))));
}
