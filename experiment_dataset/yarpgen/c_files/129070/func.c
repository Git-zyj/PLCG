/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129070
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
    var_11 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) ((_Bool) var_2))), (((((/* implicit */_Bool) var_7)) ? (7923818013458661398ULL) : (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [19U] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
                arr_7 [i_0] [i_1] [i_1 - 2] = min((((/* implicit */unsigned long long int) (unsigned short)5738)), ((~(((((/* implicit */_Bool) arr_1 [(unsigned char)21] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_4))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) min((((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) (unsigned short)26580))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 24; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] [i_2] [i_3] [i_2] [i_2] [18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) arr_0 [i_3] [i_4]))))))) ? (min((arr_11 [i_3] [i_4] [i_3]), (((/* implicit */int) (signed char)112)))) : ((~(((((/* implicit */int) arr_8 [i_2])) >> (((var_1) - (4034891607U)))))))));
                        arr_19 [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(17898573454976548519ULL)))) ? (((/* implicit */unsigned long long int) ((var_1) & (arr_14 [i_5] [i_2] [i_3] [i_5])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59797))) ^ (arr_13 [i_2] [i_4] [i_2])))))));
                        var_13 -= ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)5762)))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 10542355319361917845ULL))))) << (((((((/* implicit */_Bool) arr_11 [(unsigned short)3] [i_3] [i_3])) ? (7923818013458661399ULL) : (var_4))) - (7923818013458661377ULL)))))));
                        var_14 = ((/* implicit */unsigned short) (~(10626138U)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) arr_16 [i_2] [i_6] [(unsigned short)18] [i_2])) - (arr_20 [i_2] [i_2] [(signed char)20]))) + (var_4)));
            arr_24 [i_6] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (arr_20 [i_2] [i_2] [12])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : ((-(arr_11 [i_2] [13U] [i_6])))));
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_29 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) arr_9 [i_7] [i_7])) : (arr_17 [19ULL] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(10522926060250890226ULL)))) ? ((~(arr_17 [i_7] [i_7] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0))))))) : (((unsigned long long int) min((var_8), (((/* implicit */unsigned long long int) (signed char)3)))))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            {
                                arr_44 [i_11] [i_7] [(unsigned short)0] [i_7] [i_7] = ((/* implicit */long long int) arr_14 [(_Bool)1] [i_8] [i_8] [i_11]);
                                arr_45 [i_9] [i_7] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_17 [i_7] [i_8] [i_7])) & (min((arr_27 [i_11]), (arr_27 [i_9])))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_9 [16U] [i_7]) : (((/* implicit */int) arr_39 [i_7]))))) ? (max((((/* implicit */unsigned int) var_3)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 646300651U)) ? (17887725768562958786ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53254)))))) ? (arr_21 [i_11]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) max((((/* implicit */short) var_10)), (arr_28 [i_7]))))));
                                arr_46 [i_7] [i_8] [i_9] [i_7] [13ULL] [i_11] = ((/* implicit */_Bool) ((unsigned long long int) ((max((((/* implicit */long long int) arr_21 [i_10])), (-8574024101294481087LL))) <= (min((((/* implicit */long long int) 1978064903U)), (arr_17 [i_10] [i_9] [22]))))));
                            }
                        } 
                    } 
                    arr_47 [i_7] [8ULL] = (-(((int) var_6)));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((_Bool) -8574024101294481109LL)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_3))))));
}
