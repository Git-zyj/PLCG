/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182027
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
                            arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) var_0)) : (3906430471U)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [(unsigned char)19] [i_3 + 1]))))) : (((((/* implicit */_Bool) 4294967277U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (11096878708769461245ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_3]))) : (min((((/* implicit */unsigned int) ((signed char) (unsigned short)25838))), (((((/* implicit */unsigned int) var_4)) | (93585611U)))))));
                            var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((-951332578), (((/* implicit */int) (_Bool)1))))))) ? (15LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)26739))))))))));
                            var_12 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (-(416856664U)))), (4828384985103370168ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31779)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_1] [i_3])), (arr_5 [i_2] [i_3] [i_2])))))))));
                            var_13 |= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (~(arr_5 [i_0] [i_1] [i_2])))), (11046519833816658020ULL))), (arr_15 [i_0] [i_1] [i_2] [i_0] [i_2])));
                        }
                    } 
                } 
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_2))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((arr_9 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (short)26573))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 3642227080U))))))))));
                var_16 -= ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) ((signed char) arr_15 [i_1] [i_1] [i_1] [i_0] [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (var_2)));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (short)-20506))) ? (((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (((/* implicit */int) arr_19 [i_7 - 1] [i_7 - 1]))))) : (min((((/* implicit */unsigned long long int) (+(2979860048164081857LL)))), (((((/* implicit */_Bool) var_4)) ? (11362850337443450456ULL) : (((/* implicit */unsigned long long int) 18)))))))))));
                            var_19 = ((/* implicit */long long int) (+(arr_27 [i_4] [i_5] [i_6] [i_4] [i_7 - 1])));
                        }
                    } 
                } 
                arr_28 [i_4] [i_4] = ((/* implicit */int) min((arr_25 [i_5] [i_4] [i_5]), (((/* implicit */long long int) (_Bool)1))));
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                arr_37 [i_8] [i_8] [i_8] [i_5] [i_10] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)11306)), (((((/* implicit */_Bool) arr_32 [i_5] [i_8] [i_9] [i_10])) ? (arr_32 [i_4] [i_5] [i_8] [i_10]) : (((/* implicit */int) var_3))))));
                                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */unsigned int) -63363549)) : (524287U)))) : (((long long int) arr_31 [i_4])))))));
                                arr_38 [i_4] [i_4] [i_5] [i_8] [i_9] [i_10] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_10 [i_4] [i_5] [i_10])))) | ((~(((/* implicit */int) max(((unsigned short)65521), (((/* implicit */unsigned short) (short)-11)))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) 1150179538))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_4))));
            }
        } 
    } 
}
