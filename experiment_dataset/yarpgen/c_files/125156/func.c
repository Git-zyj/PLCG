/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125156
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (3149933186U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32756)))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
            {
                arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (((((_Bool)1) ? (max((18446744073709551600ULL), (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) & (((/* implicit */unsigned long long int) 4294967295U))));
                arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((short)32767), (((/* implicit */short) (signed char)16))))), (10336876468648871215ULL)))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_0 - 3])))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-32766)) : (arr_8 [i_2] [i_1] [i_0 - 2])))));
                arr_11 [i_0] [i_2] [i_0] [6ULL] = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_12 [i_0] [i_2] [i_2] [i_0 - 3] = ((/* implicit */unsigned int) ((max((arr_4 [i_2 + 2] [i_2 - 1] [i_2 + 2]), (arr_4 [i_2] [i_2] [i_2 + 2]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32746)) ? (var_4) : (((/* implicit */long long int) arr_3 [i_0 - 2])))))));
            }
            /* vectorizable */
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) /* same iter space */
            {
                var_12 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)32750))))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 + 2]))) | (2749323045U)))));
                var_13 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-127))));
                var_14 = ((/* implicit */short) ((((/* implicit */int) (short)-32752)) % (arr_8 [i_0 - 3] [i_0 + 1] [i_3 + 1])));
            }
            for (short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_15 ^= (~(max((((/* implicit */unsigned int) 20)), (2749323045U))));
                var_16 ^= ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (short)-32761)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1]))) : (1519360325U))))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (((unsigned long long int) 13317162649497217768ULL))))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                var_17 = ((/* implicit */_Bool) arr_16 [i_0 + 1]);
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 + 1]))) : (4940489755786909414ULL)));
            }
            var_19 &= ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_1]);
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                arr_25 [i_0] [i_0] [i_0] = max((((/* implicit */unsigned long long int) (short)-21646)), ((((((_Bool)0) ? (((/* implicit */unsigned long long int) 4294967295U)) : (10251194852945680409ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10794))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) arr_6 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32760))) : (var_3))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (min((((/* implicit */int) var_9)), (((arr_19 [i_9] [i_8] [i_7] [(_Bool)1]) ? (arr_16 [i_7]) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) (short)-32760))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 20; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 18; i_11 += 4) 
                    {
                        {
                            arr_36 [i_0] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_6] [i_7])) ? (((((/* implicit */_Bool) arr_35 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_26 [i_0] [i_11 - 2] [i_0 - 3]))) : (arr_3 [i_0 - 3])));
                            arr_37 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_10 - 1] [6ULL]);
                        }
                    } 
                } 
            }
            for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((arr_21 [i_12]) == (((/* implicit */int) arr_17 [i_12] [i_6] [i_0 + 1])))) ? (((((/* implicit */unsigned long long int) arr_39 [i_0] [i_6] [i_0])) & (1430343772417120111ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_12] [(unsigned short)17] [i_0] [i_0 + 1])) + (arr_8 [i_0 + 1] [i_6] [i_12])))))) ^ (((((/* implicit */unsigned long long int) (-2147483647 - 1))) + (0ULL))))))));
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_20 [i_0] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10799))))))));
            }
            var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_6] [i_6] [i_6]))) | (arr_20 [13U] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (4294967295U)))) ? (max((max((arr_26 [i_0] [(_Bool)1] [7ULL]), (2749323045U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)32749))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14068)))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_6])), (4294967269U)))))));
            arr_41 [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)0))))), ((-(((arr_15 [(_Bool)1] [(_Bool)1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91)))))))));
        }
        var_26 = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) arr_15 [i_0 - 1] [i_0 + 1])));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_45 [i_13] [i_13] = ((/* implicit */_Bool) 16909956509762246526ULL);
        /* LoopSeq 1 */
        for (unsigned short i_14 = 2; i_14 < 23; i_14 += 3) 
        {
            arr_49 [i_13] [i_13] [i_14] = ((((/* implicit */int) min((((/* implicit */short) (signed char)61)), ((short)10794)))) | (min((((((/* implicit */_Bool) arr_43 [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)214)))), (((2147483647) & (((/* implicit */int) (short)10794)))))));
            arr_50 [i_14] [i_14] = ((/* implicit */unsigned short) (_Bool)1);
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_15 = 1; i_15 < 20; i_15 += 2) 
    {
        var_27 &= ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)32739)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) arr_4 [i_15 + 1] [i_15] [i_15 + 1])) ? (max((((/* implicit */unsigned long long int) arr_43 [23ULL])), (1536787563947305089ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_42 [i_15]) <= (((/* implicit */long long int) ((/* implicit */int) var_8))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_43 [i_15])))))))));
        arr_53 [i_15] = ((/* implicit */signed char) arr_16 [i_15 + 1]);
    }
}
