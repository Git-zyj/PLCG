/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159230
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
    var_13 += ((/* implicit */signed char) ((unsigned long long int) -7482958117082921804LL));
    var_14 = ((/* implicit */unsigned short) 3747334796025259706LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_2 [(unsigned char)17] [i_0 + 1] = ((/* implicit */unsigned short) 18446744073709551615ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) (unsigned short)4232)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_6 [(signed char)5] [i_1] [i_1])) ? (((/* implicit */long long int) var_12)) : (-7482958117082921804LL))));
                    arr_8 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (7482958117082921804LL)));
                    var_16 = ((/* implicit */long long int) (signed char)22);
                    arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (signed char i_7 = 1; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_22 [(short)1] [(_Bool)1] [i_6] [i_6] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_7 - 1] [i_6] [i_3 + 2] [i_6] [i_3 + 1]))) : (-7482958117082921806LL)));
                                var_17 ^= ((/* implicit */short) ((((long long int) 524287ULL)) | (((/* implicit */long long int) 1803538928))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_5])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) > (-7482958117082921804LL))))))))));
                }
            } 
        } 
        arr_23 [i_3] [i_3] = ((/* implicit */long long int) arr_1 [i_3]);
        var_19 = ((/* implicit */_Bool) arr_14 [i_3 + 1]);
    }
}
