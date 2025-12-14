/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136440
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 - 2]);
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (1222012424338270473LL) : (1222012424338270473LL)))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) >= (arr_2 [i_0]))))));
        var_18 = ((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)27981)))))));
    }
    var_19 = ((/* implicit */_Bool) max((1222012424338270471LL), (((/* implicit */long long int) var_5))));
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            {
                arr_9 [i_1] = ((/* implicit */unsigned int) arr_6 [i_1] [i_1]);
                var_20 &= ((/* implicit */int) max((1222012424338270471LL), (-1222012424338270471LL)));
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) 1222012424338270455LL))));
                arr_10 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (-1222012424338270490LL) : (((/* implicit */long long int) 1280416190U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1280416190U)))))) : (((((/* implicit */_Bool) arr_6 [i_1] [13ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))) : (arr_5 [i_2])))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2)))))), (((long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        for (signed char i_4 = 1; i_4 < 14; i_4 += 3) 
        {
            {
                arr_16 [(unsigned short)4] [(signed char)6] [i_3] = ((/* implicit */unsigned char) var_2);
                arr_17 [i_3] [i_4] = ((/* implicit */int) ((long long int) (-9223372036854775807LL - 1LL)));
            }
        } 
    } 
}
