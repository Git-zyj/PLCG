/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183829
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
    var_13 = (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101))) : (var_8)))));
    var_14 = min((((/* implicit */int) max(((unsigned char)90), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (var_0))))))), (max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_10)))));
    var_15 -= ((/* implicit */unsigned char) var_0);
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)-1957)) : (1409302791)))) ? (((var_4) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (_Bool)1)))))))) != (var_4)));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-32765)) <= (((/* implicit */int) ((((/* implicit */int) (short)-1941)) != (((/* implicit */int) var_9)))))))) + (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [6])) | (((/* implicit */int) (_Bool)0))))) ? ((~(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) (short)1956))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255))))), (9LL)))) ? (((/* implicit */long long int) ((((1073725440) >> (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) ((2147483647) != (((/* implicit */int) var_3)))))))) : (((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0])) && (((/* implicit */_Bool) (signed char)-81)))) ? ((~(var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))))));
            var_18 = ((/* implicit */short) (_Bool)1);
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_19 = ((/* implicit */short) (-(min((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_2] [i_2])))), (var_0)))));
            /* LoopSeq 2 */
            for (short i_3 = 3; i_3 < 21; i_3 += 2) 
            {
                var_20 &= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_2] [i_2])), (0U)))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_2] [i_2]))) : (((/* implicit */int) arr_8 [i_2] [i_2])));
                arr_14 [i_0] [19ULL] [6LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0)))))) : (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_8))))))));
                arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) max((((/* implicit */signed char) var_3)), ((signed char)-114))))))) ? (((/* implicit */int) arr_0 [i_2] [i_3 - 1])) : (((((((/* implicit */_Bool) 717281119U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-1)))) - (((/* implicit */int) (unsigned char)227))))));
            }
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                var_21 = (-(((/* implicit */int) var_10)));
                var_22 = ((/* implicit */unsigned int) (_Bool)1);
            }
        }
    }
}
