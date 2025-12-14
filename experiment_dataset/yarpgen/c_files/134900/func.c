/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134900
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) (_Bool)1)))) != (((arr_5 [i_1]) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */int) min(((unsigned char)80), (((/* implicit */unsigned char) var_3))))) : (arr_3 [i_1] [i_1])))));
                    arr_8 [21ULL] [i_2] = ((/* implicit */int) (_Bool)1);
                    arr_9 [i_0] [2] [(_Bool)1] = (((_Bool)1) ? (((/* implicit */int) arr_7 [(unsigned char)2] [(unsigned char)2] [i_2])) : ((((-(((/* implicit */int) arr_0 [15])))) >> (((/* implicit */int) ((unsigned char) var_3))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_4])) ? ((~(((/* implicit */int) arr_7 [i_4] [i_4] [i_4])))) : (((/* implicit */int) arr_1 [i_4] [i_1]))))) ? (max((((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_10 [i_1] [i_3])) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)1))));
                                var_13 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (var_1)))) ? (((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) arr_7 [i_1] [i_3] [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_9)) == (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) var_0))))))) : (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned long long int) var_10)), (6809744959748785673ULL)))))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((arr_15 [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [i_4]), (((((/* implicit */_Bool) arr_15 [22] [i_1] [22] [i_3] [i_4])) ? ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_4])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8)))))))));
                                var_15 ^= ((/* implicit */_Bool) ((int) (_Bool)1));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) arr_14 [(signed char)12] [i_0]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_7))));
    var_18 &= max((min((((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_10)))), (((/* implicit */int) var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_19 [i_5] = ((arr_5 [i_5 + 1]) ? (-311258260) : (((/* implicit */int) var_0)));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_5 [i_5 + 1]))));
    }
}
