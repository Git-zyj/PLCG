/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141010
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */long long int) max((var_3), (((/* implicit */int) (short)24068))))) / (var_15)))) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (var_10))), (((/* implicit */unsigned long long int) var_7)))) : (((((unsigned long long int) var_7)) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) var_5)))))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_10))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((short) min((((unsigned int) 2533762692U)), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))));
        var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)5)))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 - 1] [i_0 + 1]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_13);
        var_20 = ((((/* implicit */_Bool) (((+(4294967295U))) / ((-(arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_8)))) : (6815029142115497378ULL))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_0] [i_1])))) - (arr_1 [i_0] [i_1])))));
            var_22 ^= ((/* implicit */unsigned int) ((unsigned short) ((arr_0 [i_0]) ^ (arr_0 [i_1]))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_23 = ((/* implicit */long long int) min((var_23), (((((/* implicit */_Bool) min((arr_6 [i_0] [i_2] [i_0] [i_0 + 2]), (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) : (((((/* implicit */_Bool) (signed char)31)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                arr_9 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) * (arr_1 [i_0 - 1] [i_0 + 4])))) ? (max((arr_1 [i_0 - 1] [i_0 + 4]), (((/* implicit */unsigned long long int) (unsigned short)26302)))) : (min((arr_1 [i_0 - 1] [i_0 + 4]), (arr_1 [i_0 - 1] [i_0 + 4])))));
                arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) 0U)) & (((((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) ^ (2LL))) - (((/* implicit */long long int) 4294967287U))))));
            }
            for (short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_1])), ((unsigned short)52089)));
                /* LoopSeq 1 */
                for (short i_4 = 4; i_4 < 20; i_4 += 4) 
                {
                    arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
                    var_25 = ((/* implicit */unsigned int) ((((_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (11845902238784885269ULL)))))));
                    arr_17 [i_1] [i_3] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (short)1413)))));
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) + ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) > (127ULL)))))))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    var_27 = ((/* implicit */unsigned int) arr_3 [i_3]);
                    var_28 = ((/* implicit */_Bool) arr_1 [i_3] [i_0]);
                    var_29 += (-(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (63ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_0] [i_3] [i_3] [i_5]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
                }
                for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    arr_24 [i_1] [i_0] [i_1] [i_3] [i_6] = ((/* implicit */short) (-(((unsigned int) arr_4 [i_0 + 2]))));
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-32289))))))) * (((((/* implicit */_Bool) ((signed char) (short)-22))) ? (max((var_10), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 4294967295U)))))))))));
                    arr_25 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((_Bool) 1588591906U));
                    var_31 &= ((/* implicit */unsigned int) max(((~((~(arr_14 [i_0] [i_1] [i_3] [i_6]))))), (((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_6])))))))));
                    arr_26 [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_23 [i_0] [i_1] [i_3] [i_6])))) != (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_3] [i_6] [i_3]))) : (4503599627370495LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) : (((((/* implicit */_Bool) (~(var_11)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_29 [i_1] [i_3] [i_7] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                    var_32 = ((/* implicit */unsigned long long int) ((short) var_2));
                    var_33 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)43382)))) * (((/* implicit */int) (unsigned char)0))))) < (((arr_8 [i_0 - 1] [i_0] [i_0] [i_0 + 3]) ^ (((/* implicit */unsigned long long int) arr_5 [i_0 + 2] [i_0] [i_0] [i_0 + 1]))))));
                    var_34 *= ((/* implicit */signed char) (+(((/* implicit */int) ((arr_0 [i_0 - 1]) < (var_9))))));
                    arr_30 [i_0] [i_0] [i_1] [i_1] [i_3] [i_7] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-120)), (2215438221940447451LL)))) ? ((-(((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_15 [i_0] [i_1] [i_3] [i_7])) - (((/* implicit */int) (short)-2654)))))));
                }
            }
            for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                arr_33 [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_3)) == ((+(arr_22 [i_1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 4])))));
            }
        }
    }
    for (signed char i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
    {
        var_36 &= 534773760U;
        arr_38 [i_9] [i_9] &= var_3;
    }
}
