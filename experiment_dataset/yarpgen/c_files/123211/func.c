/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123211
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
    var_11 = ((((/* implicit */_Bool) ((max((var_6), (((/* implicit */long long int) var_5)))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(var_10)))))))) ? (min((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) var_2)), (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36716))) * (9973463055919054878ULL)))))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) ^ (var_8)));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_13 -= ((/* implicit */signed char) (+((-(((/* implicit */int) var_10))))));
            arr_6 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5184303408889388910LL)) ? (((/* implicit */unsigned long long int) 1469424657)) : (9163894797797544340ULL))))));
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) var_2);
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3)))))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_3 = 4; i_3 < 8; i_3 += 1) 
            {
                var_15 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_8)))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    arr_16 [i_4] [i_3] [i_3] [i_0] = (!(min(((!(((/* implicit */_Bool) var_8)))), ((!(((/* implicit */_Bool) var_3)))))));
                    var_16 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                }
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    var_17 = ((/* implicit */int) max((((((/* implicit */int) (!(((/* implicit */_Bool) 628279118U))))) == (var_8))), ((!(((/* implicit */_Bool) var_9))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (var_0)))) : (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))))))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_3))))), (((var_6) ^ (var_6)))))))))));
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((9185039265857068330ULL) == (((/* implicit */unsigned long long int) 1763508747))))) : ((~(var_0))))))));
                        var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min((-1763508759), (((/* implicit */int) (unsigned char)178))))) ? ((-(((/* implicit */int) var_9)))) : ((+(((/* implicit */int) var_7))))))));
                    }
                    var_22 *= ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) (signed char)55)) ? (1763508758) : (1353249080))) + (((var_10) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))));
                    arr_24 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-6586820479453885770LL))))));
                }
            }
            for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4046415451816573481LL)) ? (9185039265857068322ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13664)))))) ? ((+(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_7))))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                    arr_30 [i_8] [i_8] [i_7] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))))) * (min((((((/* implicit */int) var_4)) % (var_8))), ((-(((/* implicit */int) var_10))))))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_24 ^= max(((+(((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_3)))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) % ((-(var_0))))));
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(max((var_1), (var_1))))))));
                        arr_33 [i_0] [i_0] [i_8] [i_8] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) || (var_10)))))), (max((((((/* implicit */_Bool) var_9)) ? (var_0) : (var_0))), (((var_0) ^ (((/* implicit */int) var_5))))))));
                    }
                }
                arr_34 [i_0] [i_2] [i_7] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max((var_3), (var_3)))) : ((+(((/* implicit */int) var_4))))))));
            }
            for (unsigned long long int i_10 = 3; i_10 < 8; i_10 += 1) 
            {
                arr_37 [i_10] [i_10] [i_10] [i_0] = (~((~(((/* implicit */int) max(((signed char)34), (((/* implicit */signed char) (_Bool)1))))))));
                var_26 = ((/* implicit */short) max((max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), (max((((/* implicit */unsigned short) var_5)), (var_4))))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) -147370658)) || (((/* implicit */_Bool) (signed char)34)))) && ((!(((/* implicit */_Bool) var_1)))))))));
                var_27 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 9261704807852483293ULL)))))));
                arr_38 [i_0] [i_0] [i_10] [i_10] = (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))))));
            }
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 599909246148904670LL)) ? (((/* implicit */int) (unsigned char)253)) : ((~(var_8)))))) % (-4046415451816573476LL))))));
            arr_39 [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) max((((/* implicit */short) var_5)), (var_7))))))));
        }
        arr_40 [i_0] [i_0] = ((/* implicit */int) (+((-((+(var_1)))))));
        var_29 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_9))))) : ((~(4046415451816573474LL)))))));
    }
}
