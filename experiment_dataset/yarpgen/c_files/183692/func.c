/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183692
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
    var_12 *= ((/* implicit */unsigned int) (unsigned short)24576);
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned short) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0 - 2] [i_0] = ((/* implicit */long long int) arr_1 [i_0 - 2]);
        /* LoopSeq 2 */
        for (signed char i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            var_14 += ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3615292444379940900LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)125))) : (-3615292444379940897LL))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)119)) * (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))))));
            arr_9 [i_0] [i_0 - 1] [i_1] = ((/* implicit */unsigned char) (-((~(((unsigned long long int) var_1))))));
            var_15 = min((var_11), (((unsigned long long int) arr_7 [i_0 - 1])));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_13 [i_2] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3615292444379940885LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) : (((/* implicit */int) (short)1378))))));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                /* LoopSeq 4 */
                for (short i_4 = 4; i_4 < 20; i_4 += 2) 
                {
                    var_16 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned long long int) 131071ULL))) ? (18446744073709420540ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)15)), (var_6)))))))));
                    arr_20 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-13125)) / (((/* implicit */int) var_0))));
                }
                for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) >> (((/* implicit */int) ((_Bool) arr_17 [i_5 + 1] [i_5] [i_5 + 1] [i_0 + 1]))))))));
                    arr_23 [i_2] = ((/* implicit */signed char) (short)-32766);
                    var_18 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_3]))) | (var_10)))))));
                    var_19 |= ((unsigned char) min((((/* implicit */unsigned short) (signed char)-12)), (arr_11 [i_0 - 2] [13LL])));
                }
                for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
                {
                    var_20 *= ((/* implicit */unsigned int) (+(max((max((arr_25 [i_3] [i_3] [i_0] [i_3]), (2594969663560285382ULL))), (max((var_11), (10523366179592005544ULL)))))));
                    arr_26 [i_0] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) arr_21 [i_0] [i_2] [i_3] [i_6 - 1]);
                }
                for (unsigned int i_7 = 1; i_7 < 21; i_7 += 2) /* same iter space */
                {
                    var_21 += ((/* implicit */unsigned long long int) ((((min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) (short)-5821)))) + (2147483647))) << (((((((/* implicit */_Bool) ((-5741952376908739806LL) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_3])))))) ? (min((16221716443807189075ULL), (((/* implicit */unsigned long long int) -4012415784073210781LL)))) : (arr_12 [i_3] [i_3]))) - (14434328289636340835ULL)))));
                    var_22 &= ((/* implicit */short) (((!(((/* implicit */_Bool) (short)5809)))) ? (((((((/* implicit */_Bool) (short)0)) ? (var_11) : (var_11))) + (((/* implicit */unsigned long long int) ((unsigned int) 2845447098839506578LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11))))));
                    arr_30 [i_2] [i_2] [i_2] [i_3] [i_7] [i_7] = ((((arr_12 [i_0] [i_2]) & (((/* implicit */unsigned long long int) 4012415784073210780LL)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) -3615292444379940925LL)) ? (-9223372036854775803LL) : (((/* implicit */long long int) 2735310309U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)57213)) : (((/* implicit */int) (signed char)-118)))))))));
                    var_23 = ((/* implicit */signed char) 18446744073709551615ULL);
                }
                arr_31 [i_0] [i_2] [i_3] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)112))))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_27 [i_0] [(signed char)9] [i_3] [i_3] [i_0])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11984)))))))), (((unsigned long long int) ((((/* implicit */_Bool) 17888431875740383522ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_11)))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)45311))))), (max((arr_28 [i_2] [i_0 - 1]), (((/* implicit */short) (unsigned char)31))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2325571673U)) || (((((/* implicit */_Bool) 36028796482093056ULL)) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))) : (((/* implicit */int) ((arr_1 [i_0 - 3]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 2]))))))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)3)))))));
                var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((arr_1 [i_0 - 1]) < (((/* implicit */unsigned int) var_9))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-129)), (arr_11 [i_0] [i_0])))) ? (arr_0 [i_8]) : (((/* implicit */unsigned int) ((int) 304882953)))))));
                arr_35 [(signed char)15] [i_0] [i_2] [0U] = ((/* implicit */unsigned char) arr_7 [i_0 - 2]);
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 4294967273U)))))));
            }
            arr_36 [i_0] [i_2] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6732688107818458148LL)) ? (((/* implicit */int) (short)13125)) : (((/* implicit */int) (unsigned char)220))))), ((-(((((/* implicit */_Bool) var_6)) ? (70368744177536ULL) : (arr_33 [i_2] [i_2] [i_2] [i_2]))))));
        }
    }
    for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            var_28 -= (signed char)127;
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 3) 
            {
                for (unsigned short i_12 = 3; i_12 < 23; i_12 += 2) 
                {
                    {
                        var_29 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_40 [16ULL] [i_9])) > (((/* implicit */int) ((signed char) (unsigned short)2))))))));
                        var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_11 + 2] [i_11 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_11 - 1] [i_11 - 1]))))) : (((/* implicit */int) ((unsigned short) arr_46 [i_11 + 1] [i_11 + 1])))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (!((!(((/* implicit */_Bool) arr_45 [i_9] [i_9 - 2] [i_9 + 1] [i_13])))))))));
            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_41 [i_9] [i_9]))));
        }
        arr_50 [i_9] [i_9] = ((/* implicit */signed char) (+((-(((long long int) arr_49 [i_9]))))));
        var_33 = ((/* implicit */int) arr_42 [i_9]);
    }
}
