/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138779
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((((var_10) - (((/* implicit */unsigned long long int) var_6)))), (((unsigned long long int) var_13))))) ? (var_13) : (((unsigned long long int) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_19 += ((((/* implicit */_Bool) ((unsigned char) var_4))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (_Bool)1))))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((arr_0 [i_0]) - (var_14)));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4076825708U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_3 [i_0] [i_0])))) ^ (((unsigned long long int) 6684333740642981708ULL)))))));
            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 12117787506218285045ULL))) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-18106)) || (((/* implicit */_Bool) 12117787506218285045ULL)))))) ^ (((((/* implicit */_Bool) var_17)) ? (4301680774882624166ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 3; i_3 < 17; i_3 += 3) 
            {
                for (short i_4 = 2; i_4 < 19; i_4 += 3) 
                {
                    {
                        var_23 = 15754308434143564636ULL;
                        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4] [i_4] [i_4 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))) : (((/* implicit */int) (short)5421))));
                        arr_14 [i_2] [i_3] [i_2] [i_2] [i_0] = (~(var_12));
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 9644881103484392539ULL))) ? (((((/* implicit */_Bool) (short)-25068)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2170530915U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))))))));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2240906272U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_28 *= ((((/* implicit */_Bool) arr_16 [i_5])) ? (((arr_16 [i_5]) ^ (arr_16 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_4)))))));
        arr_17 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_16 [i_5])))) || (((((/* implicit */_Bool) ((unsigned char) (short)-24773))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned int i_6 = 3; i_6 < 13; i_6 += 2) 
    {
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_6])), (var_4)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))))), ((-(14351951937275471602ULL))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((((unsigned int) arr_9 [i_6 - 3] [i_6 - 2] [i_6 - 3] [i_6 - 2])) - (arr_9 [i_6] [i_6 + 1] [i_6 - 2] [i_6])));
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15754308434143564636ULL)) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) ((unsigned char) 536319722U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */short) (unsigned char)177)), (var_3)))))) : (((min((((/* implicit */unsigned long long int) arr_19 [i_6 - 2])), (4600030359020735304ULL))) - (min((((/* implicit */unsigned long long int) 3351279078U)), (12117787506218285045ULL)))))));
            var_32 += ((/* implicit */short) ((_Bool) (~(((/* implicit */int) max((arr_18 [i_6] [i_7]), (arr_13 [i_6] [i_6] [i_7] [i_7])))))));
        }
        /* LoopSeq 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            var_33 &= ((/* implicit */unsigned long long int) var_16);
            arr_26 [i_6] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3917344960U)), (var_10)))) || (((/* implicit */_Bool) 209917918U))))) - (((/* implicit */int) max((((/* implicit */unsigned char) var_16)), ((unsigned char)55))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(var_16))))))) ^ (min((((/* implicit */unsigned long long int) arr_12 [i_6 - 1] [i_6] [i_6 - 3] [i_9] [5ULL])), (arr_27 [i_6 + 1] [(short)0])))))));
            var_35 += ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)55)), (((((/* implicit */_Bool) 3145879723U)) ? (arr_10 [i_6 - 3] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 11326113194745004513ULL))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        {
                            var_36 += ((/* implicit */unsigned int) arr_10 [i_6 - 3] [i_9] [i_10] [i_11]);
                            var_37 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 439236627U)))))) - (((max((((/* implicit */unsigned long long int) arr_13 [i_6] [i_9] [i_10] [i_11])), (var_17))) ^ (((11291284920275895245ULL) & (1584334526310510936ULL)))))));
                            var_38 += (!(((/* implicit */_Bool) var_6)));
                            arr_35 [i_6] [i_6] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_34 [i_6] [i_6 - 1] [i_6] [i_10] [i_10 + 1])))) ? (arr_10 [i_6] [i_6] [i_10 - 1] [i_12]) : (arr_29 [i_6] [i_9] [i_10]));
                            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 15346689667793055189ULL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_6] [i_13]))))))))));
            arr_38 [i_6] = ((/* implicit */unsigned long long int) var_3);
        }
    }
    var_41 = ((/* implicit */unsigned int) var_17);
}
