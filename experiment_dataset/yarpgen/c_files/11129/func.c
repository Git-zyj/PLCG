/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11129
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
    var_11 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) (_Bool)1);
        arr_4 [i_0] [(signed char)0] = ((/* implicit */signed char) (unsigned short)65535);
        var_12 = ((/* implicit */short) max((((/* implicit */int) ((_Bool) 9223372036854775807LL))), ((~(((/* implicit */int) arr_0 [i_0]))))));
        var_13 = ((_Bool) arr_2 [i_0] [(signed char)7]);
        arr_5 [i_0] [(unsigned char)10] &= ((/* implicit */int) min((arr_0 [2]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [(unsigned short)4])))))));
    }
    for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_6 [i_1 - 2] [(_Bool)0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((arr_6 [i_1 - 1] [i_1 + 1]), (((/* implicit */unsigned short) (_Bool)0)))))))));
        var_15 = ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((arr_6 [i_1] [13]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1])) || (((/* implicit */_Bool) (short)13318)))))))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned short) (_Bool)1);
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_7 [i_1 + 1])))))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (_Bool)1))));
            /* LoopNest 2 */
            for (signed char i_5 = 4; i_5 < 18; i_5 += 1) 
            {
                for (int i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_19 += ((/* implicit */int) arr_11 [i_1]);
                        var_20 *= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)-33)))), (((/* implicit */int) arr_17 [i_1] [i_1] [i_1 - 2] [i_6 - 3] [i_2] [i_1 + 1]))));
                        var_21 += ((/* implicit */_Bool) arr_12 [i_1 - 1] [i_6]);
                        var_22 = ((/* implicit */unsigned char) (signed char)-1);
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 2; i_7 < 18; i_7 += 4) 
                        {
                            arr_25 [i_1 - 2] [i_2] [i_5] [i_6] [i_2] [i_5] = ((/* implicit */long long int) max((2097036395U), (((/* implicit */unsigned int) (unsigned short)64830))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)8113)) / (-1979305127)))))) || (((((/* implicit */_Bool) arr_14 [i_1 + 1])) && (((/* implicit */_Bool) arr_14 [i_1 - 2])))))))));
                            var_24 -= ((/* implicit */unsigned char) arr_11 [i_1]);
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) var_10);
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (signed char)19))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 5290923712876870627ULL)) ? (((/* implicit */unsigned int) -1007564290)) : (var_10))), (((/* implicit */unsigned int) arr_26 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_2] [i_1 + 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (arr_27 [i_2] [i_5]) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9766))) : (min((16874186567255171897ULL), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1858)) || (((/* implicit */_Bool) var_7))))) <= (var_2)))))));
                            var_28 = ((/* implicit */long long int) (~(((/* implicit */int) ((2726155351U) >= (((/* implicit */unsigned int) var_2)))))));
                            arr_28 [i_2] [i_5] [i_5] [i_2] [i_5] [i_5 - 3] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)31174))));
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
        {
            var_29 = ((((/* implicit */long long int) ((arr_20 [i_1] [i_1 + 1] [i_1 + 1]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */int) (short)-28362)))))))) - (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_13 [i_1 + 1] [i_1 - 2])))) - (67106816LL))));
            arr_32 [i_1 - 1] [i_9] = ((/* implicit */unsigned int) arr_18 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1]);
        }
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
        {
            var_30 -= ((/* implicit */_Bool) var_4);
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((arr_9 [(signed char)0] [i_1] [i_1 - 2]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30099))))))));
        }
    }
    for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
    {
        var_32 ^= ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)63)) | (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                {
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)54)))))));
                    var_34 = ((((/* implicit */_Bool) arr_35 [i_12])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14228)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (6908689258168708400LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28))))))))) : (var_8));
                }
            } 
        } 
    }
}
