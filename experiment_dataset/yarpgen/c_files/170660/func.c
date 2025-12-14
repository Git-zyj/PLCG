/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170660
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
    var_18 = ((/* implicit */int) var_3);
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((unsigned char) var_2))) ^ (((var_11) | (((/* implicit */int) var_8)))))) == (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                        {
                            arr_17 [i_0] = min((((/* implicit */unsigned int) (unsigned short)30265)), (((unsigned int) ((unsigned char) arr_14 [i_0] [i_2] [i_0]))));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)0));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) var_4)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) >= (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_3] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_3 + 1] [i_2] [i_1] [i_0]))))), (arr_9 [i_0] [4U] [i_0] [i_0] [i_3 + 1] [i_3 - 1])))));
                            arr_22 [i_1] [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] |= ((arr_16 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (((-(16753382265784505018ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_3] [0] [10U] [i_1])) != (((/* implicit */int) (_Bool)1)))))))))));
                            arr_23 [i_0] [i_1] [10] [i_0] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 4294967295U)), (18446744073709551615ULL)));
                            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_7))) >> (((3216352099U) - (3216352099U)))))) * (((arr_9 [i_0] [i_1] [i_3 + 2] [i_3] [i_5] [i_5]) | (arr_9 [i_5] [i_5] [i_3 + 1] [i_0] [i_5] [12U])))));
                        }
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_1] |= ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]);
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_1 [3ULL]))));
                        var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [7U] [i_0])) ? ((-(((/* implicit */int) arr_2 [i_1] [(unsigned short)6])))) : (((/* implicit */int) var_4))))));
                        arr_25 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 1078615196U)))))) : (((/* implicit */int) arr_1 [i_0]))));
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [10U])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(unsigned char)7])) ? (arr_3 [i_0] [(unsigned char)6]) : (var_10))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_0] [5U] [12U] [i_0]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) <= (11566089250536092546ULL))))) * (min((((/* implicit */unsigned int) arr_12 [i_2] [i_1] [9] [i_0])), (var_17)))))));
                    arr_26 [i_0] [i_1] [2] [i_1] = ((/* implicit */unsigned int) arr_10 [i_2] [i_1] [i_2] [2U] [i_0]);
                    arr_27 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((arr_16 [i_0]) <= (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_0])) << (((var_6) - (1406607586))))))));
                    arr_28 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */unsigned long long int) -1)) != (562949953421184ULL)))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1628934567)) ? (((/* implicit */int) arr_7 [10U] [i_1] [i_1] [i_0])) : (var_11)))) <= (min((arr_21 [i_0] [i_0] [i_1] [i_2] [i_1]), (((/* implicit */unsigned long long int) var_11)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 1; i_6 < 19; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                {
                    var_25 -= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_8]))) : (arr_29 [i_6 - 1] [4U])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [4U] [4U])) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) arr_32 [i_6])))))))), (((((/* implicit */int) ((unsigned char) (signed char)120))) | (((((/* implicit */_Bool) var_14)) ? (1628934567) : (1628934566)))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_33 [i_6 - 1]) % (((/* implicit */unsigned long long int) arr_29 [i_6 + 1] [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_6 + 1] [i_8]))))) : (((/* implicit */int) ((unsigned short) 3529281867U)))));
                }
            } 
        } 
    } 
    var_27 = ((((/* implicit */_Bool) var_13)) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) >= (2033830017U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (var_5))) : ((~(var_0))));
}
