/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110105
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
    var_17 = ((/* implicit */short) 4503599593816064LL);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4503599593816091LL)) ? (4503599593816058LL) : (((/* implicit */long long int) 4294967295U))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) < (var_8)))))));
    var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)7168)))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) > (var_13))) ? (((/* implicit */unsigned long long int) ((var_15) >> (((((/* implicit */int) var_7)) - (85)))))) : (18446744073642442752ULL))) : (((/* implicit */unsigned long long int) var_11))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)39)), (0ULL)));
        var_20 = ((((/* implicit */_Bool) (short)7168)) ? (min((min((-4503599593816065LL), (18LL))), (((/* implicit */long long int) ((unsigned short) (unsigned char)28))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))))))));
        var_21 |= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) arr_1 [(signed char)4] [i_0])), (arr_0 [(short)8])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (short)-1))) ? (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2 + 1] [i_2])) : (((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551608ULL) : (2635696181621469009ULL)))));
                    var_23 = ((/* implicit */int) 2147467264U);
                    var_24 = ((/* implicit */short) 8476591586922682405LL);
                }
            } 
        } 
        var_25 = ((((/* implicit */_Bool) ((unsigned int) 2147467264U))) ? (arr_6 [5U] [3U] [i_1]) : (((/* implicit */unsigned int) -1)));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) 3833383095431438688ULL));
        arr_12 [i_1] = ((/* implicit */unsigned char) (short)28672);
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) 2147500032U);
        var_27 += ((/* implicit */int) var_2);
    }
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_6 = 1; i_6 < 15; i_6 += 1) 
        {
            arr_24 [i_5] = ((/* implicit */unsigned char) (+(18446744073709551615ULL)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) 4103288153U))));
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) arr_16 [i_8])) ? (arr_21 [16]) : (((((/* implicit */_Bool) 2147500032U)) ? (722421102U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))));
                    arr_29 [i_8] [i_5] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned short)0))));
                }
                for (long long int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                    var_31 = ((/* implicit */unsigned short) ((((unsigned int) (_Bool)1)) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9))))));
                }
                var_32 = ((/* implicit */_Bool) var_16);
                var_33 = ((/* implicit */unsigned short) (!(var_1)));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (((((/* implicit */int) (short)24576)) | (((/* implicit */int) (_Bool)1)))))))));
                arr_34 [i_5] [12ULL] [i_10] [i_10] &= ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) (signed char)-104)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))) + (var_9)))))));
                var_35 = ((/* implicit */long long int) ((arr_33 [i_6] [i_6 + 4]) <= (((arr_33 [8ULL] [i_6 + 1]) << (((arr_33 [i_5] [i_6 + 4]) - (15129673965919893925ULL)))))));
                /* LoopNest 2 */
                for (short i_11 = 1; i_11 < 18; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 562949953421311LL)) ? ((+((~(var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)63))))));
                            var_37 |= ((/* implicit */unsigned int) min((((var_1) ? (9223372036854775807LL) : (2199006478336LL))), (((/* implicit */long long int) 2147483647))));
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18LL)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) arr_16 [i_6 - 1]))))))) : (((arr_27 [i_10] [i_5]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_11 + 1] [i_12])) >> (((arr_19 [i_10]) + (1329443582)))))) : (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (2818216244804185359ULL)))))));
                        }
                    } 
                } 
            }
        }
        var_39 = ((/* implicit */unsigned int) max((var_39), (var_6)));
    }
    var_40 = ((/* implicit */int) (+(((var_0) << (((((((/* implicit */_Bool) var_9)) ? (var_11) : (var_10))) - (71871611U)))))));
}
