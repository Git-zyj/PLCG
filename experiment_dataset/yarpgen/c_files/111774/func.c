/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111774
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52001))) : (arr_3 [i_0 - 1] [i_0 - 1])))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5461319987759012033LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9ULL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) 134217664U)))))) : (((((/* implicit */_Bool) ((unsigned short) 66977792))) ? (((var_18) / (((/* implicit */long long int) 4160749621U)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)0)))))))))));
    }
    /* LoopSeq 4 */
    for (int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_20 = ((((((/* implicit */_Bool) (+(var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) == (-1848718080))))) : (-5461319987759012043LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))));
        var_21 += ((/* implicit */long long int) ((((((/* implicit */_Bool) 257551347)) && ((!(((/* implicit */_Bool) var_18)))))) || (((/* implicit */_Bool) 524160))));
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) (~(0)));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2])) ? ((-(var_8))) : (((((/* implicit */_Bool) -707597492)) ? (arr_3 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_2))))) ? (max((18097862267385061111ULL), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) (+(var_8))))));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
    {
        var_24 |= ((/* implicit */unsigned short) ((long long int) 4160749639U));
        var_25 = ((/* implicit */unsigned short) (-(((524164) >> (((((/* implicit */int) (unsigned short)17245)) - (17222)))))));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ^ (arr_1 [i_3])))));
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            for (int i_6 = 1; i_6 < 9; i_6 += 3) 
            {
                {
                    arr_24 [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_13);
                    arr_25 [10] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((((+(((/* implicit */int) var_9)))) / (((/* implicit */int) ((unsigned char) var_15))))) : (min((((/* implicit */int) (unsigned short)51838)), (((((/* implicit */_Bool) var_16)) ? (-755130156) : (((/* implicit */int) var_11))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */int) var_11);
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_16))) & (var_4)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7]))) : (var_7))) : (((/* implicit */long long int) min((arr_26 [i_4] [i_4]), (((/* implicit */int) arr_28 [i_4]))))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
            arr_29 [i_4] [i_4] [i_4] |= (unsigned char)139;
            var_28 = ((/* implicit */int) (+(134217664U)));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_9 = 2; i_9 < 8; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        {
                            arr_40 [i_9] [i_9] [i_9] [(unsigned short)10] [i_9] [i_10] = var_10;
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -755130156)) > (134217654U)));
                            var_30 = ((int) (unsigned short)45690);
                            var_31 = ((/* implicit */long long int) ((unsigned int) max((((((/* implicit */unsigned long long int) var_4)) == (arr_23 [i_4] [i_8] [i_9 + 1]))), ((!(((/* implicit */_Bool) var_1)))))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_31 [i_4] [i_8])), (arr_32 [i_4] [i_4] [i_8])))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_5)))))))) ? (max((((/* implicit */unsigned long long int) (-(9106090496156607237LL)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_23 [i_4] [i_4] [i_8]))))) : (((((/* implicit */_Bool) ((var_14) * (348881806324490522ULL)))) ? (((/* implicit */unsigned long long int) ((int) (unsigned short)13519))) : ((+(var_17)))))));
            var_33 = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((((/* implicit */_Bool) 3893572925206970797LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) 707597492)) ? (arr_23 [i_4] [i_4] [i_8]) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134217674U)) ? (178582692U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
        }
    }
}
