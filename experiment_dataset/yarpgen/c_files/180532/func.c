/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180532
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
    var_15 ^= min((min((((long long int) (unsigned char)162)), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) ((unsigned short) var_9))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 += max((((((-6338153684525624724LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63556))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (short)32750)))))) : (((6476269155068375131ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)93)) != ((((_Bool)1) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (short)32753))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-116))));
        arr_4 [(unsigned short)4] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((3122848934689935094LL), (((/* implicit */long long int) (short)-19586)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)94))));
        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1] [i_1])) == (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_6 [i_1]))))));
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21862)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))) ? ((((_Bool)1) ? (3940310065931286586ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24834))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        arr_9 [i_1] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [(signed char)7] [(unsigned char)5])) : (((/* implicit */int) (unsigned char)253)))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 18; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                arr_19 [i_3] [i_2 - 1] [i_2 - 1] [(unsigned short)14] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)255))));
                                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)14] [i_2])) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) arr_17 [i_1] [11ULL] [11ULL] [11ULL] [i_5])))))));
                                arr_20 [i_2] [6ULL] [i_3] [i_3] [i_2 + 2] [i_1] [i_2] = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87)))))) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) ((signed char) var_3)))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_1))))) : (((/* implicit */int) min((var_5), (((_Bool) var_10)))))));
}
