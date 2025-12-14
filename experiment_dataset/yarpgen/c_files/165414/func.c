/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165414
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1] [24ULL] [24ULL]);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */int) arr_1 [i_3] [i_4]);
                                var_18 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_3] [i_4] [i_2])) * ((-(((/* implicit */int) arr_9 [i_4 + 1] [i_3] [i_2] [i_0] [i_0])))))) ^ (((/* implicit */int) ((((long long int) (unsigned char)122)) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)134))))))));
                                var_19 = 6187319197079941585LL;
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)0)), (-1)));
                                var_21 += ((/* implicit */signed char) arr_6 [i_0] [(signed char)14] [0LL]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 22; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */int) arr_18 [2U] [i_9 + 3] [i_0] [i_1] [i_0])) >> (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [17] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_28 [i_0] [i_0] [(_Bool)1] [i_0] [i_10]))))))) >= (((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)133))))))))))));
                                arr_31 [i_10] [i_10] [i_8] [i_10] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1))))) ? (3620720030690295408LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5161779034991268772LL))))) : (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) -3707117086799231775LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_10 [0] [i_9] [i_9 - 2] [i_9 + 2] [i_9] [i_9 + 3] [i_9]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        arr_34 [i_0] [i_1] [i_8] [i_8] [i_11] = (~((~(((((/* implicit */int) var_4)) + (((/* implicit */int) (signed char)104)))))));
                        var_23 *= (_Bool)1;
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_37 [i_8] [9] [i_8] [(unsigned short)12] = ((/* implicit */unsigned int) (~(((((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])) & (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) max((-8718663475854916555LL), (-3458937810589662928LL))))))));
                        var_24 = (~(((((/* implicit */int) (signed char)63)) * (((/* implicit */int) (unsigned short)17363)))));
                        var_25 = ((/* implicit */_Bool) var_10);
                        var_26 = ((/* implicit */long long int) arr_26 [i_0] [i_1] [i_8] [i_12 - 1]);
                    }
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        var_27 |= ((/* implicit */_Bool) ((long long int) ((var_15) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)0] [i_13]))))));
                        arr_41 [i_0] [i_8] [i_8] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_13] [i_1] [i_0])) ? (2572945916U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 2; i_14 < 22; i_14 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)0))));
                        var_29 = arr_22 [i_0] [i_8] [i_14 - 2];
                        var_30 = ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)34105)) - (((/* implicit */int) (unsigned short)15285))))));
                    }
                    arr_44 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) var_5);
                }
            }
        } 
    } 
    var_31 = var_11;
    var_32 = min((((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_16)))), ((!(((/* implicit */_Bool) var_5))))))), (var_15));
}
