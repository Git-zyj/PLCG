/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135951
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
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-114)))) + (((/* implicit */int) ((var_15) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1007003018U)) ? (var_2) : (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11)))) : (((unsigned long long int) 1752075151U))))));
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_3) % ((((_Bool)1) ? (4121547769U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_2 - 3] [i_3] = ((/* implicit */long long int) ((unsigned short) 2080374784U));
                        arr_11 [i_0] [i_1 - 2] [(unsigned char)24] [(unsigned char)24] = ((/* implicit */_Bool) ((((max((var_15), (((/* implicit */unsigned long long int) (short)-11)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 4]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)15))) ? (((/* implicit */unsigned int) ((arr_4 [i_0] [i_1 - 2] [i_2 - 3]) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) arr_6 [i_0] [i_1] [21] [i_1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) | (3951107878U))))))));
                    }
                    for (signed char i_4 = 2; i_4 < 23; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [13] [13])) | (((/* implicit */int) arr_9 [i_1] [i_2 - 1] [i_2 - 1]))))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) (signed char)103);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 3) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] = 2542892130U;
                        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_5 [(unsigned char)13] [20U])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_1 - 2] [i_2] [20LL] [i_0])) : (((/* implicit */int) var_12)))) : ((~(((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_5] [i_1])))))), ((((_Bool)1) ? (arr_16 [i_0] [i_5 + 1] [i_2] [i_5 + 1] [i_5 + 1] [12ULL]) : (arr_16 [i_0] [i_5 - 1] [i_5 - 1] [i_0] [i_5] [i_1])))));
                    }
                }
            } 
        } 
    } 
    var_20 ^= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1450403702377447662LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35345))) : (17U))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-22242))))) ? (-1) : (((/* implicit */int) var_0)))));
}
