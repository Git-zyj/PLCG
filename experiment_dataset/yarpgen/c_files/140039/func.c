/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140039
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
    var_10 |= ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 |= arr_2 [i_0];
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) & (0U)))))) && (((/* implicit */_Bool) ((((((/* implicit */int) var_7)) << (((((/* implicit */int) var_4)) - (45843))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116))))))))));
        var_12 += ((/* implicit */unsigned short) -810505617715118960LL);
        var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))) || ((!(((/* implicit */_Bool) (signed char)116)))))))) < (((((/* implicit */_Bool) arr_2 [i_0])) ? ((-(arr_0 [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)32931)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_1]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)23651))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16636))) / (-1LL)))))))))));
        arr_7 [22U] [(unsigned short)18] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
    }
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((((((/* implicit */int) arr_2 [i_2])) == (((/* implicit */int) ((unsigned short) var_1))))), (((min((arr_9 [i_2]), (2332641581U))) >= (var_2))))))));
                arr_13 [(unsigned short)4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */short) (signed char)-116)), ((short)8479)))), (arr_10 [i_2] [i_3])));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-14652))) == (max((((/* implicit */long long int) arr_9 [i_2])), (arr_10 [i_2] [i_3])))));
            }
        } 
    } 
}
