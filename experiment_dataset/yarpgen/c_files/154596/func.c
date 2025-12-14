/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154596
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) > (((/* implicit */int) ((arr_3 [i_0]) > ((~(((/* implicit */int) var_9)))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) max((arr_2 [2U]), ((signed char)92)))) : (((((/* implicit */int) var_5)) >> (((/* implicit */int) var_0))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) max((var_11), (arr_13 [i_0] [i_1] [i_2] [i_3] [5U])));
                            arr_14 [i_1] [i_1] [i_1] [(unsigned short)10] [(_Bool)0] [i_3] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_13 [(unsigned char)6] [i_3] [i_2] [i_1] [i_0])) * (((/* implicit */int) var_5)))) << (((((((((/* implicit */_Bool) (short)19529)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_1] [i_3 - 3] [i_3 - 3] [i_3 - 1] [i_3]))))) + (3675491238125875145LL))) - (26LL)))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */short) (-(((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)668))))) ^ (((((/* implicit */int) arr_2 [8])) << (((/* implicit */int) arr_8 [i_1] [i_1] [i_2]))))))))) : (((/* implicit */short) (-(((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)668))))) ^ (((((/* implicit */int) arr_2 [8])) << (((((/* implicit */int) arr_8 [i_1] [i_1] [i_2])) - (104))))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 9; i_5 += 4) 
            {
                for (short i_6 = 1; i_6 < 10; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_22 [i_5] [i_1] [i_1] [i_5] [(unsigned short)6] [i_7] &= ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) arr_9 [i_0] [i_5] [(signed char)4] [i_6] [i_7] [i_7])) : (((/* implicit */int) (short)32750))))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) var_0);
                        }
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_5] [i_6] [i_0] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6]) != (arr_12 [i_0] [i_1] [i_5] [i_5] [i_0] [i_6]))))) : ((-(var_1)))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_13 -= ((/* implicit */signed char) ((int) arr_13 [i_8] [i_8] [(unsigned short)4] [i_8] [i_8]));
                    var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_16 [i_8] [i_8] [i_8])))) ? (arr_16 [i_8] [i_8] [i_8]) : (((/* implicit */int) ((arr_16 [i_10] [i_10] [i_10]) < (arr_16 [i_8] [i_9] [i_10]))))))));
                    arr_32 [i_9] [i_10] = ((/* implicit */_Bool) min((2417570138144531766LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_10] [i_10] [i_9] [i_9] [i_8])) ? (((/* implicit */int) min((var_2), (var_2)))) : (((((/* implicit */_Bool) (short)668)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))))))));
                    arr_33 [i_9] [i_9] = (short)-19545;
                }
            } 
        } 
        var_15 = ((/* implicit */int) var_7);
    }
    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((_Bool) var_5)))))));
    var_17 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        for (short i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            for (int i_13 = 4; i_13 < 21; i_13 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        arr_45 [(unsigned short)0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)19546))));
                        var_18 = ((/* implicit */int) min((var_18), (((((((((/* implicit */int) arr_44 [i_11] [i_12] [i_13] [i_14])) << (((arr_42 [i_12] [i_11]) + (708500414))))) != (((/* implicit */int) min((((/* implicit */short) var_0)), (var_5)))))) ? (min((((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_6))))), (((((/* implicit */int) (unsigned char)4)) ^ (((/* implicit */int) arr_44 [i_14] [14] [i_12] [17LL])))))) : (((/* implicit */int) (short)672))))));
                        arr_46 [i_12] [i_13] [i_12] [i_12] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) min((((/* implicit */long long int) var_6)), (2417570138144531753LL))))) ? ((~(arr_34 [i_13 + 1]))) : (((/* implicit */int) var_7))));
                    }
                    for (unsigned short i_15 = 2; i_15 < 23; i_15 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_43 [i_11] [i_12] [i_15 + 1])), (arr_37 [i_13 - 4])))));
                        var_20 = ((/* implicit */short) arr_40 [i_11] [i_11] [i_11] [i_11]);
                        arr_49 [i_15] [i_13] [i_12] [i_15] = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((unsigned short) arr_44 [i_15] [i_13 - 2] [i_12] [i_11]))) + ((+(var_4)))))));
                        arr_50 [i_11] [i_12] [(unsigned char)2] [i_15] [(unsigned short)14] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_13 + 3])) ? (max((((/* implicit */unsigned int) var_6)), (arr_37 [i_11]))) : (((/* implicit */unsigned int) var_4))));
                    }
                    for (short i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_35 [i_12])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (var_4)))) : ((~((~(((/* implicit */int) var_6)))))))))));
                        var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_47 [i_11] [4LL] [i_16] [i_13 - 2] [4LL] [i_11])) >= (((/* implicit */int) (short)-19530)))))));
                        var_23 = ((/* implicit */long long int) (+(max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1)))))))));
                        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) (unsigned char)166)) ? ((-(((/* implicit */int) arr_47 [i_12] [(unsigned char)8] [i_13] [i_13 - 3] [i_13] [i_13 - 2])))) : (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((int) var_3)))))))));
                    }
                    var_25 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_5)) << (((((/* implicit */int) var_5)) - (13990))))), ((+(((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
}
