/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162234
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
    var_11 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) var_5)) * (var_8))), (((/* implicit */unsigned long long int) (-((-(var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    var_12 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_2 + 1])) - (((/* implicit */int) arr_2 [i_2 + 1])))) + (((((arr_7 [i_2]) + (((/* implicit */int) arr_4 [i_1])))) + (((/* implicit */int) ((unsigned char) (signed char)68)))))));
                    arr_10 [i_2] [i_1] [i_0] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) (+(var_5)))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    arr_13 [i_0] [0] [i_1] [(short)21] = ((/* implicit */unsigned long long int) 2147483647);
                    var_13 ^= (-((-(14159341663699431544ULL))));
                    arr_14 [(signed char)12] [i_1] [i_3] = ((/* implicit */signed char) ((_Bool) var_5));
                    var_14 = ((/* implicit */short) ((var_0) % (((/* implicit */int) arr_4 [i_0 - 1]))));
                    arr_15 [15ULL] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_11 [i_0] [13ULL] [i_3] [3ULL])))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) (unsigned char)220))))));
                }
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    arr_19 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)85)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)50)) % (((/* implicit */int) (signed char)54))))))))));
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (arr_1 [i_0] [i_1]))))) ? (16327175821776348948ULL) : (min((min((var_10), (((/* implicit */unsigned long long int) (signed char)-87)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)32)))))))));
                    arr_20 [i_1] |= ((/* implicit */int) (signed char)-123);
                }
                /* vectorizable */
                for (signed char i_5 = 3; i_5 < 19; i_5 += 4) 
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-2002548862)))) ? (var_2) : (((/* implicit */unsigned long long int) arr_11 [i_0] [(signed char)17] [i_5] [i_0 - 1]))));
                    var_17 -= ((var_4) ? (arr_3 [i_0] [i_0 + 2] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                    arr_24 [(_Bool)1] = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1]))) != (3959057545432868372ULL))));
                }
                arr_25 [i_0] = ((/* implicit */long long int) (~(min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) max((var_4), (arr_17 [i_0] [i_1]))))))));
                var_18 += ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 6290642832813000681LL)) ? (((/* implicit */int) arr_12 [(short)8])) : (((/* implicit */int) ((unsigned char) var_3))))));
            }
        } 
    } 
}
