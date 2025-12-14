/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135433
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
    var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || ((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 12499702869285334758ULL)))))) / (arr_1 [i_0]))) >= (arr_1 [(unsigned short)8])));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_2);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((short) ((long long int) var_9)));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (!((_Bool)1))));
                        /* LoopSeq 1 */
                        for (short i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((2413582831341486093ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))));
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_11 [i_4] [i_4 - 2] [i_4] [i_2 - 1] [i_1 - 1])))) ? (arr_0 [i_0]) : (((((/* implicit */int) (unsigned char)7)) / (((/* implicit */int) (signed char)87)))))))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) (short)-16)) & (683209285))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
    var_17 = ((/* implicit */short) var_1);
}
