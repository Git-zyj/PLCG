/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144362
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            var_16 = ((/* implicit */long long int) ((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 3]))) & (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 3])))));
            var_17 *= (unsigned char)250;
        }
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) % (max((max((2741434325U), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)46483)))))))));
        var_19 = ((/* implicit */unsigned char) max(((-(var_8))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) : (2741434326U)))))));
        var_20 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_3 [4LL] [8ULL]), (arr_3 [(unsigned short)4] [i_0])))), (max((((/* implicit */unsigned long long int) (unsigned char)200)), (15986174329748010905ULL)))));
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 8; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)7))))))), (max((8427241113278382004LL), (0LL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_22 &= min((min(((-(var_0))), (((/* implicit */long long int) arr_6 [i_0] [i_4] [i_3] [i_4])))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_10 [i_4] [i_4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_3] [i_0] [i_0] [i_0]))))) : ((+(var_8)))))));
                        arr_12 [i_0] = ((/* implicit */unsigned char) max((-6375058967275062204LL), ((-(var_12)))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */long long int) var_1);
                    }
                    var_23 += max((((unsigned short) 9223372036854775807LL)), (((/* implicit */unsigned short) max((((/* implicit */short) (signed char)42)), (arr_3 [2] [i_3 + 2])))));
                }
            } 
        } 
    }
    for (long long int i_5 = 2; i_5 < 17; i_5 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            var_24 = var_12;
            var_25 |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1629931987U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))))))))) - ((~(((/* implicit */int) var_2))))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_17 [i_6] [i_6] [i_5])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9)))) ? (((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_6])) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) var_4)))) : ((-(((/* implicit */int) arr_16 [i_5]))))))) : (var_15)));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_27 -= ((/* implicit */_Bool) arr_21 [i_5 - 2]);
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 4) 
            {
                arr_24 [i_5] [i_7] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_21 [(unsigned short)3])))))))));
            }
            for (short i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                var_29 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_15 [i_5])))) ? (((/* implicit */int) arr_23 [i_5] [i_5])) : (((/* implicit */int) ((unsigned char) arr_23 [i_5] [i_5])))));
                arr_28 [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_17 [i_5] [i_5] [i_5])))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_30 *= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-28)) + (2147483647))) << (((((/* implicit */int) arr_29 [i_5 + 1] [i_10] [i_10] [i_7])) - (124)))));
                var_31 = ((/* implicit */signed char) ((unsigned char) arr_31 [i_5 + 2]));
            }
            /* LoopNest 3 */
            for (int i_11 = 4; i_11 < 18; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (long long int i_13 = 2; i_13 < 16; i_13 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5] [i_5 - 1] [i_13]))) > (1043868781U))))));
                            var_33 ^= ((/* implicit */long long int) (~(arr_30 [i_5 - 1])));
                            var_34 = ((/* implicit */unsigned char) ((unsigned int) var_9));
                        }
                    } 
                } 
            } 
            arr_41 [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) (-(arr_17 [i_5 - 2] [i_5 - 2] [i_5 + 1])));
        }
        for (short i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            var_35 = ((/* implicit */unsigned char) arr_27 [i_5] [6]);
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_19 [6] [i_14]))));
        }
        /* LoopSeq 2 */
        for (int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
        {
            arr_47 [10ULL] [(unsigned char)7] [i_15] = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) ((((/* implicit */int) arr_33 [i_5] [i_5])) << (((((/* implicit */int) arr_46 [i_5] [i_5])) - (56270)))))));
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)3)), ((+(((/* implicit */int) arr_44 [i_15] [i_5] [i_5]))))))) ? ((-(((/* implicit */int) ((((/* implicit */int) (short)16338)) > (((/* implicit */int) var_2))))))) : (((/* implicit */int) var_13))));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_43 [i_5 + 2] [i_5]), (((/* implicit */short) arr_22 [i_5 + 2] [i_15] [i_5 + 2])))))) % (max((arr_42 [i_5 + 2] [i_15]), (((/* implicit */unsigned int) arr_22 [i_5 + 1] [i_15] [i_5 - 1]))))));
        }
        for (int i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
        {
            arr_50 [i_16] [i_16] = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) arr_38 [i_5] [i_16] [i_16] [i_16] [i_16] [i_5]))), (((long long int) min((((/* implicit */int) arr_23 [i_5] [i_5])), (var_10))))));
            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 9223372036854775781LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_5]))) : (arr_31 [i_16]))) >> (((arr_37 [i_5]) - (2049749934U))))))))));
        }
    }
    var_40 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) : ((+(var_10))))), (var_8)));
}
