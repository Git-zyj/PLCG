/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145278
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0])))))));
        arr_2 [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -7981567591990497138LL)) + (14970910745876077804ULL)));
    }
    for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_14 = ((/* implicit */long long int) arr_4 [i_1]);
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((_Bool) (~(((/* implicit */int) (signed char)-126))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_3]))))) : ((~(15326399967662831730ULL))))))));
                    var_16 += ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) arr_7 [i_1] [i_1])))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 3475833327833473811ULL))))))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) min(((signed char)-1), (arr_4 [i_1]))))));
                }
            } 
        } 
        arr_9 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_4 [i_1])), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_1]))))) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) arr_4 [i_1 + 1]))))));
        var_17 *= ((/* implicit */signed char) var_6);
    }
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
    {
        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) arr_10 [(unsigned char)6]);
                var_19 ^= ((/* implicit */unsigned int) (signed char)16);
                arr_14 [i_4] = ((/* implicit */short) (+((-(((/* implicit */int) ((_Bool) var_7)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_7);
    var_21 = (+((-(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (852560445U))))));
}
