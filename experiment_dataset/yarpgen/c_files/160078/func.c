/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160078
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_8))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-15048))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) var_13))))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (short)-16809))))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (var_2)))))) ? (((((/* implicit */_Bool) min((var_2), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_0])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)15048))) % (arr_5 [i_0]))))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1)))))) / (min((134217727U), (((/* implicit */unsigned int) (unsigned short)65535))))))));
                arr_7 [i_1 - 3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 2350892339U)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)34423)) : (2147483645))))))) >> (((((/* implicit */int) var_16)) - (4552)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            var_21 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_7) ^ (var_18)))) ? (max((var_3), (((/* implicit */unsigned long long int) var_16)))) : (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))));
                            var_22 = ((/* implicit */unsigned long long int) max((8388352), ((((_Bool)1) ? (((/* implicit */int) (short)16978)) : (min((2027547914), (((/* implicit */int) (signed char)-31))))))));
                            var_23 *= ((/* implicit */unsigned long long int) ((int) ((var_18) + (2965972589U))));
                            var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9289))) ^ (var_0))) >> (((2027547914) - (2027547910)))))) || (((/* implicit */_Bool) max((((var_4) >> (19ULL))), (((/* implicit */unsigned long long int) arr_8 [i_3 - 1])))))));
                        }
                        for (int i_7 = 3; i_7 < 12; i_7 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((max((((int) 0U)), (var_1))), (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))))))));
                            arr_25 [12] [12] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((arr_19 [i_5] [i_5] [i_4 + 2] [i_3 + 2]), (arr_19 [i_2] [i_3 + 1] [i_3 + 1] [i_3 + 3])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_9 [i_2] [i_3])) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_5))))) : (((unsigned int) var_19))))));
                            var_26 &= ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)7192)) < (((/* implicit */int) var_16))))), (min((var_10), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                            arr_26 [i_2] [i_4] [i_5 - 1] [i_7 - 3] = ((/* implicit */unsigned long long int) ((var_9) == (((var_17) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_3 - 1])))))));
                        }
                        var_27 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)127)), (arr_16 [i_2] [i_2] [i_4] [i_5])))) ? (((((/* implicit */unsigned long long int) arr_13 [i_2] [i_3])) & (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) ((signed char) var_3)))));
                    }
                    for (short i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) var_17);
                        arr_30 [i_3] [i_3] [i_2] [i_3] [i_3] [i_3 + 1] = ((/* implicit */signed char) ((unsigned long long int) var_12));
                    }
                    var_29 ^= ((/* implicit */short) max((((((/* implicit */_Bool) (-(arr_12 [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (var_13)))) : (((7198478026408888681ULL) / (18446744073709551594ULL))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_2] [i_2])), (var_10)))) ? (max((((/* implicit */unsigned long long int) var_12)), (var_3))) : (((/* implicit */unsigned long long int) ((unsigned int) var_11)))))));
                }
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_11 = 3; i_11 < 12; i_11 += 2) 
                            {
                                var_30 &= min((((/* implicit */unsigned long long int) (short)-15048)), (18446744073709551602ULL));
                                arr_39 [i_2] [i_3] [i_9] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_1), (var_19)))), (((((/* implicit */_Bool) var_18)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (var_17) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 19ULL)) ? (arr_32 [i_2] [i_3] [i_3]) : (1559315955U))))))));
                            }
                            arr_40 [i_2] [i_3] [6] [i_10 + 1] [i_10 + 1] [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967295U) > (arr_14 [i_2] [i_2]))))) * (var_11)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_38 [i_2] [i_9] [i_10 + 1] [i_3 + 3] [i_10] [i_9]))) : ((~(((var_5) ? (var_10) : (var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */_Bool) var_2);
}
