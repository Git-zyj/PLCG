/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151025
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
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned char) arr_1 [i_1 - 2]))), (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 2]))) : (min((((/* implicit */long long int) arr_0 [i_0])), (var_5)))))));
                var_16 = ((/* implicit */signed char) max((((unsigned int) arr_3 [i_0 + 1] [i_1 - 1] [4U])), (((/* implicit */unsigned int) ((unsigned char) (short)4095)))));
            }
        } 
    } 
    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_5)));
    var_18 &= ((/* implicit */signed char) ((unsigned short) (unsigned short)65535));
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_2] [i_2]), (min((((/* implicit */long long int) var_0)), (arr_6 [(_Bool)1] [(signed char)10])))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2]))))) + (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [i_2])) ^ (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((arr_6 [i_2] [4LL]), (((/* implicit */long long int) var_3))))))));
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-36)))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_2)) + (((/* implicit */int) arr_7 [i_2])))) - (((/* implicit */int) arr_7 [(unsigned short)4]))))) : (arr_6 [i_2] [i_2])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_14 [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((long long int) var_14));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (35184372088831LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
            var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_2] [i_3]))));
            arr_15 [3U] = (unsigned short)0;
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) min((((_Bool) arr_11 [i_4] [i_4] [i_4])), (((((/* implicit */int) arr_10 [i_4] [i_4])) < (((/* implicit */int) arr_7 [i_4])))))))) : (((((/* implicit */_Bool) arr_6 [i_4] [(unsigned short)7])) ? (arr_6 [i_4] [i_4]) : (arr_6 [i_4] [i_4]))));
        var_21 = ((/* implicit */long long int) var_4);
        arr_19 [(unsigned short)16] [(unsigned short)16] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)0)))))) - (((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_22 [(unsigned short)2] [(short)10] &= ((/* implicit */int) arr_5 [i_5]);
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_4))));
        var_23 &= arr_21 [(unsigned char)16];
    }
}
