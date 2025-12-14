/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127168
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    var_19 = ((/* implicit */int) max((var_19), (max((((((((/* implicit */int) var_15)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) 67108860ULL)) && (((/* implicit */_Bool) var_15))))))), (((((/* implicit */_Bool) (unsigned short)33331)) ? (((/* implicit */int) (unsigned short)27)) : (((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (67108868ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_12 [i_4] [i_1] [(unsigned char)9] [i_3] [(unsigned char)9] [i_3])), ((~(((((/* implicit */_Bool) var_10)) ? (67108860ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))))))))))));
                                var_22 = ((/* implicit */short) min((max(((unsigned short)448), (max(((unsigned short)26365), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] [9ULL])))))), (((/* implicit */unsigned short) (!(var_7))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) ((67108887ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20829)))))))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)111)), (67108868ULL))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) (short)32767)) ? (3206384891504442719ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)29194), ((unsigned short)46883))))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */short) max((((/* implicit */unsigned int) ((_Bool) var_10))), (3025638203U)));
    var_26 = ((/* implicit */unsigned int) var_1);
}
