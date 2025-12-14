/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145203
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((int) min((4294967293U), (((/* implicit */unsigned int) var_5)))));
        arr_4 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) arr_2 [i_0])))));
        var_20 = ((/* implicit */signed char) (-((-(1140685927U)))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) var_19);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) (~(1085350593U)));
                            var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_8))))), (max(((-(1085350596U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_3] [i_4])))))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(var_0)))) * (max((-942509163006302408LL), (((/* implicit */long long int) max((((/* implicit */int) (signed char)(-127 - 1))), (arr_17 [i_0] [i_1] [i_2] [(short)5] [i_4]))))))));
                        }
                        var_24 *= ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)64)) + (((/* implicit */int) (short)-21317)))), (((/* implicit */int) (unsigned short)14801))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */short) (((-(((/* implicit */int) (signed char)79)))) | ((-(arr_17 [i_0] [i_1] [i_2] [i_2] [i_5])))));
                        var_26 += ((/* implicit */signed char) var_0);
                        var_27 *= arr_6 [i_0];
                    }
                    var_28 += ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) (signed char)-100)) + (128)))))) ^ ((~(3209616689U))))) >> (((((unsigned long long int) arr_0 [i_2 + 1])) - (2541323450ULL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 2]))) >= (((3209616680U) - (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
                        arr_23 [i_0] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)79))) ? (((((/* implicit */int) (signed char)35)) / (((/* implicit */int) (unsigned char)45)))) : (((/* implicit */int) ((_Bool) var_6)))));
                        var_30 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0])) >= (((/* implicit */int) arr_10 [i_2 + 1]))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 9; i_7 += 4) 
                    {
                        var_31 &= ((/* implicit */long long int) (unsigned short)64162);
                        var_32 = ((/* implicit */unsigned char) (-(arr_8 [i_0] [i_1] [i_2] [5])));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)217)) << (((((/* implicit */int) var_3)) - (101))))), (((/* implicit */int) (short)-1))))) ? (min((((/* implicit */long long int) max((var_13), (((/* implicit */unsigned short) arr_9 [i_0] [i_7]))))), (min((((/* implicit */long long int) 3209616714U)), (0LL))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_1])))))))));
                        var_34 = ((/* implicit */short) ((signed char) ((unsigned char) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) var_1))))));
                    }
                    arr_26 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4024)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) : (((unsigned long long int) arr_11 [i_0] [i_1] [i_0] [(signed char)4] [i_1]))));
                    arr_27 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned char)9)))), (((/* implicit */int) arr_10 [i_2 - 1]))))) % (4611650834055299072ULL)));
                }
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 10; i_8 += 2) 
    {
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~((-(((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8] [i_8]))) : (var_18))))))))));
        var_36 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)76)) & (((/* implicit */int) arr_24 [i_8] [i_8] [i_8] [i_8]))))) | (((unsigned int) arr_28 [2U]))))));
        var_37 -= ((/* implicit */unsigned long long int) (short)-7974);
        var_38 *= ((/* implicit */short) (_Bool)1);
    }
    var_39 = ((/* implicit */short) var_12);
    var_40 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(21U)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (var_18)))));
}
