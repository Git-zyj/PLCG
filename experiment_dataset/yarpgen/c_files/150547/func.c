/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150547
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
    var_15 &= ((/* implicit */long long int) (unsigned short)1024);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (max((3008320300U), (((/* implicit */unsigned int) (short)-21934)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (signed char)-52))))))))) ? (((((5627158062787476202ULL) >= (12819586010922075417ULL))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((5627158062787476202ULL) <= (3ULL)))))) : (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)31687)))) == ((~(((/* implicit */int) (signed char)(-127 - 1))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((short) -1028310890);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */short) var_8);
                            arr_13 [i_0] [i_3 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (13583956169225412905ULL))))))) ? (((((/* implicit */int) var_8)) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))) : (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) var_12))) - (28)))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_0] [13LL] [i_4] = ((/* implicit */unsigned char) (_Bool)0);
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(min((((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)-97)))), (((((/* implicit */int) arr_12 [i_0] [10ULL] [i_4])) ^ (-1572568836))))))))));
                                var_20 = ((/* implicit */long long int) var_8);
                                arr_17 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((1137829855) >> (((((/* implicit */int) (short)-17019)) + (17046)))));
                            }
                            arr_18 [i_0] [i_3] [i_0] [i_3] [i_0] [i_1] &= ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) 218507379)) ? (12819586010922075414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))))) >> ((((((_Bool)1) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) (signed char)-96)))) + (63))))));
                            var_21 = (i_0 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((arr_0 [i_0]) + (((/* implicit */int) (short)0)))) << (((((((/* implicit */int) var_11)) + (7440))) - (27)))))) || (((/* implicit */_Bool) ((short) (unsigned short)15)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((arr_0 [i_0]) + (((/* implicit */int) (short)0)))) << (((((((((/* implicit */int) var_11)) + (7440))) - (27))) - (1)))))) || (((/* implicit */_Bool) ((short) (unsigned short)15))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (long long int i_6 = 2; i_6 < 14; i_6 += 2) 
                    {
                        {
                            arr_23 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */long long int) (-(var_12)));
                            var_22 = ((/* implicit */int) max((var_22), (((((int) ((var_12) <= (((/* implicit */int) var_8))))) & (((/* implicit */int) var_1))))));
                        }
                    } 
                } 
                var_23 *= ((/* implicit */unsigned long long int) max(((((((_Bool)0) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) var_5)))) + (-1583333861))), (((/* implicit */int) (unsigned short)1792))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (long long int i_9 = 4; i_9 < 24; i_9 += 2) 
            {
                for (signed char i_10 = 1; i_10 < 23; i_10 += 2) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-10735)) : (((/* implicit */int) (unsigned short)13532))));
                        arr_37 [i_8] [i_9 - 1] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10723)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_31 [i_7] [i_7])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) << (((var_14) - (15446969432485339268ULL)))))) : (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */long long int) -1028310880)) : (1618403962597994306LL)))));
                        arr_38 [i_7] [i_8] [i_7] [i_10] [i_7] = ((/* implicit */short) (_Bool)1);
                        arr_39 [i_7] [i_8] [(unsigned short)3] [i_8] [23] [i_8] = ((/* implicit */_Bool) var_6);
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) var_6)) | ((~(arr_30 [(unsigned short)24]))))))));
    }
    var_26 = ((/* implicit */unsigned char) min(((~(((var_13) * (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (3258922237U) : (((/* implicit */unsigned int) ((int) var_4))))))));
}
