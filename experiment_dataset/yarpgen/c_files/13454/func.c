/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13454
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_17))))) ? (var_4) : (min((((/* implicit */unsigned long long int) min((814589069U), (((/* implicit */unsigned int) (unsigned char)111))))), ((-(var_0)))))));
    var_19 = ((/* implicit */_Bool) ((unsigned int) var_8));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) 1850385621367437149LL))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)2902)) || (((/* implicit */_Bool) (unsigned char)28))))))), (((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (((/* implicit */_Bool) var_9)))))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_0))));
    }
    for (int i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 3; i_2 < 23; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (~(-1850385621367437150LL)));
                            arr_16 [i_1] [i_2] [i_3] [i_1] [i_5] = var_9;
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1]))))))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_4]))) : (((((/* implicit */_Bool) ((int) var_11))) ? (min((((/* implicit */unsigned long long int) 1850385621367437136LL)), (arr_13 [i_1] [i_2] [i_1]))) : (((/* implicit */unsigned long long int) 268434944U))))));
                            arr_17 [16] [i_1] [i_2] [(short)21] [(unsigned short)5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 2])) + (((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 1]))))) ? (((/* implicit */int) ((short) arr_14 [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 1]))) : (((/* implicit */int) max((arr_14 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1]), (arr_14 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 2]))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (((((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_3])) ? (var_10) : (arr_13 [i_1] [i_1] [i_3])))))));
            }
            for (short i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_6] [(unsigned short)9])) ? (arr_22 [i_1 + 1] [(_Bool)1] [i_1 + 1] [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 - 2] [i_2] [i_1 - 2] [i_7]))))))), ((-(((/* implicit */int) var_14))))));
                            var_27 = ((/* implicit */long long int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 + 1] [i_1] [i_2 + 1]))) : ((~(-1850385621367437150LL))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) (~(max((-1850385621367437150LL), (((/* implicit */long long int) (unsigned short)30514))))));
                var_29 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) arr_19 [12] [12] [12])) ? (var_13) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))))));
            }
            for (unsigned short i_9 = 1; i_9 < 24; i_9 += 2) 
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (1327372373U)))) * (min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_9] [i_2 - 1] [i_2 - 1] [i_2] [i_1])), (var_0)))))) ? (((((/* implicit */_Bool) (unsigned short)54070)) ? (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_1 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))));
                var_31 = ((((/* implicit */_Bool) (unsigned short)11465)) ? (arr_22 [i_1 + 2] [i_9] [i_9 + 1] [(unsigned short)6] [i_9 + 1]) : (((/* implicit */unsigned long long int) 86717994U)));
            }
            arr_27 [12ULL] [(_Bool)1] &= ((/* implicit */unsigned short) (!((!(arr_15 [i_1 - 1] [i_2 - 3] [i_1 - 1])))));
            arr_28 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 0)) ? (1850385621367437150LL) : (-1850385621367437151LL))), (((/* implicit */long long int) arr_15 [i_1] [(unsigned short)6] [i_1]))));
            var_32 = (unsigned short)65535;
            arr_29 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (unsigned short)12969))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max(((unsigned short)52567), (((/* implicit */unsigned short) (unsigned char)128))))))) : (((/* implicit */int) var_16)));
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                {
                    var_33 ^= ((/* implicit */long long int) var_0);
                    var_34 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [18] [i_1 + 2] [i_1 - 1])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_1] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) var_1))))));
                    var_35 &= ((/* implicit */_Bool) ((int) min((var_1), (((/* implicit */unsigned short) arr_6 [i_10])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) (~(var_0)));
                        var_37 &= ((/* implicit */unsigned int) (unsigned short)12969);
                        arr_40 [7LL] [i_1] [i_1] = ((/* implicit */_Bool) var_3);
                        var_38 = ((/* implicit */unsigned int) max((var_38), (arr_8 [i_1 - 1])));
                    }
                }
            } 
        } 
    }
    var_39 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_1)))), (var_13)));
}
