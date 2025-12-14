/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186684
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
    var_15 *= ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned long long int) 18446744073709551615ULL)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))) : (var_14)));
            var_16 &= max((((/* implicit */unsigned long long int) (unsigned char)110)), (min((16909852586344040164ULL), (((/* implicit */unsigned long long int) 2277052859U)))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 4; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_4))) : (min((((var_11) ^ (((/* implicit */unsigned long long int) -7028452998334493900LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-5)))))))));
                        arr_12 [(unsigned short)10] [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) (short)10907)), (18446744073709551615ULL)))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((0U), (((/* implicit */unsigned int) var_9)))) << (((((/* implicit */_Bool) (short)-25475)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-16))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)-25475)))))))) : (((((/* implicit */unsigned long long int) (~(4294967295U)))) | (((unsigned long long int) 11115468542345851349ULL)))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
            {
                arr_19 [i_0] [i_4] [(unsigned short)10] [(unsigned char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5976))) : ((-(17032288681708757598ULL)))));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)95)) ? (10191530686002965068ULL) : (44313004666422122ULL))))));
                        arr_25 [i_0 + 1] [i_0] [i_0 + 1] [i_7] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned char)36))))));
                        arr_26 [i_0] [i_0] [i_0] [i_6] [i_0] [i_6] [i_4] = ((/* implicit */long long int) (-(6539361176847269650ULL)));
                    }
                    arr_27 [i_0] [i_5 - 1] [i_5] [i_5] = ((/* implicit */signed char) (short)3023);
                    var_19 -= ((/* implicit */unsigned char) (unsigned short)15581);
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_20 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned short)49355)) % (((/* implicit */int) var_4))));
                        arr_30 [i_0] [i_0] [i_5] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) - (((unsigned long long int) (short)9809))));
                    }
                }
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_33 [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned short) (short)-25475);
                /* LoopSeq 1 */
                for (unsigned int i_10 = 3; i_10 < 20; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 4) 
                    {
                        arr_41 [i_0] = ((((/* implicit */_Bool) ((18446744073709551609ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1982)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_11));
                        arr_42 [i_0] [i_0] [i_0] [(unsigned char)3] [i_11 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 3801133422U)) ? (16109926447355577940ULL) : (((/* implicit */unsigned long long int) 18014398509481983LL)))) : ((-(12392702617852769829ULL)))));
                    }
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                }
            }
            arr_43 [i_0] [(unsigned short)12] = ((/* implicit */unsigned long long int) (!(((var_10) >= (((/* implicit */unsigned long long int) 7168831772762753667LL))))));
            var_22 = ((/* implicit */unsigned short) (-(18446744073709551605ULL)));
        }
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((var_7) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) 1048576U)) * (var_8))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_9)))))))));
    }
}
