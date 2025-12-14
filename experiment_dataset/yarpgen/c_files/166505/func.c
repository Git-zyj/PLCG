/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166505
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) max((((long long int) ((((/* implicit */_Bool) 0U)) ? (-2000762631660209620LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))))), (((/* implicit */long long int) (short)6328)))))));
    var_11 = ((-328050531127962364LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_12 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)3)), (arr_2 [i_0]))))) != (((((/* implicit */_Bool) 1061949975621317263LL)) ? (-7837731005716246879LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-6))) >= (((((/* implicit */_Bool) (short)8916)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-1)))) : ((-9223372036854775807LL - 1LL))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_15 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((7U), (((/* implicit */unsigned int) (signed char)-127))))) ? (((((/* implicit */int) (short)20448)) ^ (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) ((unsigned short) var_7)))))), (var_0)));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            arr_8 [i_1] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(short)15] [i_2 + 1] [(short)14])) ? (((/* implicit */int) (short)-15048)) : (((/* implicit */int) ((signed char) var_1)))))), (-919256380843923066LL)));
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_2 + 2])) ? (6546036374823036085LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1])))))));
            /* LoopNest 3 */
            for (long long int i_3 = 3; i_3 < 23; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 23; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (unsigned char)255))));
                            arr_17 [i_1] = ((/* implicit */long long int) (unsigned short)40987);
                            var_18 = min((((/* implicit */long long int) (short)32767)), (721248156787581593LL));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */signed char) (unsigned short)16635);
        }
    }
    var_20 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_0)))))));
}
