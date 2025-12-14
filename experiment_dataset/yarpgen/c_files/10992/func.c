/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10992
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((1939132661), ((-(-1939132648)))))), ((+((~(arr_7 [i_0] [i_0] [i_1] [i_2])))))));
                    var_21 |= ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                    arr_9 [i_1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(var_7)));
                }
                var_22 += ((/* implicit */unsigned int) (((!(var_1))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])), (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32))) : (arr_0 [i_0])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            for (unsigned short i_5 = 4; i_5 < 16; i_5 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) -523025984);
                        var_23 = ((/* implicit */signed char) (+(max((((((/* implicit */int) var_1)) % (((/* implicit */int) arr_18 [i_3] [i_5])))), ((-(((/* implicit */int) (signed char)(-127 - 1)))))))));
                    }
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_4 + 1] [i_3] [i_5 - 1])))))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (((!(((/* implicit */_Bool) -523025984)))) ? ((~(((((/* implicit */_Bool) 3563817184U)) ? (1812940358915909412ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3]))))))) : (max(((-(17545806735656866115ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_14 [i_3] [i_3] [i_3])) >= (var_4)))))))))));
        var_26 = ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (min((3297057550U), (((/* implicit */unsigned int) -523025979)))) : (min((4220719261U), ((-(var_4))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_27 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) max((arr_14 [i_7] [i_7] [i_7]), (((/* implicit */int) (signed char)119))))))));
        var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_11))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned char) (_Bool)0)))));
    }
    var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (((((/* implicit */_Bool) var_11)) ? ((+(var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    var_30 *= ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) max(((+(((var_16) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8]))) >= (arr_15 [i_8])))), (arr_25 [1ULL]))))));
        arr_26 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_8])) ? (arr_15 [i_8]) : (arr_15 [i_8])))) ? (((/* implicit */unsigned long long int) 1939132680)) : (((17545806735656866115ULL) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_8])))))))));
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 14; i_9 += 3) 
    {
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_9])) ? (arr_12 [i_9 - 1]) : (arr_12 [i_9])));
        var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_9])) % (((/* implicit */int) arr_24 [i_9])))))));
        arr_30 [i_9 + 1] [i_9] = ((/* implicit */_Bool) var_5);
        var_34 = ((/* implicit */unsigned char) arr_11 [i_9] [i_9 + 2]);
    }
}
