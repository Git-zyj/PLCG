/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176648
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 *= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) (signed char)-121)) : (((((/* implicit */_Bool) (unsigned char)48)) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)227)) >> (((((/* implicit */int) (unsigned char)255)) - (229)))))))) ? ((+(((((/* implicit */_Bool) 536868864)) ? (arr_0 [(unsigned short)17]) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_1 [i_0]))));
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)43350))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_16 |= ((/* implicit */unsigned short) ((min(((+(((/* implicit */int) (signed char)-98)))), (((/* implicit */int) (unsigned short)30542)))) % (((/* implicit */int) (signed char)-121))));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [11LL])) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-96)), (-288523260055393673LL)))))))));
                var_17 *= ((/* implicit */signed char) (((((-(((/* implicit */int) arr_4 [i_0] [i_0])))) > (((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) + (((/* implicit */int) (signed char)121)))))) ? (((/* implicit */int) ((unsigned short) (~(-1039234415))))) : (max(((~(((/* implicit */int) (signed char)120)))), (((/* implicit */int) arr_4 [i_2] [i_1]))))));
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_1 [i_0]))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (arr_8 [i_0] [i_0] [i_0])))) : (((((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_0])), (arr_1 [i_0])))) + (max((((/* implicit */int) (signed char)101)), (511)))))));
            }
            for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 4) 
            {
                var_19 ^= ((/* implicit */_Bool) (signed char)-96);
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    var_20 *= ((/* implicit */unsigned long long int) (unsigned short)42098);
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)19812)) > (((/* implicit */int) (signed char)95)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-121))))))))));
                    var_22 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) >= (8512151861841184733ULL))) ? (((/* implicit */int) ((_Bool) arr_11 [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_3] [i_4])) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) arr_5 [i_3] [i_1]))))));
                }
                for (unsigned char i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    arr_18 [i_5] [i_0] = ((/* implicit */long long int) arr_5 [i_3] [i_0]);
                    var_23 = ((/* implicit */short) ((min((max((((/* implicit */unsigned long long int) (unsigned short)46877)), (arr_6 [i_0] [i_1] [3ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_1] [i_5])) || ((_Bool)1)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                }
            }
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                var_24 = ((/* implicit */long long int) arr_15 [i_6] [i_1] [i_1] [i_0] [i_0]);
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_0] [17U] [i_6] = (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_6] [i_7] [i_8])));
                            var_25 *= ((/* implicit */signed char) ((((/* implicit */long long int) max((((arr_0 [i_7]) + (((/* implicit */int) (signed char)90)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)244))))))) == (((((/* implicit */_Bool) max((arr_2 [i_0] [i_7] [i_6]), (((/* implicit */short) (signed char)121))))) ? (((long long int) arr_23 [(unsigned char)23] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (unsigned char)0)))))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)95)) % (((/* implicit */int) (unsigned short)1016))));
                        }
                    } 
                } 
            }
            arr_28 [i_1] [i_1] [i_0] = ((/* implicit */short) -258992865);
            arr_29 [i_1] [i_0] = ((/* implicit */unsigned short) ((((((int) arr_19 [i_1])) < (((/* implicit */int) arr_3 [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((signed char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])) && ((_Bool)1))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) -258992857)) : (arr_6 [i_0] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) 46069679U))));
            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */short) max((arr_6 [i_0] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_0])));
        }
    }
    var_27 = (unsigned short)14854;
}
