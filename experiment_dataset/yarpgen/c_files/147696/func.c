/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147696
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
    var_18 += ((/* implicit */unsigned short) -6706042931300785781LL);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((((/* implicit */int) var_11)) >> (((4174416932U) - (4174416910U)))))))) >= ((~(((((/* implicit */_Bool) arr_2 [i_1])) ? (6298496719255032503LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                arr_6 [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) (unsigned char)242)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) (((_Bool)1) ? (0) : (((/* implicit */int) arr_2 [i_1]))))) : (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)93)))))), (((min((arr_0 [i_2]), (arr_0 [i_0]))) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) var_16)), (max((((/* implicit */long long int) var_15)), (-9223372036854775793LL))))), (((((((/* implicit */_Bool) (signed char)-17)) || (((/* implicit */_Bool) (unsigned char)254)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -6298496719255032503LL)) ? (-9223372036854775793LL) : (arr_0 [i_0])))))));
            }
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(var_12))), (((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))) : (((/* implicit */int) var_0)))))));
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    var_21 = ((/* implicit */int) max((var_21), (min((max((((/* implicit */int) arr_8 [i_4 - 1] [i_4] [i_4 - 1] [i_1 - 1])), (((((/* implicit */int) var_4)) % (((/* implicit */int) arr_10 [i_0])))))), (((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -6298496719255032475LL))))) % (((/* implicit */int) (unsigned short)34157))))))));
                    var_22 |= ((/* implicit */unsigned char) (signed char)1);
                    arr_12 [i_0] [i_1 - 2] [i_4 + 2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) min(((signed char)-30), ((signed char)117)))), (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))) : (((((/* implicit */_Bool) max((((/* implicit */signed char) var_2)), ((signed char)-30)))) ? (max((16699690377098157440ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_16))))))));
                }
            }
        }
        arr_13 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_23 |= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (4258870371U) : (min((((/* implicit */unsigned int) (unsigned short)20817)), (4294967287U))))));
            var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */signed char) var_8)), (var_1)))) ? (3871745955561176253ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16)))))))));
        }
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (~(min(((~(((/* implicit */int) (signed char)94)))), (((/* implicit */int) var_11)))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 4) 
    {
        arr_18 [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) == (min((((/* implicit */unsigned long long int) min(((unsigned char)3), (arr_17 [i_6])))), (10570525714942995636ULL)))));
        var_26 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((1709236158) / (((/* implicit */int) var_15))))) || (var_2)))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -6298496719255032503LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (7876218358766555980ULL)))))))));
        /* LoopNest 3 */
        for (short i_7 = 2; i_7 < 20; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_28 [i_7] [i_7] [14ULL] [i_8] = ((/* implicit */long long int) ((7876218358766555983ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(var_3)))), (max((((/* implicit */long long int) (unsigned short)55617)), (2132405597718613534LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : ((+(arr_21 [i_6] [i_6] [i_6] [i_6]))))))));
                        var_28 *= ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_24 [i_8] [i_9 - 1])))), (((/* implicit */int) arr_27 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 2] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_7 + 2] [i_7 + 2] [19LL])) ? (((/* implicit */int) arr_24 [i_7] [i_7])) : (((/* implicit */int) (unsigned char)44))))) % (min((((/* implicit */long long int) (unsigned short)65524)), (7082236331767862564LL)))))) : (7876218358766556003ULL));
                    }
                } 
            } 
        } 
        var_29 = max((7082236331767862570LL), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_11)), ((short)9070)))) ? (((/* implicit */int) ((-6298496719255032503LL) == (6298496719255032503LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 10570525714942995658ULL)))))))));
        var_30 *= ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-27))))), (((((/* implicit */_Bool) max((6298496719255032486LL), (((/* implicit */long long int) (unsigned short)49984))))) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) arr_26 [16ULL])) : (1690390806)))) : (((arr_0 [i_6 - 1]) % (-7082236331767862578LL)))))));
    }
    for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 1) 
    {
        var_31 = ((/* implicit */short) (-(((/* implicit */int) ((short) min((((/* implicit */long long int) var_14)), (-4912772386994566034LL)))))));
        var_32 += ((/* implicit */_Bool) (~(((unsigned long long int) var_10))));
    }
}
