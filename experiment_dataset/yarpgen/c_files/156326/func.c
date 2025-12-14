/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156326
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
    var_12 = ((/* implicit */short) min(((+((-(((/* implicit */int) var_4)))))), (((((_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : ((((_Bool)1) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((arr_4 [i_1] [i_3]) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)35))))))) ? (min((((607551842U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_7))))) : (max((((/* implicit */unsigned int) var_9)), (var_7))))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_4 [i_3] [i_3]) ? (var_8) : (3687415454U))) != (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_8))))))) : (((unsigned long long int) (short)-26221))));
                                arr_13 [i_0] [i_1] [i_0] [i_0] = (+(((-1959025118) - (((/* implicit */int) (unsigned short)20492)))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((607551845U) > (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 607551842U)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)239))))) - (((((/* implicit */_Bool) 3687415434U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                {
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) != (arr_7 [i_0] [i_1] [i_5])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) arr_19 [i_6] [i_5] [i_1] [i_0])) : (((/* implicit */int) var_6))));
                        arr_22 [i_0] [i_6] [i_0] [i_6] [i_5] [i_6] = ((/* implicit */signed char) (((_Bool)1) ? (17380262771130878968ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239)))));
                        arr_23 [i_0] [i_5] [i_1] [i_0] = ((/* implicit */int) ((unsigned short) arr_16 [i_1] [i_0]));
                    }
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) (unsigned char)4);
                            var_17 = ((/* implicit */int) max((var_17), (((((((/* implicit */_Bool) 365833349U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)24)))) << ((((~(((/* implicit */int) var_9)))) + (30270)))))));
                        }
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11)))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)25646)) > (((/* implicit */int) arr_2 [i_0] [i_10]))));
                        arr_39 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11187252194222849192ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) : (607551842U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)14659))) & (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_1] [i_7] [i_0]))));
                        var_20 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_7] [i_10])) || (((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (arr_1 [i_7] [i_1]))))));
                    }
                    var_22 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                    arr_40 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (+(206248046)));
                }
                for (long long int i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
                {
                    arr_43 [i_0] [i_1] [i_0] = max((((unsigned long long int) (~(((/* implicit */int) (unsigned char)5))))), (((/* implicit */unsigned long long int) ((((-2047901304) > (((/* implicit */int) var_4)))) ? (((((/* implicit */_Bool) (short)-1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_41 [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_1])))))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_1] [i_0])) ? (arr_35 [i_0] [i_11] [i_1] [i_0]) : (arr_35 [11ULL] [i_1] [i_11] [i_0])))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) (+((-(arr_25 [i_0] [i_1] [i_11]))))))));
                }
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    var_24 += ((/* implicit */short) ((((/* implicit */_Bool) (~(var_11)))) || (((/* implicit */_Bool) (-(1163213919483278574ULL))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(18446744073709551611ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (((((/* implicit */_Bool) (unsigned short)7762)) ? (16490376630821840977ULL) : (((/* implicit */unsigned long long int) var_11))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_13 = 1; i_13 < 23; i_13 += 2) 
    {
        for (int i_14 = 0; i_14 < 24; i_14 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    for (signed char i_16 = 1; i_16 < 22; i_16 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)114)), (arr_51 [22U] [i_15]))))) : ((~(35184372088832ULL))))) : (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)0)))))))));
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)50)))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57775))) : (3687415454U)))) ? (var_8) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                arr_56 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((max((((long long int) var_4)), (((/* implicit */long long int) arr_53 [i_13 - 1] [i_14] [i_14] [i_13 - 1] [i_14] [i_14])))) < (((/* implicit */long long int) 955955525))));
            }
        } 
    } 
}
