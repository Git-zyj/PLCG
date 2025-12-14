/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138216
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) >> (min((((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) var_5))))));
    var_11 = ((/* implicit */unsigned char) var_9);
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_13 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)1]))) != (0LL)))) >> (((/* implicit */int) ((((/* implicit */_Bool) 17032624689231153221ULL)) || (((/* implicit */_Bool) 1414119384478398395ULL)))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_13 [i_3] = ((/* implicit */long long int) var_1);
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))))) : (max((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_2))))), ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] [i_4] [i_4]))))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_18 [(_Bool)1] [i_3] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) var_0)))));
                            arr_19 [i_3] [i_5] [i_3] [i_2] [i_1] [i_0] [i_3] = ((/* implicit */signed char) arr_15 [i_5] [(_Bool)1] [i_3] [i_0] [i_3] [i_0] [i_0]);
                            arr_20 [i_5] [i_5] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (var_3)))) ? (((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) arr_2 [i_1])) & (((/* implicit */int) var_8))))));
                            arr_21 [i_0] [i_3] [i_3] [i_5] = (!((!(((/* implicit */_Bool) arr_15 [i_0] [i_3] [i_3] [10ULL] [i_3] [i_0] [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned char) var_8);
                            var_15 = var_3;
                            var_16 = ((/* implicit */short) ((unsigned int) ((unsigned long long int) arr_6 [i_0] [i_0])));
                        }
                        var_17 |= ((/* implicit */unsigned char) 1414119384478398395ULL);
                    }
                } 
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned int) ((signed char) ((unsigned long long int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
}
