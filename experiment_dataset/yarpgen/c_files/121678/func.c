/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121678
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (-(arr_2 [i_0 + 1])));
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_0 [i_0 - 1])))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) arr_0 [i_0 + 1])))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)63))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_5 [i_1]))));
        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_1]) + (((/* implicit */int) (unsigned short)31))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (arr_4 [(unsigned char)20])));
        arr_7 [i_1] [i_1] = ((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) arr_0 [i_1])));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] &= ((/* implicit */long long int) ((((_Bool) var_7)) ? (((((/* implicit */int) (unsigned short)65496)) << (((((/* implicit */int) (unsigned short)65505)) - (65498))))) : (((((/* implicit */int) arr_5 [i_2])) / (((/* implicit */int) var_15))))));
        var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_4 [2ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned char) var_15))) : ((-(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_21 *= ((/* implicit */signed char) (_Bool)0);
                        arr_22 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) (!(var_2)));
                        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_3] [i_3]))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */short) ((((/* implicit */int) max((max(((unsigned short)10256), ((unsigned short)65505))), (min((var_14), (((/* implicit */unsigned short) var_16))))))) * (((/* implicit */int) ((((/* implicit */int) ((unsigned char) 4539628424389459968LL))) < (((/* implicit */int) ((unsigned short) 699823504U))))))));
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_6))))) & (((/* implicit */int) var_6)))), (((/* implicit */int) var_2)))))));
}
