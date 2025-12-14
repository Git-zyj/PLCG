/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186170
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))));
        arr_3 [i_0] &= ((/* implicit */_Bool) ((unsigned short) 9223372036854775807LL));
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (short)16751))));
        var_12 *= ((/* implicit */unsigned char) (~((~(var_3)))));
        arr_4 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) -1332390245)) || (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)32768))))));
    }
    var_13 = ((/* implicit */signed char) ((short) ((var_2) / (((/* implicit */long long int) (~(2554548870U)))))));
    var_14 = ((/* implicit */unsigned long long int) ((475651717) & (((/* implicit */int) (short)-6))));
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (short i_2 = 4; i_2 < 10; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    arr_15 [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-((+((+(((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        arr_18 [i_3] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((unsigned short) var_6)), (((/* implicit */unsigned short) var_10)))))));
                        arr_19 [i_1] [1] [1] [i_1] = ((/* implicit */_Bool) (+((~(((/* implicit */int) ((-9223372036854775795LL) <= (9223372036854775791LL))))))));
                        var_15 = ((/* implicit */short) (signed char)50);
                        arr_20 [i_1] [i_1] [11LL] [i_3] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-114))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4165673999U))))) : (-382750429)))) ? (8892528122719586575ULL) : (((/* implicit */unsigned long long int) -2147483626))));
                        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3182195516U)) ? (969986587) : (((/* implicit */int) (unsigned char)232)))))));
                    }
                    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_17 &= ((/* implicit */short) (~((+(((/* implicit */int) (_Bool)1))))));
                        var_18 += ((/* implicit */long long int) (+(((((/* implicit */int) (unsigned char)246)) & (((/* implicit */int) var_9))))));
                        var_19 = ((/* implicit */short) max(((-((+(3902744647U))))), (((/* implicit */unsigned int) -123828141))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) (short)-14847))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        arr_28 [i_1] [i_1] = ((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6 - 1]);
                        arr_29 [i_6 + 1] [9] [9] [i_2] [i_2] [i_1] = ((/* implicit */int) 4294934528U);
                        var_21 = (short)-20343;
                    }
                    var_22 = ((/* implicit */unsigned long long int) (short)14443);
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((long long int) ((short) min((var_5), (((/* implicit */unsigned int) var_6)))))))));
                            var_24 += (_Bool)1;
                            var_25 = ((/* implicit */unsigned short) (~((~(403011792149472012LL)))));
                            var_26 = ((/* implicit */_Bool) (unsigned short)15493);
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 2; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            arr_40 [12] [12] [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (-(var_7)))) : ((-(var_1)))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (_Bool)0))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2] [12LL])) == (((/* implicit */int) (unsigned short)40896))))) % ((~(((/* implicit */int) (unsigned char)44))))));
                            arr_41 [i_1] [i_1] [i_1] [i_7] [i_7] = var_8;
                            arr_42 [i_1] [i_2] [i_3] [i_7] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-21686))));
                        }
                        var_29 = ((/* implicit */short) (~(((/* implicit */int) (short)-4))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (~(((arr_32 [i_2 - 2] [i_2] [i_2 - 4] [i_2 - 3]) | (((/* implicit */unsigned long long int) 807558640U)))))))));
                            arr_47 [i_10] [i_7] [i_7] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_10] [i_1] [i_3] [i_2 + 3] [i_1] [i_1])) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) -108969366131514368LL)))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) 1023329058U)) && (((/* implicit */_Bool) arr_37 [i_1] [i_2] [i_3] [i_7] [i_10])))))))));
                        }
                    }
                    for (short i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        arr_50 [i_1] [5] [i_2] [i_3] [i_3] [i_11] = ((/* implicit */unsigned short) var_3);
                        var_31 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)21939));
                    }
                }
            } 
        } 
    } 
}
