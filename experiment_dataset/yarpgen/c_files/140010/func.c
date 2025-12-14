/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140010
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
    var_13 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_3)))))) : (var_0)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) (!(arr_2 [i_0] [(signed char)9] [i_2 - 2])));
                        var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(signed char)4] [i_1] [14LL] [i_3])))))));
                        arr_10 [i_0] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_2] [i_2 - 2] [i_2 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_2 + 1] [i_3]))));
                        arr_11 [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [22LL])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2 + 1] [i_0]))))) : (((/* implicit */int) arr_7 [i_0] [i_2] [i_1] [i_0]))));
                        arr_12 [i_3] [i_3] [i_2] = ((/* implicit */_Bool) (-((-(var_11)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((arr_6 [i_2 - 1]) <= (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_4] [i_2 - 1] [(unsigned char)5] [i_0]))))))) ? (((((/* implicit */int) var_8)) >> (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_1] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))) : ((-(((/* implicit */int) arr_8 [i_4] [i_2] [i_1]))))));
                        arr_16 [i_4] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-20))));
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) != (arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [(_Bool)1] [i_0] [i_4] [i_5])) ? (((((/* implicit */int) arr_3 [i_0] [i_2])) % (((/* implicit */int) arr_18 [(unsigned short)3] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 1] [i_2]))))))))));
                            arr_19 [i_0] [8ULL] [i_4] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned char)5] [i_4] [i_2] [i_2 - 1] [13ULL] [13ULL])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_4] [i_5]))) : (((((/* implicit */_Bool) arr_18 [i_5] [i_4] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) (!(arr_0 [i_2 - 2]))))));
                        }
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_23 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) / ((+(((/* implicit */int) var_10))))));
                            var_16 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_4]))));
                        }
                    }
                    var_17 = ((/* implicit */signed char) (((!(arr_21 [i_2 - 1] [i_2] [i_2 - 2] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-40)) == (((/* implicit */int) (signed char)-40))))) : (((/* implicit */int) min((var_1), (arr_21 [i_2 + 1] [i_2] [(_Bool)1] [(_Bool)1] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
