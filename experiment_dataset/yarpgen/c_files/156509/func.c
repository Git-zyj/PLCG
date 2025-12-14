/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156509
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
    var_18 = ((/* implicit */unsigned char) ((((max((-667289310645697790LL), ((~(188224400935615733LL))))) + (9223372036854775807LL))) << ((((-((~(((/* implicit */int) var_13)))))) - (65)))));
    var_19 = ((/* implicit */_Bool) 2323190823U);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) 2147483647);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))) % (-188224400935615749LL)));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-2147483647 - 1))), ((-(2604363048U)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    var_23 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_16)))));
                    arr_12 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 188224400935615748LL))));
                    arr_13 [i_3] [i_2] = ((/* implicit */unsigned short) ((-2147483647) & ((+(((/* implicit */int) var_8))))));
                    var_24 = ((/* implicit */_Bool) arr_4 [i_3]);
                }
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    arr_17 [i_0] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((long long int) arr_14 [i_4] [(unsigned char)16]));
                    arr_18 [i_0] [(unsigned short)18] [i_4] = ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (667289310645697798LL))));
                    var_25 = ((/* implicit */long long int) (!(arr_9 [i_0] [i_1] [i_2 - 1] [i_4] [i_1] [i_1 - 3])));
                }
                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */unsigned int) (-2147483647 - 1))) % (2604363035U))))));
                arr_19 [i_0] [i_1] &= ((((((/* implicit */long long int) ((/* implicit */int) var_11))) % (-188224400935615749LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 31)) >= (var_7))))));
                arr_20 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5663)) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]))) | (arr_6 [i_0] [i_0] [i_1] [i_2]))) - (1257372894U)))));
                var_27 = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) var_1)))));
            }
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_1]))));
                var_29 += ((/* implicit */_Bool) 2826844599954298231LL);
            }
        }
        arr_23 [(_Bool)1] = ((/* implicit */unsigned char) (-2147483647 - 1));
        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_11))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned char) arr_5 [i_6] [i_6] [i_6]);
        var_32 = ((/* implicit */int) ((1185663205U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 4 */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            arr_30 [i_6] [i_6] = ((/* implicit */unsigned int) (+((+((-2147483647 - 1))))));
            arr_31 [i_6] [i_6] [i_7] = ((/* implicit */int) (_Bool)1);
            arr_32 [i_6] [(unsigned short)9] [i_7] = arr_1 [i_6];
        }
        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [(unsigned char)6] [(unsigned short)13] [i_9])))))));
                var_34 += ((/* implicit */unsigned char) (+(var_7)));
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(4647915017987841116LL)))) ? (-188224400935615749LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2752)))));
                var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_6]))));
            }
            for (long long int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
            {
                arr_41 [i_6] [i_6] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (433471592U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)249))))));
                arr_42 [i_6] [i_8] = ((/* implicit */unsigned int) (unsigned char)255);
                var_37 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6]))) + ((-(-188224400935615749LL)))));
                var_38 = ((/* implicit */_Bool) 4294967287U);
            }
            for (long long int i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
            {
                arr_46 [i_6] [i_8] [i_8] [(unsigned char)2] = ((/* implicit */int) (-(((((/* implicit */_Bool) -5)) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_8] [i_11])))))));
                arr_47 [i_6] [i_8] [(unsigned char)6] = ((/* implicit */long long int) (unsigned char)1);
                arr_48 [i_6] [i_8] [i_11] [i_11] = ((/* implicit */_Bool) 35184372088832LL);
            }
            arr_49 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49774)) ? ((+(2581156192U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15748)))));
        }
        for (unsigned short i_12 = 2; i_12 < 17; i_12 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */int) min((var_39), (((int) ((long long int) arr_28 [i_12] [i_12] [i_6])))));
            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2394628U) * (2604363048U)))) ? ((+(((/* implicit */int) var_15)))) : ((+(((/* implicit */int) (unsigned short)5675))))));
        }
        for (unsigned short i_13 = 2; i_13 < 17; i_13 += 1) /* same iter space */
        {
            arr_55 [i_6] = ((/* implicit */long long int) (unsigned short)49784);
            var_41 = ((/* implicit */unsigned char) arr_9 [i_6] [i_6] [2LL] [i_6] [i_13] [i_13]);
            arr_56 [i_6] = ((/* implicit */_Bool) arr_2 [i_6] [i_13]);
        }
    }
    var_42 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)221)), (var_6)));
}
