/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164020
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) * (0)));
    var_11 = var_4;
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -361323816)) ? (((/* implicit */int) var_0)) : (0)))) % (var_3)))) : (max((((((/* implicit */_Bool) 6491982032735660880ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (6491982032735660880ULL))), (((/* implicit */unsigned long long int) var_6))))));
    var_13 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) 1259537024)), (916123759U))) <= (((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (326565834U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min(((((_Bool)1) ? ((-(var_9))) : (min((6491982032735660880ULL), (((/* implicit */unsigned long long int) 2101954904)))))), (max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (signed char)-15)))))))));
                        arr_11 [i_0] [i_0] [7ULL] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned int) ((long long int) (signed char)17)));
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))) ? (var_6) : (((/* implicit */long long int) 515813909)))))));
                    }
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [3U] [(signed char)3] [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) 318593699U)) && (((/* implicit */_Bool) (unsigned short)51969)))))))), (((arr_5 [i_0] [i_2 + 1] [i_2] [1ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (arr_4 [(signed char)4] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
}
