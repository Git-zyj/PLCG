/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142143
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [(signed char)2] |= ((/* implicit */signed char) (-(((/* implicit */int) max((arr_1 [(signed char)8]), (arr_1 [(unsigned char)10]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3] [i_2] [(signed char)10])) ? (9223369837831520256ULL) : (11505883690740405003ULL)))) ? ((-(((/* implicit */int) arr_0 [(_Bool)1] [i_0])))) : ((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) ((signed char) var_13))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [(_Bool)0] [(signed char)6] [(signed char)4] [i_3 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? (((/* implicit */int) max(((unsigned char)77), (((/* implicit */unsigned char) max(((_Bool)1), (var_13))))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-16)) != (((/* implicit */int) (signed char)-126)))))));
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            {
                arr_17 [(unsigned char)9] [i_5] = ((/* implicit */signed char) (unsigned char)255);
                arr_18 [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [(unsigned char)4] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_5] [(signed char)0]))))), ((~(var_3)))))));
                var_18 = ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_1 [i_4]))))))));
            }
        } 
    } 
}
