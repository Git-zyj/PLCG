/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132660
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) var_2))));
    var_11 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_0)))) ? (var_8) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_6)))))), (((((/* implicit */_Bool) ((signed char) var_0))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_8)) : (var_9))) : (((/* implicit */unsigned long long int) var_4))))));
    var_12 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32756)) ? (var_4) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (signed char)0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (-14) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) var_7)))))))));
    var_13 = ((/* implicit */unsigned short) ((int) (unsigned char)220));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (unsigned char)255))));
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1] [i_1] [i_2]))))), (((((/* implicit */unsigned long long int) min((2147483623), (var_4)))) ^ (((var_3) * (var_9)))))));
                    var_16 ^= max((((arr_2 [i_2] [i_2]) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) var_2)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            {
                                var_17 |= ((/* implicit */signed char) (+((~(((((/* implicit */int) var_1)) | (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4 + 2])))))));
                                arr_13 [3U] [i_1] [i_2] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 2147483633)), (var_8)))) ? (min((var_0), (var_0))) : (((/* implicit */unsigned long long int) 1290565522))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)227)) >= (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])))))) : (((long long int) ((long long int) (unsigned char)25)))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((arr_12 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                                var_19 = ((/* implicit */unsigned char) arr_6 [i_0] [i_2] [i_4]);
                                var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_4] [(_Bool)1] [i_0])) : (((/* implicit */int) (unsigned char)24))))))))) <= (arr_10 [i_0] [i_1] [i_2] [i_3])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
