/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114555
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
    var_14 *= ((/* implicit */int) ((var_2) == (((/* implicit */long long int) (~(min((((/* implicit */int) var_7)), (var_1))))))));
    var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((31525197391593472ULL) % (((/* implicit */unsigned long long int) 2035173358112494831LL)))) * (((/* implicit */unsigned long long int) ((-1844018014) & (1844018013))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) == (18415218876317958144ULL)))) > (((/* implicit */int) var_7))))) : (var_1)));
    var_16 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */signed char) var_0);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((var_8) ^ (arr_0 [i_0]))) : (((((/* implicit */_Bool) 1844018027)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (var_8)))))));
                    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((int) 1778611353)), (((/* implicit */int) ((unsigned short) 1844018013)))))) ^ (((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (31525197391593485ULL) : (((/* implicit */unsigned long long int) ((unsigned int) 31525197391593472ULL)))))));
                    var_19 = var_3;
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (31525197391593492ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [6U] [i_3])))));
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 7; i_4 += 3) 
        {
            arr_13 [i_3] = ((/* implicit */signed char) -1844018014);
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                arr_17 [i_3] = ((/* implicit */unsigned char) var_0);
                var_21 ^= ((/* implicit */long long int) arr_8 [i_3]);
            }
            for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                arr_21 [i_6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) arr_15 [(unsigned char)8] [i_6]);
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 2035173358112494831LL)) ? (((/* implicit */long long int) 1844017991)) : (arr_2 [i_3]))))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_19 [i_4 + 3] [i_4] [i_3]) : ((~(((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_7]))))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (((-(1844017991))) > (((/* implicit */int) ((unsigned short) (signed char)0))))))));
                }
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_25 -= ((/* implicit */signed char) ((var_1) * (((/* implicit */int) (!(((/* implicit */_Bool) 2035173358112494848LL)))))));
            var_26 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (var_6)))));
        }
        /* LoopNest 3 */
        for (unsigned char i_9 = 3; i_9 < 9; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (unsigned char i_11 = 3; i_11 < 10; i_11 += 3) 
                {
                    {
                        var_27 = ((/* implicit */short) (-(7781531059207283656LL)));
                        var_28 = ((/* implicit */long long int) max((var_28), (((((arr_30 [(unsigned char)0] [2U] [i_10]) ^ (((/* implicit */long long int) 1844017980)))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (27)))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */_Bool) max((var_29), (((_Bool) (~(9223372036854775807LL))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 21; i_13 += 4) 
        {
            for (unsigned short i_14 = 4; i_14 < 23; i_14 += 2) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((int) arr_37 [i_14 - 2])))));
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((unsigned short) arr_40 [i_13 - 1] [i_13 - 1])))));
                }
            } 
        } 
        arr_44 [i_12] = ((/* implicit */unsigned short) (-(arr_39 [i_12] [i_12])));
    }
}
