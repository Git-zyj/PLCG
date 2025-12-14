/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172130
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
    var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1)))));
    var_14 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (!(((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (2730832031032393184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
        var_15 *= ((/* implicit */int) (signed char)111);
        arr_4 [i_0] = (+(((/* implicit */int) (!((_Bool)1)))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2 + 1])))) ? ((~(arr_5 [i_1] [i_2]))) : (((/* implicit */unsigned int) arr_6 [i_1]))))) ? (((unsigned int) var_0)) : (arr_5 [i_1] [i_1])));
            arr_12 [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((long long int) arr_7 [i_2 + 1] [i_2 + 1])) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_2 + 1] [i_2 + 1]))))));
            var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_2]))))) ? ((+(((/* implicit */int) arr_7 [i_2 + 1] [i_1])))) : ((-(((/* implicit */int) (signed char)24))))));
        }
        arr_13 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((var_3), (arr_10 [i_1] [i_1]))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((arr_9 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) 1281646843))))) >= (max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1])), (var_12)))));
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_19 = ((/* implicit */signed char) (~((+((~(arr_8 [i_3])))))));
        arr_16 [i_3] = ((/* implicit */signed char) arr_11 [i_3] [i_3]);
    }
    for (short i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))));
            arr_21 [i_4] [i_4] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_5] [i_4]))));
        }
        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_21 = ((/* implicit */signed char) (~(arr_11 [i_6] [i_6])));
            var_22 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) -1264365529037756093LL)) ? (-43410168412542818LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57625))))));
            arr_24 [i_6] = (~(((/* implicit */int) ((((/* implicit */int) var_4)) >= ((~(877869848)))))));
            arr_25 [i_6] [i_4] = ((/* implicit */short) (((~(((/* implicit */int) arr_18 [i_6])))) >= (((/* implicit */int) arr_17 [i_4 + 1] [i_6]))));
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            var_23 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) 3674227851U)) : ((((!(arr_7 [i_4] [i_7]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967283U)))))) : (var_12)))));
        }
        for (short i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            var_25 = ((/* implicit */long long int) arr_27 [i_4 + 1] [i_4] [i_4]);
            arr_32 [i_4] [i_8] [i_8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_10 [i_4] [i_8])), (((((/* implicit */_Bool) arr_6 [i_4])) ? (arr_11 [i_8] [i_8]) : (((/* implicit */int) (unsigned short)51445)))))))));
        }
        var_26 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) 381490113)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))), (((arr_7 [i_4 + 1] [i_4]) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) var_2)))))) >= (((/* implicit */int) arr_7 [i_4 - 1] [i_4]))));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) var_7))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) >= (arr_9 [i_4] [18U] [i_4 + 1])));
    }
    /* LoopSeq 2 */
    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
    {
        var_29 += ((/* implicit */signed char) (!(var_0)));
        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) 633826604U)))));
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            var_31 = ((/* implicit */long long int) var_10);
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (-((~(min((604727756U), (((/* implicit */unsigned int) arr_6 [i_10])))))))))));
        }
    }
    for (signed char i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
    {
        var_33 = ((((/* implicit */_Bool) arr_9 [i_11] [i_11] [i_11])) ? (((((/* implicit */_Bool) 26U)) ? (((arr_8 [i_11]) | (((/* implicit */long long int) 631465477U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_34 [i_11])) ? (3885573916U) : (734287196U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_34 [i_11])), (arr_35 [i_11]))))))));
        arr_39 [i_11] = ((/* implicit */_Bool) -5049049215916485374LL);
    }
    var_34 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) (unsigned short)40743)))), ((~(((/* implicit */int) min((((/* implicit */short) (signed char)90)), (var_2))))))));
}
