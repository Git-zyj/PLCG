/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118397
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_11 &= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) min((var_9), (var_9))))))), (max((arr_3 [i_1] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_1])))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_12 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))));
                    var_13 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1654697275U))))));
                }
                for (int i_3 = 4; i_3 < 23; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 4; i_4 < 22; i_4 += 2) 
                    {
                        for (int i_5 = 1; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_14 += ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-111))) | (arr_7 [0ULL] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) & (6044043456260245704ULL)))))))) : (min((((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) arr_5 [9LL] [i_1] [i_3 - 2] [i_4])))), (min((var_0), (var_0))))));
                                arr_12 [i_0] [i_0] [i_1] [i_1] [10LL] [i_4] [i_5] = ((/* implicit */int) ((unsigned int) (_Bool)1));
                                var_15 = ((/* implicit */long long int) ((int) min((((/* implicit */long long int) ((arr_6 [4] [i_1] [(unsigned char)9] [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_1]))))), ((~(var_0))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */long long int) arr_2 [i_3 - 2] [i_0])), (arr_11 [i_3 - 3] [i_1] [i_0] [i_1] [i_3] [i_3] [i_1]))) : (min((var_7), (((/* implicit */long long int) ((signed char) var_10))))))))));
                    arr_13 [i_3 - 2] = ((/* implicit */unsigned short) (short)2);
                    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (arr_5 [i_3 - 1] [i_3 - 2] [i_3 - 4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                }
                for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (-4079016063702167580LL) : (((/* implicit */long long int) 856826480))))) ? (((((/* implicit */_Bool) (unsigned short)27682)) ? (((/* implicit */int) (short)-1778)) : (((/* implicit */int) (unsigned char)231)))) : ((~(((/* implicit */int) ((6044043456260245709ULL) >= (((/* implicit */unsigned long long int) -1642728254)))))))));
                        arr_21 [(_Bool)1] [i_1] [i_6] [i_7] = ((/* implicit */unsigned int) (+(((min((-601877692623575000LL), (var_7))) | (((/* implicit */long long int) arr_3 [i_7] [i_6 - 1] [i_1]))))));
                        arr_22 [i_6 - 1] = ((var_2) ? (min((((/* implicit */long long int) ((unsigned short) arr_17 [i_0] [i_6] [i_7]))), ((+(var_10))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_8))))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (-((~(arr_9 [i_8] [i_8] [i_6] [i_1] [(_Bool)1]))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [i_6 - 1] [i_1] [i_9]);
                            arr_30 [14U] [i_8] = ((/* implicit */signed char) ((856826480) < (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) (!(var_4)))))));
                            arr_34 [i_1] [i_6] [i_8] [i_10] = var_9;
                        }
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)122))))));
                            arr_37 [i_11] [22U] [i_8] [i_8] [i_1] [i_0] = ((((/* implicit */_Bool) (-(11089596375037323435ULL)))) ? (-4239619142652873530LL) : (((/* implicit */long long int) ((((/* implicit */int) (short)-2)) + (((/* implicit */int) arr_35 [i_0] [i_1] [16U] [i_8] [i_8]))))));
                            arr_38 [i_0] [i_1] [i_0] [i_8] [i_8] [i_11] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((long long int) 1157950226416927360ULL)) : (((/* implicit */long long int) 1714130624U))));
                        }
                        var_23 = ((/* implicit */long long int) min((var_23), (var_1)));
                    }
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)-13))));
                    var_25 = ((/* implicit */int) (+(arr_29 [i_0])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_12 = 1; i_12 < 22; i_12 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((short) ((unsigned short) 473633220610366425LL)));
                        arr_43 [i_12] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)(-127 - 1))))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (var_6)))));
                    }
                }
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (short)23692))))), (min((((/* implicit */long long int) var_6)), (arr_42 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1052271724)) && (((/* implicit */_Bool) (~(1052271724)))))))) : (((unsigned long long int) (unsigned char)0)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -856826481)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))), ((~(((((/* implicit */_Bool) 1642728254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (8796093022207ULL)))))));
    var_29 = ((/* implicit */short) ((((((_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) < ((-((-(504LL)))))));
}
