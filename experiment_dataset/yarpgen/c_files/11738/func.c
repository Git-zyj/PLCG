/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11738
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
    var_12 = ((/* implicit */signed char) 356641299U);
    var_13 = var_5;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_14 |= ((/* implicit */long long int) var_8);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_5 [i_0] [14ULL] = ((/* implicit */signed char) arr_3 [i_0]);
            arr_6 [9ULL] [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0] [i_1]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (arr_3 [i_0])))) : ((+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))) : (356641299U)))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) (signed char)55))))) || (((/* implicit */_Bool) 3919186815U)))) && (((/* implicit */_Bool) 8340431551752570385ULL))));
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] [6ULL] = ((/* implicit */signed char) arr_3 [i_4]);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            arr_18 [i_0] &= ((/* implicit */signed char) ((unsigned short) (signed char)-1));
            var_16 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) == (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)-22)), ((unsigned short)65531)))), (var_4))) : (((/* implicit */unsigned long long int) ((arr_3 [i_0]) / (((/* implicit */int) (signed char)21)))))));
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-1);
            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)50))));
            arr_20 [i_0] [i_0] [8LL] = ((/* implicit */unsigned char) ((unsigned short) 0LL));
        }
        var_18 = ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (var_4) : (min((((/* implicit */unsigned long long int) (unsigned short)65530)), (0ULL))));
    }
}
