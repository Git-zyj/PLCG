/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120314
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) max((((((((/* implicit */int) var_0)) != (((/* implicit */int) (_Bool)0)))) ? (((((/* implicit */_Bool) var_0)) ? (918137967) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))), (((/* implicit */int) var_6))));
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_11)))))) ? (arr_4 [(unsigned char)0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483645)) ? (67108864) : (((/* implicit */int) arr_5 [(unsigned char)7] [(short)1]))))) ? (2147483645) : (((/* implicit */int) arr_3 [(short)5])))))));
            arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_1 [i_0 + 1] [i_1 + 3]))) ? (((((arr_1 [i_0 + 1] [i_1 - 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)22766)) - (22734))))) : (((/* implicit */long long int) ((268435455U) << (((arr_1 [i_0 + 1] [i_1 - 1]) + (5642023800283052320LL))))))));
            var_16 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((918137967) >= (((/* implicit */int) var_0)))))) > (((3033268739994652219LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)52))))))) ? (((/* implicit */int) arr_3 [i_0])) : (max((var_9), (((/* implicit */int) var_11))))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_17 = ((/* implicit */_Bool) ((unsigned short) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_9 [i_0 + 1] [i_2] [i_2])))), (var_10))));
            arr_10 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) < (((/* implicit */int) var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */short) (_Bool)1)))))))) : (var_10)));
        }
        var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+((~(((/* implicit */int) var_0))))))) * (max((2618577755U), (132120576U)))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                {
                    arr_21 [i_3] [i_3] [i_5] = ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_2 [i_3])), (max((((/* implicit */int) (unsigned short)54324)), (var_4))))) * (((((/* implicit */_Bool) max((var_9), (((/* implicit */int) arr_13 [i_3] [i_4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3]))))) : (((/* implicit */int) var_7))))));
                    arr_22 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_5 [i_5] [i_4]);
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((((/* implicit */int) (short)-24373)) + (2147483647))) >> (((((/* implicit */int) var_6)) - (70)))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) (!((_Bool)1)))))) & (((/* implicit */int) ((signed char) ((short) (unsigned short)10176))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            arr_25 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_6] [(unsigned short)9] [i_3 + 1])) : (((/* implicit */int) (short)24370))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_6] [i_6] [i_3])))) : (max((4294967282U), (((/* implicit */unsigned int) (short)24389)))))))));
            arr_26 [i_3] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1308)) ? (((/* implicit */int) arr_17 [i_3 + 1] [i_3] [i_3 + 1])) : (((/* implicit */int) arr_3 [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (arr_19 [i_3]))) > (((((/* implicit */_Bool) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3])))))) ? (var_10) : (max((var_13), (((/* implicit */int) var_11)))))));
            arr_27 [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) ((-2147483645) < (((/* implicit */int) (unsigned char)22))))), (((((/* implicit */_Bool) (unsigned short)775)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (_Bool)0))))));
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_3])), (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned long long int) arr_1 [i_6] [i_3])) : (var_8)))))) ? (((/* implicit */int) arr_17 [i_3] [i_3] [(unsigned short)10])) : ((+(max((((/* implicit */int) var_5)), (-374935410)))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned short) 1676389554U)))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_14))))) ? ((~(arr_28 [i_3]))) : (max((arr_19 [i_3]), (((/* implicit */int) arr_0 [i_3 + 1]))))))) == ((~(max((18446744073709551612ULL), (((/* implicit */unsigned long long int) (unsigned short)22126))))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
            {
                arr_34 [i_3] [i_6] [i_3] [i_3] = ((/* implicit */unsigned char) var_4);
                var_23 = ((/* implicit */unsigned int) var_0);
                arr_35 [i_3] [i_3] [i_8] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((((/* implicit */int) var_0)) >= (374935409))))))), (var_9)));
            }
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2371378119247383047LL)) ? (((/* implicit */int) var_5)) : (arr_24 [i_3])))) ? (((((/* implicit */unsigned long long int) arr_1 [i_3] [0])) - (arr_38 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (signed char)-3)) + (26))))))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((1001865560U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38279)))))) ? (max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) (unsigned short)34397))));
            }
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_11 [i_3 + 1]))))))) ? (((((var_4) + (2147483647))) >> (((max((((/* implicit */long long int) (unsigned char)2)), (857938346844216322LL))) - (857938346844216312LL))))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_28 [(unsigned short)10]))))))))))));
        }
        var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)24370)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned short)43410)))) | (((/* implicit */int) ((((/* implicit */int) ((1676389554U) > (((/* implicit */unsigned int) arr_19 [i_3]))))) == (var_9))))));
    }
    var_28 = ((/* implicit */short) (+((-(((/* implicit */int) ((unsigned short) (short)-24387)))))));
}
