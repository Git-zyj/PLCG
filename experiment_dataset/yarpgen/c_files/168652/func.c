/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168652
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
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) <= ((((~(((/* implicit */int) var_7)))) | (((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (_Bool)1)))))))));
    var_21 = var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_4 [i_1] [i_0 - 2] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            var_22 += ((/* implicit */_Bool) (((_Bool)1) ? (10960515646485564869ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            arr_8 [i_2] [6ULL] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_23 = ((/* implicit */_Bool) (~(arr_0 [i_0 - 2])));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_24 *= ((/* implicit */unsigned char) ((int) arr_3 [i_2 + 1] [i_2 - 1]));
                            var_25 = ((/* implicit */int) arr_6 [i_2]);
                            var_26 = ((/* implicit */unsigned char) ((unsigned short) arr_3 [i_0 - 2] [i_2]));
                            var_27 = ((/* implicit */unsigned short) (_Bool)1);
                            var_28 = ((/* implicit */unsigned char) (unsigned short)65532);
                        }
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_29 = (unsigned short)17407;
                            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)20350))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)15)))) || (((/* implicit */_Bool) var_4))));
                            var_32 = ((/* implicit */unsigned long long int) (unsigned char)246);
                        }
                        for (unsigned char i_8 = 2; i_8 < 19; i_8 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_22 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 + 2]))));
                            arr_24 [i_0 + 1] [(_Bool)1] [i_3] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14391902071028386976ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_22 [i_2] [i_2 + 2] [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17179836416ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 10168465919141365934ULL)))))));
                            var_34 = ((/* implicit */unsigned char) ((int) arr_23 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_2]));
                            var_35 *= ((/* implicit */int) (!(((_Bool) (unsigned char)233))));
                        }
                        var_36 = (~(((((/* implicit */_Bool) arr_22 [i_2] [i_3] [i_2 + 3] [i_2 + 2] [i_2])) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                    }
                } 
            } 
            arr_25 [i_0 - 2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 1]))));
        }
        var_37 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_21 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 + 1] [i_0])))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194)))))) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1])))))));
    }
    var_39 = ((/* implicit */unsigned short) (!(var_1)));
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            for (unsigned char i_11 = 2; i_11 < 7; i_11 += 1) 
            {
                for (unsigned char i_12 = 4; i_12 < 10; i_12 += 4) 
                {
                    {
                        arr_37 [i_10] &= ((((((/* implicit */_Bool) 3966416526495310646ULL)) ? (2844057451191131529ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65532)))));
                        arr_38 [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -20)) ? (8278278154568185681ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3003921281042224863ULL))))))));
                        var_40 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_10] [i_11 + 1] [i_11 + 1] [i_11 - 2] [i_11 - 1])) ? (arr_6 [i_12]) : (arr_6 [i_12]))) | (((((/* implicit */_Bool) var_0)) ? (arr_6 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_11 + 1] [i_11 + 1])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                for (unsigned short i_15 = 3; i_15 < 10; i_15 += 1) 
                {
                    {
                        var_41 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_9] [i_13] [i_14] [i_14])) ? (min((6824964445591040599ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)50))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(var_2)))))))));
                        arr_45 [i_15] [i_13] [i_14] [2] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned char) var_2)), (var_7))), (max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)240)))));
                        var_42 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((unsigned long long int) var_0))))) && (((/* implicit */_Bool) (+(min((3694139690928536317ULL), (((/* implicit */unsigned long long int) arr_32 [i_13] [(unsigned short)0] [i_15])))))))));
                    }
                } 
            } 
        } 
        var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_28 [i_9]))))));
        var_44 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((unsigned short) var_0)))) ? ((~(((/* implicit */int) ((unsigned short) var_17))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)24338)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min(((unsigned short)24327), (var_5))))))));
    }
}
