/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117994
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = min((arr_1 [i_0 + 1]), (((/* implicit */unsigned char) ((_Bool) arr_0 [i_0 - 1]))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [0]))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)221)), (var_5))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) ? (arr_0 [i_0 + 4]) : (((/* implicit */long long int) var_5))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -296196253)), (-1615977199199993362LL)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 8773822865126633694LL)) : (15993187562127254600ULL)))))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) ((((arr_0 [i_0 + 3]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126))))) % (max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (arr_5 [i_0])))), (min((-784006254662250696LL), (((/* implicit */long long int) arr_1 [i_0]))))))));
            arr_6 [(signed char)3] [i_1] [i_1 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 4])) >> (((/* implicit */int) (_Bool)1)))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                var_19 -= var_17;
                arr_11 [(unsigned char)4] [i_1] [i_2] [i_0] = ((min((arr_9 [i_0 + 4] [i_0 + 2]), (((/* implicit */unsigned long long int) var_10)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)43)))));
                var_20 *= ((/* implicit */_Bool) var_16);
            }
            for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((784006254662250696LL), (((/* implicit */long long int) arr_10 [i_3] [i_1] [i_0 + 3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8162)))))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_11))))));
                var_21 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) 2820200903U)))))))));
                var_22 -= ((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)55339)) >> (((((/* implicit */int) arr_14 [i_3 + 1])) + (20035)))))));
            }
            var_23 = ((/* implicit */int) (+(arr_5 [i_1])));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                {
                    arr_22 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((5131671389862028726ULL), (((/* implicit */unsigned long long int) -784006254662250682LL))))) ? (927582077) : (((/* implicit */int) (unsigned short)28195))))) - (((long long int) ((((/* implicit */int) arr_17 [i_4])) != (((/* implicit */int) (unsigned short)6932)))))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (-784006254662250696LL))))))) > (((/* implicit */int) var_14))))));
                    arr_23 [i_4] [0U] [i_6] = ((/* implicit */unsigned char) var_3);
                    arr_24 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((var_9), ((!(((/* implicit */_Bool) (signed char)67))))))), (((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)279)))))));
                }
            } 
        } 
        var_25 *= ((/* implicit */unsigned short) var_5);
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (arr_27 [i_8] [i_7] [i_4])))) ? (min((arr_27 [i_4] [i_8] [i_9]), (arr_27 [i_8] [i_8] [i_7]))) : (((arr_27 [i_7] [i_8] [i_9]) - (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
                        arr_33 [i_4] [i_9] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (-6173261858734262839LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23162)))));
                    }
                } 
            } 
        } 
    }
    var_27 *= ((/* implicit */int) ((((/* implicit */_Bool) max(((-(var_15))), (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_9))) <= (((/* implicit */int) var_8)))))) : (min((((/* implicit */unsigned int) (unsigned short)6354)), (var_13)))));
    var_28 -= ((/* implicit */int) var_1);
    var_29 = ((/* implicit */unsigned short) max((var_29), (var_3)));
    var_30 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (!(var_12)))) | (((var_12) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))));
}
