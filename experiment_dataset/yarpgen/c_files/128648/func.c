/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128648
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
    var_10 = ((/* implicit */short) ((unsigned short) var_9));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_9);
        var_11 *= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [10ULL]) : (((/* implicit */int) (signed char)-10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((int) arr_2 [i_0] [(unsigned char)0]))))) : (var_5));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            arr_16 [(unsigned short)3] [i_2] [6ULL] = ((/* implicit */int) ((_Bool) ((int) 14314089853469825201ULL)));
                            var_12 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (arr_8 [i_1] [i_1] [i_2 + 1]) : (((/* implicit */int) var_9))))));
                        }
                        arr_17 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_7 [i_2 + 2])))))));
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((int) 5216150724048874424ULL)))));
                        var_14 -= ((/* implicit */short) ((unsigned int) 234881024));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (var_0)))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) >= (var_1)))))))));
}
