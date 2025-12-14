/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188192
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned short) max((((var_4) ? ((+(arr_1 [19] [i_1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)30887))))))), (((/* implicit */unsigned int) ((arr_1 [i_0 + 1] [i_1]) >= (((/* implicit */unsigned int) ((var_1) - ((-2147483647 - 1))))))))));
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) arr_2 [i_1] [i_2]))));
                }
                arr_7 [i_0 + 1] = (~(((/* implicit */int) arr_5 [(unsigned char)6] [i_0 - 1])));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), (arr_9 [i_3] [i_1] [(unsigned short)11])))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_0 - 1] [i_3] [i_5]))))) ^ (((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))));
                                arr_16 [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_0]))) == (var_2))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255)))))))) : ((~(((/* implicit */int) max(((unsigned char)1), ((unsigned char)0))))))));
                                var_15 = ((((/* implicit */int) (signed char)-109)) * (((/* implicit */int) (unsigned char)119)));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) max((6094058714926056491LL), (((/* implicit */long long int) (unsigned char)255))));
                }
                for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((max((((/* implicit */int) arr_14 [i_0] [i_1] [i_6] [i_0] [i_0] [i_6] [i_0 - 1])), (-2088750655))) * (((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)255)))))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)0), ((unsigned char)255)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && ((_Bool)0)))) : (((int) var_8)))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (signed char i_9 = 1; i_9 < 19; i_9 += 2) 
                        {
                            {
                                arr_28 [i_7] = ((/* implicit */unsigned char) min((min((((((/* implicit */long long int) ((/* implicit */int) var_5))) / (arr_11 [i_9] [i_8] [i_7] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) (unsigned char)0))))))), (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_4)))))));
                                arr_29 [i_8] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) (unsigned char)24)) || (((/* implicit */_Bool) arr_3 [i_1])))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_2 [i_0 - 1] [i_7 + 1])))), ((-(((/* implicit */int) var_3))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) ^ (((/* implicit */int) arr_20 [i_7] [i_7] [i_1] [i_0])))), ((~(max((2108810480), (((/* implicit */int) (_Bool)1))))))));
                }
            }
        } 
    } 
    var_21 |= ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_33 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1846239011)) || ((_Bool)1)));
        arr_34 [(signed char)11] [(signed char)11] = ((/* implicit */unsigned char) min((min((arr_31 [i_10] [i_10]), (arr_31 [i_10] [i_10]))), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)231)) & (((/* implicit */int) (unsigned char)24)))) <= (((/* implicit */int) arr_32 [(signed char)9])))))));
    }
    var_22 = var_1;
}
