/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149957
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 2] [i_0] [i_0] &= ((/* implicit */int) (((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))) ^ (2590155498U))))) | (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) : (arr_1 [i_0]))), (((var_13) | (((/* implicit */unsigned int) var_2))))))));
                var_16 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (8835074753517381883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 2])))))) ? (((((/* implicit */_Bool) var_10)) ? (var_1) : (2147483647))) : (((/* implicit */int) var_15))))));
                var_17 -= max(((~(((/* implicit */int) ((_Bool) var_14))))), (((/* implicit */int) (_Bool)0)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned int i_4 = 3; i_4 < 17; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) var_8);
                            var_19 = var_3;
                        }
                        for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            arr_20 [i_7] [i_3] [i_5] [i_4 - 2] [i_5] [i_2] [13] = ((/* implicit */int) (signed char)-107);
                            var_20 ^= ((/* implicit */short) (-(arr_8 [i_3] [i_4] [i_5])));
                            arr_21 [i_2] [i_3] [i_2] [i_5 + 2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 37856372U)) ? (((/* implicit */int) (short)-28066)) : (((/* implicit */int) (unsigned char)201)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11133)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (var_7)))))))));
                        }
                        for (long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                        {
                            arr_24 [i_2] [i_3] [i_4] [(unsigned char)18] [i_8 - 1] [i_5] = ((/* implicit */unsigned long long int) var_9);
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((((((/* implicit */unsigned long long int) var_11)) & (arr_3 [i_2] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2051298962) : (((/* implicit */int) arr_7 [9ULL] [i_2]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_13))) : (min((var_11), (((/* implicit */unsigned int) -2147483647)))))))))));
                        }
                        arr_25 [i_2] [i_5] [i_5] [11LL] = ((/* implicit */signed char) var_9);
                        var_22 ^= ((/* implicit */unsigned short) arr_2 [i_3] [10ULL]);
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((max((var_4), (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_5] [i_4] [8U] [18U] [0U] [i_2] [18U])) * (((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_9)) < (18446744073709551614ULL)))))))));
                    }
                    var_24 -= ((/* implicit */unsigned short) ((var_4) * (((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) -2147483647)) * (var_12)))))));
                    var_25 = ((/* implicit */short) (signed char)-34);
                }
            } 
        } 
        arr_26 [i_2] [i_2] = ((/* implicit */long long int) min((18446744073709551611ULL), (((/* implicit */unsigned long long int) ((min((3486505640U), (808461664U))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((((/* implicit */_Bool) 3500361774U)) ? (2956104078U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9] [i_9])))))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_6))))))));
        var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)62563)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) : (8835074753517381886ULL)));
    }
    var_28 = ((/* implicit */short) (_Bool)0);
}
