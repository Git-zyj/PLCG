/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149818
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned char) min((min((arr_2 [i_0 - 2]), (arr_2 [i_0 - 2]))), (((((/* implicit */_Bool) arr_2 [i_0 - 4])) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2047)))))));
            var_14 -= (!(((((/* implicit */int) arr_4 [i_0 - 4] [i_0 - 4] [i_0 - 4])) == (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) && (((/* implicit */_Bool) 3603667710U))))))));
        }
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 15; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                var_15 = ((/* implicit */unsigned long long int) ((4294967286U) <= (3716667966U)));
                var_16 = ((/* implicit */signed char) (-(arr_0 [i_2 + 1] [i_3 - 1])));
                var_17 = ((/* implicit */_Bool) (unsigned char)114);
                arr_10 [i_0] [i_3] [i_0 + 1] = ((/* implicit */unsigned char) ((unsigned int) arr_2 [i_0 + 2]));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_3 [i_0 - 4] [i_2 + 1] [i_5 - 1]))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (unsigned short)8))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [(unsigned char)3] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (unsigned char)22))));
                            arr_19 [i_0] [i_0] [i_4] [i_0] [i_6 + 1] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_0 + 3] [i_2 - 1] [i_4] [i_5 - 1] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_2 + 2] [(unsigned char)2] [i_5 + 1] [i_5] [i_6 + 1])) : (((/* implicit */int) arr_18 [i_0 + 1] [i_2 - 1] [i_2 - 1] [i_5 + 1] [i_5] [i_6 + 1]))));
                            var_20 = ((/* implicit */unsigned char) ((long long int) (unsigned short)58762));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (unsigned short)8230);
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_4])) + (2147483647))) << (((((/* implicit */int) var_1)) - (42752)))))))))));
            }
            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) arr_14 [i_0 - 4] [i_2 + 2]))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 3; i_9 < 15; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-((+(((/* implicit */int) arr_9 [i_0 + 3] [i_7] [i_8] [i_7])))))))));
                            var_25 = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_22 [i_0] [i_2 - 1] [i_8] [i_9 - 1])) : (((/* implicit */int) arr_17 [i_0]))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 - 2] [i_8] [i_9])) + (((/* implicit */int) arr_4 [(signed char)15] [i_7] [i_8]))));
                        }
                        var_27 = ((/* implicit */signed char) ((unsigned short) arr_25 [i_0 - 2] [i_0] [i_0 - 4] [i_0] [i_0]));
                    }
                } 
            } 
            var_28 ^= ((/* implicit */unsigned char) arr_16 [i_2 - 1] [i_2 - 1] [i_2 + 1] [(_Bool)1] [i_2 + 2] [i_2 + 2]);
        }
        /* vectorizable */
        for (signed char i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
        {
            arr_31 [i_10] [i_10 + 2] [i_10] = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned char)125))))));
            var_29 = ((((((/* implicit */_Bool) arr_16 [i_10] [i_10] [(_Bool)1] [i_10] [i_10] [i_10])) && (((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) var_3)));
            var_30 = ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_10 + 2])) ? (12540619135214301175ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))));
        }
        var_31 = ((/* implicit */signed char) arr_18 [(unsigned short)15] [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_32 = ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) (unsigned char)235)))));
    }
    var_33 = ((/* implicit */_Bool) (unsigned char)175);
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            {
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_28 [(unsigned char)12] [(unsigned char)12])) : ((~((~(((/* implicit */int) (signed char)-67))))))));
                var_35 = (-(arr_3 [i_11] [i_11] [i_12]));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned short) var_10);
    var_37 = ((/* implicit */signed char) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) min(((unsigned short)2), (var_2)))) : ((+(((/* implicit */int) (_Bool)1))))))));
}
