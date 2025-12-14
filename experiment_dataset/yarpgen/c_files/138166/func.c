/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138166
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((short) var_4)), (((/* implicit */short) max((((/* implicit */signed char) var_12)), (var_1))))))) ? (max((((int) 18446744073709551615ULL)), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_16))))))) : (((/* implicit */int) ((((/* implicit */int) ((var_4) || (((/* implicit */_Bool) var_10))))) == (((/* implicit */int) max((var_3), (((/* implicit */short) var_5))))))))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) max((((/* implicit */long long int) (-((~(((/* implicit */int) var_3))))))), (((long long int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) -2110231241)) == (13672424133932320895ULL))))))) : (((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (28ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            arr_10 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)121)) ? (4774319939777230703ULL) : (((/* implicit */unsigned long long int) 9223372036854775790LL))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_2 [(_Bool)1])))))))))));
                var_22 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1]))));
            }
        } 
    } 
}
