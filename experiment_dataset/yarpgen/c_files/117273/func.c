/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117273
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
    var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((int) -1084932448))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)14277)) : (((/* implicit */int) (_Bool)1)))) : (var_9)))));
    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_20 -= ((/* implicit */signed char) min((max((((/* implicit */unsigned int) arr_0 [i_0] [(unsigned short)4])), (((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [i_0]))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) / (((/* implicit */int) var_2))))), (var_8)))));
        var_21 = ((/* implicit */unsigned int) 2147483622);
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_1 [i_0]))));
        var_23 = ((/* implicit */unsigned short) var_2);
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) /* same iter space */
    {
        var_24 |= ((/* implicit */unsigned short) (+(((arr_0 [i_1] [i_1 + 1]) ? (((/* implicit */unsigned long long int) 1872957331)) : (var_5)))));
        arr_6 [3LL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) /* same iter space */
    {
        var_25 = ((int) ((((2145684198) & (((/* implicit */int) arr_0 [i_2] [(unsigned short)6])))) & (((arr_5 [i_2 + 1]) ^ (arr_9 [i_2])))));
        var_26 += ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_2 [i_2 + 1])), (((var_10) - (arr_4 [i_2]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1] [i_2 - 1])))));
        var_27 = ((/* implicit */int) ((signed char) (short)32767));
    }
    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_28 &= ((/* implicit */unsigned short) ((short) (unsigned short)48659));
            arr_15 [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1]))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (~(arr_1 [i_3 + 1]))))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 3; i_5 < 7; i_5 += 1) 
            {
                var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_5] [i_4])) - (((/* implicit */int) arr_14 [i_3] [i_3 + 1]))));
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(var_1))))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_3] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */int) var_15);
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) var_7))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) 1872957331);
                        arr_26 [i_3] [i_4] [i_5] [i_3] [i_8] [i_6] = ((/* implicit */int) (short)(-32767 - 1));
                        var_34 = ((((/* implicit */int) (unsigned char)122)) >= (((/* implicit */int) arr_17 [i_5 + 2] [i_5 + 2])));
                        var_35 -= ((/* implicit */unsigned long long int) ((short) arr_14 [i_3 - 1] [i_5 + 2]));
                        var_36 = ((_Bool) (unsigned short)65534);
                    }
                    var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) && (((/* implicit */_Bool) var_7))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                {
                    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_4] [i_4])) || (((/* implicit */_Bool) arr_17 [i_3 - 1] [i_3 - 1]))));
                    var_39 = ((/* implicit */_Bool) arr_21 [i_9] [6ULL] [i_9] [i_9] [i_4] [i_9]);
                }
                for (signed char i_10 = 3; i_10 < 8; i_10 += 1) 
                {
                    arr_34 [i_3 + 1] [i_3] [i_10] = ((/* implicit */signed char) ((arr_13 [i_3 - 1]) / (arr_13 [i_3 - 1])));
                    var_40 = ((unsigned long long int) arr_31 [i_3 - 1]);
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (var_4)));
                        var_42 |= ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_0 [i_11] [i_3 + 1])))) & (((/* implicit */int) arr_31 [i_11 - 1]))));
                        var_43 = ((/* implicit */signed char) ((((unsigned long long int) arr_22 [i_10] [i_10])) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-1))))));
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    var_44 = ((2147483647) / (((/* implicit */int) arr_29 [i_3 - 1] [i_3])));
                    /* LoopSeq 2 */
                    for (unsigned short i_13 = 1; i_13 < 8; i_13 += 4) 
                    {
                        var_45 |= ((/* implicit */int) arr_2 [i_3 + 1]);
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_5 + 3])) ? (arr_1 [i_3 + 1]) : (arr_1 [i_3 - 1])));
                        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) 302791756324871849ULL)) || (((/* implicit */_Bool) -1872957348))));
                        var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (arr_7 [i_5 + 3]))))));
                        arr_42 [i_13] [i_13] = ((/* implicit */signed char) (-(var_9)));
                    }
                    for (unsigned char i_14 = 3; i_14 < 9; i_14 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_44 [i_14] [i_14 - 3] [i_14] [i_14 - 3] [i_14 - 3]))));
                        arr_46 [i_12] [i_4] [i_5] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10669))) | (1557651866970135531ULL)));
                        var_50 = ((/* implicit */unsigned int) var_14);
                    }
                    var_51 = ((/* implicit */unsigned char) (unsigned short)16888);
                }
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_15 = 1; i_15 < 7; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_52 -= ((/* implicit */unsigned char) 2089615745);
                    arr_53 [i_15] [i_15 + 3] = ((/* implicit */short) min((((/* implicit */unsigned int) ((arr_45 [i_3] [i_15] [i_15 + 3] [i_16]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_14 [i_15 - 1] [i_16]))))))))), (((unsigned int) var_2))));
                    var_53 = ((/* implicit */long long int) arr_27 [i_3 - 1] [i_3] [i_3 + 1] [i_3]);
                }
            } 
        } 
    }
}
