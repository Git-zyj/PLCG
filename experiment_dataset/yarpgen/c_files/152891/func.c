/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152891
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
    var_11 = ((/* implicit */unsigned short) ((var_10) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : ((~(var_1))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_4 [20ULL] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((4032879162U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */int) ((short) (~(((/* implicit */int) (short)-32755)))))) : (((/* implicit */int) ((unsigned short) ((arr_3 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_12 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)19964))))) ? (max((11460046219471217361ULL), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_0 + 1])))) : (((3201715014956945948ULL) ^ (6113220364246674970ULL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 2])) << (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 2] [i_0 - 1])))))));
                    arr_13 [i_0] = ((/* implicit */int) var_4);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (6113220364246674964ULL) : (((/* implicit */unsigned long long int) 2147483646))))) || (((/* implicit */_Bool) 354472589)))))));
                                var_13 -= ((/* implicit */unsigned char) (((-(arr_6 [i_0 - 1] [i_1]))) - (((4294967287U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-14936)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (signed char i_7 = 1; i_7 < 17; i_7 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((6102158584667089900LL) + (-6102158584667089907LL)));
                    arr_29 [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */int) min((max((arr_11 [i_6] [i_6]), ((signed char)-42))), (var_4)))), (((((/* implicit */_Bool) arr_15 [i_7 - 1] [i_6] [i_7 - 1] [i_6] [(unsigned char)21] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_6] [i_7]))))) : (((/* implicit */int) arr_11 [i_7 + 3] [i_7 + 2]))))));
                    arr_30 [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)32754)), (((((/* implicit */_Bool) var_4)) ? (((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2747))))) : (((/* implicit */unsigned long long int) 2680803495U))))));
                    arr_31 [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */int) var_8)), ((+((~(((/* implicit */int) var_0))))))));
                    arr_32 [2] [2] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(6113220364246674944ULL)))))) ? (((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((12962846225522472195ULL), (((/* implicit */unsigned long long int) 3652789612779117185LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) 6113220364246674970ULL))))), (arr_28 [i_5] [i_7 + 3] [i_7 + 3] [i_6])))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((-1) * (((/* implicit */int) (signed char)-17)))), (((((/* implicit */int) arr_24 [i_5] [(short)14])) / (((/* implicit */int) arr_24 [i_5] [6])))))))));
    }
    for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        {
                            arr_48 [i_8 + 1] [7U] [i_11] [7U] = ((/* implicit */signed char) min((((int) ((_Bool) (signed char)-103))), ((~(((/* implicit */int) (unsigned short)34757))))));
                            var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-2747))));
                            var_17 = ((/* implicit */long long int) (short)-10677);
                            arr_49 [i_8] [i_8] [i_8 - 2] [i_8] [i_8] [i_8 - 2] [i_8 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) arr_19 [i_8 - 3] [i_9])) ? ((((_Bool)1) ? (-6102158584667089901LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)60))))) : (((/* implicit */long long int) -1)))) : (((/* implicit */long long int) ((/* implicit */int) (short)32760)))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((max((arr_1 [i_8 + 1]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((int) var_6))))))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (2047311775U)));
        }
        arr_50 [i_8] = ((/* implicit */unsigned char) (-((-(min((3948655257U), (3180033782U)))))));
    }
}
