/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185612
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
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)217)) >= (((/* implicit */int) (unsigned char)40)))))) ^ (arr_1 [i_0 + 2])))) ? (max((arr_1 [i_0 + 2]), (((/* implicit */unsigned long long int) ((long long int) (unsigned char)247))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (unsigned short)10965)) : (((/* implicit */int) (unsigned char)40)))))))));
        arr_2 [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((var_9) - (7927550015351594730ULL)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_0 [i_0]))))) * (((long long int) min(((unsigned short)5981), (((/* implicit */unsigned short) (short)-22872))))));
    }
    for (unsigned char i_1 = 3; i_1 < 8; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) max(((+(arr_4 [i_1]))), (max((arr_4 [i_1]), (((/* implicit */int) arr_3 [i_1] [i_1]))))))) * (min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) / (((/* implicit */int) arr_5 [i_1]))))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) : (var_8)))))));
        var_21 = ((/* implicit */_Bool) ((int) min((arr_0 [i_1 - 1]), (arr_0 [i_1 + 1]))));
    }
    /* LoopSeq 4 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_1))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_2])) >= (((/* implicit */int) arr_5 [i_2])))) ? (((/* implicit */int) min((arr_5 [i_2]), (((/* implicit */unsigned short) (short)-27572))))) : (((/* implicit */int) arr_5 [i_2]))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) ((arr_4 [i_2]) - (arr_4 [i_2]))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((+(var_2))) >= (((/* implicit */int) arr_9 [i_3]))))) < (((/* implicit */int) ((unsigned short) ((int) 373353892991100483LL))))));
        arr_12 [i_3] = arr_10 [i_3];
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        var_24 &= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) (short)-31803))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4]))) : (((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
        arr_16 [i_4] [i_4] = ((/* implicit */short) var_0);
        arr_17 [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) 144115188075855872LL))) + (((/* implicit */int) (unsigned short)49152))));
        arr_18 [i_4] = (~(14339288924555525943ULL));
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (short)18027))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? ((~(((((/* implicit */int) (signed char)-29)) | (((/* implicit */int) (unsigned short)65525)))))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (var_18))))));
                        var_27 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((int) ((unsigned short) (signed char)-29)))), (((((((/* implicit */_Bool) (unsigned char)35)) ? (-3734514999639135335LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))))) % (min((144115188075855872LL), (((/* implicit */long long int) arr_27 [i_5] [i_5] [i_5] [i_5]))))))));
                        var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) arr_15 [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_6])) == (((/* implicit */int) arr_19 [i_5])))))) : (max((((/* implicit */unsigned long long int) var_12)), (13629289195994702216ULL))))) ^ ((-(((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                    }
                    var_29 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) -742229315)))));
                }
            } 
        } 
        arr_28 [i_5] [i_5] = ((/* implicit */int) var_9);
    }
    var_30 = ((/* implicit */_Bool) min((((((/* implicit */int) var_13)) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)14662))) <= (var_1)))))), (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_9 = 1; i_9 < 22; i_9 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
        {
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((1) ^ (((/* implicit */int) (unsigned short)27679)))) ^ ((+(((/* implicit */int) var_16))))))) ? (((/* implicit */unsigned long long int) arr_29 [i_9] [i_9])) : (((((/* implicit */_Bool) (unsigned short)54570)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10)))));
            arr_35 [i_9] = ((/* implicit */int) arr_31 [i_9 - 1]);
        }
        /* LoopNest 3 */
        for (short i_11 = 3; i_11 < 22; i_11 += 2) 
        {
            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    {
                        var_32 ^= ((/* implicit */unsigned short) (signed char)63);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_41 [i_9] [i_12] [i_11] [i_11] [i_9])))))) - (((((var_8) + (9223372036854775807LL))) << (((arr_31 [i_13]) - (1494038173277077478ULL))))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_16)))))));
                        var_34 -= ((/* implicit */short) arr_37 [i_9 - 1] [i_9 - 1] [i_12]);
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_32 [i_9] [i_9 + 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_9 - 1] [i_9])))))) ? ((~(var_8))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)31)), ((short)224)))))));
                    }
                } 
            } 
        } 
    }
    var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10))));
}
