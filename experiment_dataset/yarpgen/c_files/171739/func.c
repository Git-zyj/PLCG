/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171739
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [(unsigned char)6] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1195606043U)))))))) ? (((/* implicit */long long int) 1195606043U)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) - ((((_Bool)0) ? (8369216552891682824LL) : (((/* implicit */long long int) 64135938))))))));
            var_20 -= ((/* implicit */short) arr_1 [i_0] [(short)6]);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 64135938)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0]))))) : ((+(var_8)))));
                arr_14 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) 64135938)) && ((_Bool)1)))) : (((/* implicit */int) ((unsigned char) (signed char)-45)))));
            }
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                arr_17 [i_0] [i_2] [i_0] &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2]))) != (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) : (arr_0 [i_0] [i_2])))));
                var_21 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4])) * (((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))))))));
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (4294959104U))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (var_8)))));
            }
            arr_19 [i_2] [i_2] &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
            arr_20 [i_0] [i_0] [12U] = arr_11 [i_0] [i_2];
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) 7168U))));
        }
        for (signed char i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)-35)), (8630346018047429642ULL)));
            var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) ((arr_4 [i_0] [i_5]) >> (((((/* implicit */int) var_3)) - (99))))))), ((+(((/* implicit */int) ((short) var_16)))))));
        }
        /* vectorizable */
        for (signed char i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
        {
            var_25 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) -394713654)) ? (((/* implicit */int) (short)-26049)) : (((/* implicit */int) arr_25 [i_6] [(signed char)4] [i_6])))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))) < (arr_8 [i_6] [i_6] [i_6]))) ? (arr_28 [i_6 - 1] [(short)14]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)32))))))))));
                        var_27 = arr_2 [(_Bool)1];
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_0] [i_6 - 1] [i_7])) ? (((arr_8 [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                    }
                } 
            } 
            arr_33 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_28 [14LL] [i_0]))));
            /* LoopNest 2 */
            for (short i_9 = 2; i_9 < 11; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    {
                        arr_38 [i_9] [i_9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_19) + (arr_23 [i_0 - 1] [i_0])));
                        arr_39 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) 9816398055662121974ULL)))));
                    }
                } 
            } 
            arr_40 [i_0] [i_0] = arr_37 [i_0] [i_0] [i_6];
        }
        arr_41 [i_0] = ((/* implicit */short) (-(4294959099U)));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_44 [(short)0] &= ((/* implicit */short) ((((((/* implicit */int) var_9)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))) - (((/* implicit */int) (short)0))));
        var_29 = ((/* implicit */unsigned long long int) ((((((var_4) ? (((/* implicit */int) arr_29 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_43 [i_11])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_11] [i_11]))))))) <= (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)131)) && (((/* implicit */_Bool) arr_22 [i_11] [i_11]))))))));
    }
    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 3) 
        {
            for (unsigned char i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                {
                    arr_53 [i_13] = ((/* implicit */unsigned int) var_1);
                    var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_16))));
                    arr_54 [i_13] = ((/* implicit */long long int) (+((+(((/* implicit */int) var_4))))));
                }
            } 
        } 
        arr_55 [i_12] [i_12] = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
        arr_56 [(signed char)0] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_12] [i_12])) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_45 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_12] [i_12] [i_12] [i_12]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_12] [i_12] [i_12] [i_12]))))) <= (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_52 [i_12] [i_12] [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1))))) : (max((arr_21 [i_12]), (arr_21 [i_12]))))))));
    }
    var_31 = ((short) min((((/* implicit */signed char) (!(var_4)))), (((signed char) var_0))));
    var_32 -= ((/* implicit */unsigned char) var_17);
    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) 6522502629838372452LL))));
    var_34 = ((/* implicit */unsigned short) 6522502629838372460LL);
}
