/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152401
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6))) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_15)))))) != (((/* implicit */int) var_7))));
    var_17 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 3] [i_1 - 3]))))));
                            arr_8 [i_0] [i_1] [i_2] [(signed char)11] = ((/* implicit */_Bool) arr_0 [(unsigned short)3] [(signed char)14]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) var_12);
                var_20 = ((/* implicit */unsigned char) arr_3 [(signed char)22] [i_1] [i_1]);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [1U] [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_1] [2LL] [i_0] [17])))) : (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) var_8))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) max(((unsigned char)39), ((unsigned char)219)))) : (((/* implicit */int) arr_3 [i_1 - 4] [i_1 + 1] [i_1 - 1]))))));
                var_22 -= ((/* implicit */int) var_7);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        arr_11 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_6 [(short)18] [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) (unsigned char)199))))) & (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_6 [6LL] [i_4] [i_4] [i_4]))))));
        var_23 = ((/* implicit */signed char) arr_0 [i_4] [i_4]);
    }
}
