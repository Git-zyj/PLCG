/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14970
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_11 = ((/* implicit */short) ((((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((arr_7 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23848)))))));
                        var_12 = ((/* implicit */unsigned long long int) ((443351855) & (((/* implicit */int) ((signed char) 1729382256910270464LL)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 3) /* same iter space */
                        {
                            var_13 |= (unsigned char)0;
                            var_14 |= ((/* implicit */unsigned short) ((((/* implicit */int) (((~(((/* implicit */int) var_3)))) == (((/* implicit */int) arr_1 [i_4] [(unsigned char)8]))))) & (((/* implicit */int) arr_1 [i_0] [i_1]))));
                            var_15 *= ((/* implicit */short) (unsigned short)15133);
                        }
                        for (unsigned short i_5 = 2; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            var_16 -= ((/* implicit */unsigned short) ((signed char) (signed char)121));
                            var_17 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1] [i_1]))) ? (((/* implicit */int) ((unsigned short) (unsigned char)248))) : (((/* implicit */int) arr_1 [i_2] [21LL])))));
                        }
                        var_18 = ((/* implicit */_Bool) (unsigned char)7);
                    }
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((-1354500154) != (var_1))))));
                        var_20 = (+(var_0));
                        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))), (arr_9 [4LL] [4LL] [i_2] [4LL])))) ? (2147483647) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) -1888104332)) : (var_2)))))));
                        var_22 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */long long int) arr_6 [i_2] [i_1])), (arr_16 [i_6]))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (((-(var_5))) & (((/* implicit */unsigned long long int) ((4294967295U) >> (((/* implicit */int) var_8))))))))));
                        var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) | (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (arr_4 [i_2])))));
                    }
                    var_25 *= ((/* implicit */_Bool) (+(((((/* implicit */int) ((unsigned short) arr_4 [i_0]))) + (((((/* implicit */int) var_10)) >> (((arr_10 [i_0] [i_0] [i_0] [i_0]) - (9662498040962405049ULL)))))))));
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (unsigned char)7)))))) ? (((long long int) max((((/* implicit */unsigned long long int) -2141006881)), (11525877956737914215ULL)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))))))));
                }
                arr_22 [i_0] [i_0] = ((/* implicit */int) (signed char)16);
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_3)) - (33965))))), (((/* implicit */int) max((((/* implicit */short) (signed char)(-127 - 1))), (var_9))))))), (7815144778844449438ULL))))));
                var_28 = ((/* implicit */int) 11762792824601335191ULL);
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) ((var_0) ^ (min((((/* implicit */int) max((var_3), ((unsigned short)16293)))), (max((var_6), (((/* implicit */int) var_7))))))));
    var_30 = ((/* implicit */long long int) max((var_6), (((/* implicit */int) var_9))));
}
