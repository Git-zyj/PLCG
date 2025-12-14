/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113638
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((signed char) var_5));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 - 2])))))));
                }
                for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) 3U);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 3] [i_3 - 1] [i_3]))) > (3U)));
                    var_24 = ((/* implicit */unsigned short) arr_6 [i_3 + 1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */int) (signed char)10)) == (((/* implicit */int) (short)(-32767 - 1)))))))) ? ((~(((/* implicit */int) arr_3 [11ULL] [i_1 - 1] [i_3 + 1])))) : (((((/* implicit */int) (_Bool)1)) >> (((480LL) - (474LL)))))));
                                var_26 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (7)))))) && (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_12))))))));
                                var_27 ^= ((/* implicit */int) ((11319494559199630166ULL) << (((/* implicit */int) ((((/* implicit */_Bool) (short)1055)) || (((/* implicit */_Bool) (short)1074)))))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1051)) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 3] [i_1 + 1] [i_1 + 1]))) < (-4056312670355813182LL))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 4) 
                        {
                            {
                                arr_27 [i_8] [i_1] [i_1] [i_1] &= ((/* implicit */short) (signed char)49);
                                var_29 = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_6] [i_8])) >= (((/* implicit */int) var_19))))))));
                                arr_28 [i_6] [i_1] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) != (((/* implicit */int) (_Bool)1))))) < (((/* implicit */int) (signed char)1))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) ((signed char) ((170818147) > (1559716601))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) var_5);
                                arr_36 [i_6] [i_1] [i_1] [i_9] [i_10] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (short)-1506)))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 2] [i_1 - 1])) ? (((arr_34 [(signed char)6] [(signed char)6] [i_6] [i_1] [i_6] [(signed char)6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (1229695272669657217ULL))))) != (((/* implicit */unsigned long long int) ((-7971174697342371444LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))))));
                }
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 224)) ? (((((/* implicit */_Bool) arr_19 [6LL] [i_1] [i_0] [6LL])) ? (arr_30 [(short)12]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20581))) < (var_3)))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1489)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_19))))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) + (-9223372036854775792LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_25 [0U] [i_1 - 1] [0U])))))));
            }
        } 
    } 
    var_34 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (1241544293))) != (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1082)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_16)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1506)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
    {
        arr_39 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_37 [i_11] [i_11])) : (((/* implicit */int) arr_38 [i_11]))))) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) var_12))));
        var_35 -= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) == (-2147483629))));
    }
    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((var_8) << (((((/* implicit */int) (unsigned char)22)) - (22))))))))));
}
