/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115795
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)201))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
                        {
                            var_21 = arr_6 [i_2];
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_1 + 1] [i_2] [i_3]) ? (((/* implicit */long long int) var_9)) : (-9144359832009096440LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_17))));
                            var_23 = ((/* implicit */short) var_4);
                        }
                        for (short i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                        {
                            arr_17 [(short)18] [i_0] [i_2] [i_1] [(unsigned char)14] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_1 - 1])) & (((/* implicit */int) var_4))));
                            var_24 = (-(((((/* implicit */_Bool) -967757047)) ? (3391874037U) : (580869212U))));
                        }
                        var_25 = ((/* implicit */unsigned short) ((unsigned char) var_2));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */signed char) ((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)8446))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_27 = ((/* implicit */long long int) ((var_8) + (((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))));
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [6LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) : (var_15)));
        var_29 ^= ((/* implicit */long long int) arr_20 [i_6]);
        var_30 = ((/* implicit */long long int) ((((arr_15 [10ULL] [(unsigned char)8] [(unsigned short)12] [i_6] [i_6]) / (var_16))) * (((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))));
    }
    var_31 = ((/* implicit */long long int) ((max((((14807649557043881942ULL) % (((/* implicit */unsigned long long int) 4294967284U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)3)) + (((/* implicit */int) var_2))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)21045), (((/* implicit */unsigned short) var_11)))))) < (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_16)) : (var_19)))))))));
    var_32 = ((/* implicit */signed char) ((short) var_6));
}
