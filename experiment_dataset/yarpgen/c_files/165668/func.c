/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165668
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (unsigned char)111;
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            arr_6 [(signed char)3] [(signed char)3] [(signed char)3] = (_Bool)1;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            arr_13 [i_3] [i_1 - 1] [i_2] [i_1 - 1] [i_3] = ((/* implicit */unsigned char) arr_1 [i_0]);
                            arr_14 [i_4] &= ((/* implicit */long long int) (_Bool)1);
                            arr_15 [i_3] [i_0] [i_3] [i_2 - 1] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)239)) & ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_0] = ((/* implicit */_Bool) 4703141975424060807ULL);
        }
        for (short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            arr_19 [i_0] = ((/* implicit */short) -1924415399);
            arr_20 [(unsigned short)22] [i_5] [i_0] = ((/* implicit */long long int) ((var_16) ? ((-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) + (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 11049758866067652330ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5)))))))));
            arr_21 [i_0] [i_0] [i_5] = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)65))))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
        }
        arr_22 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-((((_Bool)1) ? (var_13) : (((/* implicit */unsigned long long int) 697565076578514190LL))))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) (signed char)42)), (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)28346)) ^ (((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 1; i_7 < 22; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        arr_32 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (697565076578514190LL))), (((/* implicit */long long int) min((max((((/* implicit */int) (signed char)40)), (-1048576))), (((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) arr_11 [i_6] [i_7])) : (((/* implicit */int) (_Bool)1)))))))));
                        arr_33 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_9 [i_7] [i_6])))))));
                        arr_34 [i_7] [i_7] [(_Bool)1] = ((/* implicit */unsigned long long int) (unsigned short)42715);
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                arr_39 [i_7] [i_7 - 1] [i_7] = ((/* implicit */short) (unsigned short)48714);
                arr_40 [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_30 [i_7] [i_7 + 1] [i_7 + 1] [i_7]);
            }
        }
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                for (unsigned char i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    {
                        arr_52 [i_6] [i_11] [i_12] [i_11] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (1210659021U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (((((/* implicit */_Bool) 11021488498762532936ULL)) ? (((/* implicit */int) (short)6720)) : (((/* implicit */int) (short)28996)))) : (((((/* implicit */_Bool) arr_45 [i_6] [i_11] [i_13])) ? (((/* implicit */int) (short)-28997)) : (((/* implicit */int) (_Bool)1))))));
                        arr_53 [i_13] [i_12] [i_13] [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */int) min(((short)-6720), (arr_18 [i_6] [i_6])))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-29439))))) ? (((/* implicit */int) (unsigned short)24701)) : (((/* implicit */int) min(((short)-6718), (((/* implicit */short) (unsigned char)253)))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
    {
        arr_58 [i_14] = ((/* implicit */unsigned int) (+(1048576)));
        arr_59 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (unsigned char)224)) : (-1048559)));
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
    {
        arr_62 [i_15] [i_15] = ((((/* implicit */_Bool) 978159356U)) ? (1684278137) : (((/* implicit */int) (_Bool)1)));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                {
                    arr_68 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_17 + 1])) ? (((/* implicit */int) arr_43 [i_17 + 1] [i_16] [i_16])) : (((/* implicit */int) (signed char)127))));
                    arr_69 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32736))) + (452186426U)));
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 23; i_19 += 2) 
                        {
                            {
                                arr_75 [i_15] [i_15] [i_15] [i_15] [i_15] [i_18] [0U] = (-(-1048577));
                                arr_76 [i_15] [i_15] [i_18] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (short)11587)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11582))) : (4194303U)));
                                arr_77 [(_Bool)1] [i_19] [i_19] [i_19] [i_19] [i_15] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)70))));
                            }
                        } 
                    } 
                    arr_78 [i_15] [i_15] [i_15] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1048575)) ? (((/* implicit */int) (short)6720)) : (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) 2147479552U)) ? (((/* implicit */unsigned long long int) 4194280U)) : (arr_7 [i_17 + 1] [i_16] [i_15])))));
                }
            } 
        } 
        arr_79 [i_15] [(unsigned short)10] = ((/* implicit */unsigned char) 4194303U);
        arr_80 [i_15] [i_15] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-6720)) ? (((/* implicit */int) (short)31028)) : (((/* implicit */int) (short)6696)))));
    }
    var_18 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (3231071878U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) (signed char)66)) : (max((-1048562), (((/* implicit */int) (unsigned char)167)))))), (((/* implicit */int) ((1446761225U) > (((/* implicit */unsigned int) var_6))))));
}
