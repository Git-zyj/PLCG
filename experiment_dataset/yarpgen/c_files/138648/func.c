/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138648
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] &= ((/* implicit */signed char) ((9482233263225385371ULL) % (((/* implicit */unsigned long long int) 5184017430530982639LL))));
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3] [i_2])))))))))) < (((((/* implicit */_Bool) -5184017430530982665LL)) ? (var_16) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_4 [(signed char)4] [i_3] [(unsigned char)0])))))))));
                                var_17 &= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1] [i_1 + 1]);
                                var_18 ^= ((/* implicit */_Bool) min((arr_7 [i_0] [i_0] [i_0] [i_0] [i_2]), (((/* implicit */long long int) (-(((/* implicit */int) (short)-17069)))))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_8 [i_2] [i_2] [i_2] [i_2]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) min(((+(288230371856744448ULL))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 - 1] [i_0] [i_2]))));
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_7 [(_Bool)1] [i_0] [i_1 - 1] [i_2] [i_0]);
                    var_20 = ((/* implicit */short) ((((/* implicit */int) max((((((/* implicit */int) var_3)) > (((/* implicit */int) var_0)))), ((!(((/* implicit */_Bool) arr_1 [i_2]))))))) & (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0]))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) 2834234204U)) && (((/* implicit */_Bool) 34359738367LL))));
    var_22 = ((/* implicit */int) var_12);
    var_23 -= ((/* implicit */unsigned int) var_0);
    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!(((((/* implicit */int) ((((/* implicit */int) (short)-6179)) >= (((/* implicit */int) (signed char)26))))) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))))));
}
