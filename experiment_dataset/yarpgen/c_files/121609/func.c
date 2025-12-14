/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121609
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
    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */long long int) var_1)) + (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - (11437997293602925016ULL)))) ? (((((/* implicit */_Bool) 2062717242U)) ? (-589707823463826033LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)96)) + (var_0))))))))));
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (7008746780106626599ULL))) : (((/* implicit */unsigned long long int) -1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_20 += ((/* implicit */short) (_Bool)1);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) var_16)) : (var_17)))) ? (arr_8 [i_0] [(unsigned short)7] [i_0] [i_0] [i_0]) : (((arr_5 [i_2] [(unsigned short)2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)19] [i_1]))) : (var_12))));
                        var_22 = ((/* implicit */unsigned char) (((!(var_13))) ? (((int) (unsigned short)32768)) : (((/* implicit */int) arr_1 [i_3]))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_23 *= ((/* implicit */_Bool) ((arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6484))) : (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                            var_24 -= ((/* implicit */int) var_14);
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_25 ^= ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 1] [i_5] [14LL] [i_5 - 1] [i_5 - 1] [12])) : (((/* implicit */int) (unsigned char)149)));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) | (arr_12 [i_0] [i_1] [5ULL] [i_5 - 1] [i_0] [i_0] [2])));
                            arr_16 [i_0] [(short)0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((int) (unsigned short)65535))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_12)))));
                        }
                        var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)32754))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    arr_24 [6ULL] [i_6] [17ULL] = ((/* implicit */long long int) ((((/* implicit */int) var_15)) + (((/* implicit */int) (unsigned char)95))));
                    var_28 = ((/* implicit */int) var_7);
                    arr_25 [i_7] [i_6] [i_0] [i_0] = ((/* implicit */short) var_9);
                }
            } 
        } 
        var_29 = arr_21 [i_0] [i_0] [i_0];
    }
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */int) max(((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)25002)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31635))) : (2489698294904564754LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)27892))))), (((/* implicit */long long int) min((arr_23 [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) (signed char)31)))))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            for (int i_10 = 2; i_10 < 23; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    {
                        arr_37 [i_8] [i_9] [i_10] [i_11] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_30 [i_8] [i_8] [(signed char)20])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */int) arr_30 [i_8] [i_8] [i_8])) : (((/* implicit */int) var_6)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_12 = 1; i_12 < 23; i_12 += 2) 
                        {
                            arr_40 [i_12] [i_12 - 1] [19] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5))));
                            var_31 = ((/* implicit */short) var_16);
                        }
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_10])))) : (var_11))))))));
                        var_33 = ((/* implicit */int) (signed char)59);
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (max((((/* implicit */unsigned int) arr_28 [20LL])), (arr_15 [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    }
}
