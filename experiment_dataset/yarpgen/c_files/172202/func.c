/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172202
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [2] [i_1 - 1] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned char) arr_2 [i_2 + 3]));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 3]) : (((/* implicit */int) arr_1 [i_2 - 1])))))));
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_0 [i_1 - 3]))));
                                arr_13 [i_3] = ((/* implicit */int) var_15);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 -= ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_2 [i_0]));
        var_20 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)144))));
        arr_14 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (arr_7 [i_0] [i_0] [9LL]) : (arr_7 [i_0] [i_0] [i_0])));
        var_21 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0]));
    }
    var_22 -= var_9;
    /* LoopNest 3 */
    for (long long int i_5 = 2; i_5 < 8; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    arr_23 [i_7] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))))), (arr_18 [i_6]))))) | (((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */long long int) arr_21 [i_5 - 1] [i_5 + 1])) : (arr_5 [i_5 + 1] [i_5 - 1] [i_5 + 1])))));
                    var_23 -= ((/* implicit */int) (((((~(arr_7 [0LL] [i_6] [i_6]))) / ((+(var_8))))) <= (((/* implicit */long long int) (+(var_1))))));
                    var_24 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_5 - 1] [i_5] [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_19 [i_5] [i_6] [i_7])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (-4257108537130977774LL))))))), ((-(var_7)))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        arr_27 [8] = ((/* implicit */unsigned char) max((arr_26 [8LL] [i_8]), (min((((int) var_4)), (((/* implicit */int) ((unsigned char) var_13)))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 4; i_9 < 20; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                {
                    var_25 += (+(((long long int) arr_26 [i_9 - 3] [i_9])));
                    var_26 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)113)) && (((/* implicit */_Bool) var_0)))))));
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(var_12))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 3; i_12 < 22; i_12 += 3) 
                        {
                            {
                                arr_39 [i_8] [i_10] [i_8] [i_8] [i_8] = ((/* implicit */int) max((var_3), (((/* implicit */long long int) var_5))));
                                arr_40 [i_12 - 3] [i_11] [i_10] [i_9] [(unsigned char)22] = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)113)))) - (((/* implicit */int) arr_29 [i_10] [i_10] [i_8]))))), (var_4)));
                                arr_41 [i_10] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)145)))))) != (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)108))) | (arr_28 [i_8] [i_9]))))) && (((/* implicit */_Bool) min((-1575404096268102647LL), (((/* implicit */long long int) (unsigned char)0)))))));
                            }
                        } 
                    } 
                    arr_42 [i_10] [i_10] [i_10] [i_9] = ((/* implicit */int) (unsigned char)150);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 22; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 3; i_15 < 22; i_15 += 1) 
                    {
                        for (int i_16 = 1; i_16 < 22; i_16 += 3) 
                        {
                            {
                                arr_53 [3] [i_15] [i_13] = (i_13 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) >> (((arr_52 [i_8] [i_13 + 1] [i_14] [i_14] [i_13]) - (254399525615518105LL))))) - (((int) (unsigned char)105))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) >> (((((arr_52 [i_8] [i_13 + 1] [i_14] [i_14] [i_13]) - (254399525615518105LL))) + (2846843522299782998LL))))) - (((int) (unsigned char)105)))));
                                arr_54 [i_13] [i_13] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_51 [i_16 - 1] [i_13] [i_16 + 1] [i_16 + 1] [i_16 + 1])), (((((/* implicit */_Bool) arr_51 [i_16 + 1] [i_13] [i_14] [i_13] [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (var_5)))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) min((var_28), (min((-4513895926162834893LL), (((/* implicit */long long int) (unsigned char)22))))));
                }
            } 
        } 
    }
    for (unsigned char i_17 = 3; i_17 < 17; i_17 += 1) 
    {
        arr_58 [i_17 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (-7853205386972567321LL)));
        /* LoopNest 3 */
        for (long long int i_18 = 0; i_18 < 20; i_18 += 1) 
        {
            for (unsigned char i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                for (long long int i_20 = 1; i_20 < 19; i_20 += 4) 
                {
                    {
                        arr_66 [12] [i_17] [i_19] [12] [i_17] [i_17] = ((/* implicit */long long int) (unsigned char)0);
                        arr_67 [i_19] [i_19] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */long long int) var_10)), (-7853205386972567321LL))) : (min((var_7), (((/* implicit */long long int) -1644221854)))))), (var_7)));
}
