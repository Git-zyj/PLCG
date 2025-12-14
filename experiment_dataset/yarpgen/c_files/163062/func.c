/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163062
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
    var_12 = ((/* implicit */unsigned long long int) ((signed char) 17665507470179885755ULL));
    var_13 = ((/* implicit */unsigned char) ((long long int) var_10));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) arr_5 [i_1] [i_0]);
                            var_15 = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)96))))), ((unsigned short)46073));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    var_16 = (-2147483647 - 1);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(17665507470179885755ULL))) + (((/* implicit */unsigned long long int) var_3))))) ? (((((((/* implicit */unsigned int) var_1)) - (var_4))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)96))))))) : (((unsigned int) ((9007199254740480LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_4 + 1])))))))))));
                    var_18 = ((/* implicit */int) ((-8265151914530598311LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-49)))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((short) (~(((/* implicit */int) (signed char)-115))))))));
                }
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)43428)) & (((/* implicit */int) (signed char)18))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((+(((/* implicit */int) (signed char)-110)))) : (var_9)));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                var_22 = ((/* implicit */unsigned short) (signed char)-91);
                var_23 = ((/* implicit */signed char) ((var_3) ^ (((/* implicit */long long int) -2147483632))));
                var_24 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) != (var_7)))), ((+(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_5]))) : (var_0))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))))))));
                var_25 |= ((/* implicit */_Bool) ((unsigned char) (signed char)-87));
            }
        } 
    } 
}
