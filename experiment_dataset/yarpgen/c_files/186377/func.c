/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186377
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [16LL] &= ((/* implicit */long long int) 3407732230188635039ULL);
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) 6053160202326478080LL)) ? (1730797130116304071LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)1427)) > (((/* implicit */int) (unsigned char)41))))))));
                    arr_10 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((var_17) | (((/* implicit */int) var_6))))) ? ((+(6053160202326478080LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) var_0);
        var_19 &= min((max(((~(arr_13 [i_3] [i_3]))), ((~(-6725510243466265320LL))))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) % (((((/* implicit */_Bool) -6053160202326478081LL)) ? (var_4) : (0LL))))));
    }
    for (long long int i_4 = 4; i_4 < 19; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (max((((((/* implicit */long long int) var_14)) * (14LL))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) arr_1 [i_4])) : (-6053160202326478104LL)))))));
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_15)), (42LL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) % (8875923425408234344ULL)))))) ? (((unsigned int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-126))))))));
        var_21 -= (signed char)90;
        var_22 = ((/* implicit */signed char) -14LL);
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))));
                    var_24 = (+(max((max((((/* implicit */unsigned long long int) arr_6 [i_4] [i_4] [i_4])), (148354694843052005ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_17 [i_4 - 1] [(_Bool)1] [i_4 - 1])), (139526101)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            {
                var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7244262598920430719LL)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_26 [i_7])), ((unsigned char)27)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)47470)))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_7])))))));
                var_26 ^= ((/* implicit */unsigned int) (-(arr_27 [i_7] [i_8])));
            }
        } 
    } 
}
