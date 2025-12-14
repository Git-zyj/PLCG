/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1615
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) var_4))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_11 = var_7;
        arr_2 [i_0] = ((((/* implicit */_Bool) -5071856205339063092LL)) && (((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_8)))) - (5360717380923081497LL)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (((((~(((/* implicit */int) ((unsigned short) var_2))))) + (2147483647))) << (((((arr_3 [i_1]) ? (((/* implicit */long long int) var_4)) : (var_6))) - (986611815LL))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    arr_10 [i_1] [i_2] [1] = ((/* implicit */int) max((((/* implicit */signed char) min((arr_6 [i_3] [i_1] [i_1]), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_0)))))), (var_3)));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_2])) : ((~(((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))));
                    var_14 = ((/* implicit */unsigned int) var_3);
                    var_15 = ((/* implicit */int) var_4);
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_7] [i_8 + 1] [(signed char)5] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7] [i_6] [i_6] [i_8 + 2] [i_5] [i_5]))) : (var_5))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_23 [i_8 + 2] [i_8 + 1] [i_8] [i_7] [i_4] [i_4])) : (((/* implicit */int) arr_22 [i_8 + 2] [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_7]))));
                            arr_24 [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_4])))) ? (((/* implicit */unsigned long long int) (~(var_8)))) : (var_0)));
                        }
                    } 
                } 
            } 
            arr_25 [i_5] [(short)6] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_4]) : (((/* implicit */unsigned long long int) var_8))));
        }
        for (unsigned char i_9 = 2; i_9 < 7; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 3; i_11 < 7; i_11 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)45654)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (_Bool)1))));
                        arr_34 [i_11 + 1] [i_10] [0] [i_4] = ((/* implicit */int) (~(var_0)));
                        var_19 += ((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_7)) | ((~(-1061607119))))));
                        arr_35 [4U] [i_9] [4U] [i_9] [i_9 - 1] [i_9] = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_23 [i_4] [i_4] [i_10] [i_11 + 3] [i_11] [i_11]))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) (~(max((var_6), (var_9)))));
            var_21 -= ((/* implicit */long long int) var_8);
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_0 [i_4]))))) ? (((/* implicit */int) ((_Bool) (~(var_9))))) : (((((arr_16 [(short)2] [i_9 + 1] [i_9 + 3]) + (2147483647))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (var_5))) - (986611815ULL))))))))));
        }
        arr_36 [(_Bool)1] [i_4] = ((/* implicit */short) var_9);
        var_23 = ((/* implicit */unsigned int) min((var_23), (max((((/* implicit */unsigned int) (~(arr_28 [i_4] [i_4] [i_4])))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_26 [i_4] [i_4])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
    {
        var_24 *= ((/* implicit */short) var_9);
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                {
                    arr_47 [i_12] [i_13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)247))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */long long int) ((unsigned long long int) var_6));
                                arr_53 [i_12] [6LL] [6LL] [4] [i_16] [i_16] [0LL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_13 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_12] [i_13] [i_13] [i_14] [i_14] [i_15] [i_16]))) : (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32741))) : (3179405917U)))));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_12] [i_13 + 1]))) ^ (var_5))))));
                            }
                        } 
                    } 
                    arr_54 [i_12] [i_12] [i_14] = (i_12 % 2 == zero) ? (((/* implicit */int) ((((((arr_45 [i_12] [i_13] [i_14] [i_14]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)25744)) - (25744))))) >= (((long long int) (signed char)17))))) : (((/* implicit */int) ((((((((arr_45 [i_12] [i_13] [i_14] [i_14]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)25744)) - (25744))))) >= (((long long int) (signed char)17)))));
                    arr_55 [i_12] [i_13] [i_14] [i_12] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) var_7))))))) <= (var_1)));
                }
            } 
        } 
        arr_56 [i_12] [i_12] = ((/* implicit */long long int) var_2);
    }
    var_27 = ((/* implicit */unsigned short) var_4);
}
