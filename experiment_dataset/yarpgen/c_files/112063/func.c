/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112063
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) 14077267272011700141ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_2 [i_1] [i_0]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_2] [(_Bool)1] [i_0]))));
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65529)) - (((/* implicit */int) (unsigned short)8)))) >> (((((/* implicit */int) (signed char)-24)) + (52))))))));
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 1] [4ULL] [4ULL])) ? (arr_8 [i_1 - 3] [i_1 - 2] [(unsigned short)8] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 3] [i_1 + 1] [i_1 - 3] [i_2]))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_0] [i_3 + 1])) && (((/* implicit */_Bool) arr_10 [i_1 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 13U)) ? (4294967283U) : (4294967293U)))) : (4064LL)));
                        arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)105)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3])) ^ (((/* implicit */int) (signed char)46))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) 1748974299815239245LL)))))));
                        arr_16 [16LL] &= ((/* implicit */_Bool) arr_2 [i_2] [i_1]);
                        var_14 = arr_3 [i_0] [i_2] [i_4];
                    }
                    arr_17 [i_0] [(_Bool)1] [i_2] [i_1 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1748974299815239245LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_0] [i_1] [i_2]))) : (14077267272011700141ULL))))));
                }
            }
        } 
    } 
    var_15 &= ((/* implicit */signed char) ((unsigned long long int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_8))))))));
    var_16 = ((/* implicit */unsigned int) var_5);
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (+(((14077267272011700143ULL) & (((/* implicit */unsigned long long int) ((1U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246)))))))))))));
}
