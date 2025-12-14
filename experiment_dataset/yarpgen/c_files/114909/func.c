/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114909
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
    var_17 = ((/* implicit */unsigned long long int) ((max((((246136987) + (var_14))), (-1368447916))) & (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_8)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_11 [i_1] [i_1] [i_1] &= ((/* implicit */long long int) var_5);
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */short) (unsigned char)0);
                        var_19 = ((/* implicit */long long int) arr_8 [i_1]);
                        arr_14 [i_0] [i_0] [i_3] [i_0] [i_2] [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned int) (~(arr_0 [i_2 - 2])))) : ((~(3538706788U)))));
                        arr_15 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [(short)16]);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_20 [i_0] [i_1] [i_3] [(unsigned char)14] [i_0] [i_0] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) arr_17 [i_0] [i_0])) : ((+(((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0 - 1])))))), (min((((/* implicit */int) (unsigned char)5)), ((~(((/* implicit */int) (unsigned char)251))))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) (unsigned char)0))));
                            arr_21 [i_0 - 1] [i_1] [13LL] [i_2] [i_2 - 3] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (arr_10 [i_2 + 1] [i_4] [i_2 + 1] [i_4]))) > (((/* implicit */int) arr_19 [i_2 + 2] [i_2 - 2] [17] [17] [1ULL]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [3ULL] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4611686016279904256LL)) && (((/* implicit */_Bool) (unsigned short)2047)))))) : (arr_8 [i_0 - 1])));
                        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_2 - 3] [i_2 + 1] [i_2] [i_2 - 3] [i_2] [i_2 + 1]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        arr_27 [i_6] |= ((/* implicit */unsigned short) min((6168566446341416085ULL), (((unsigned long long int) (unsigned char)0))));
                        var_23 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_26 [i_0] [i_0] [i_2 + 2] [i_6] [15U] [i_6]), (((/* implicit */long long int) (short)-32767))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((_Bool) 4216169339U)))))) * (((((/* implicit */_Bool) (unsigned char)255)) ? (4814697050757296775ULL) : (2493135842086648443ULL))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */int) var_2);
                        arr_32 [i_0] [i_0 - 1] [i_2] [i_1] [i_2] [i_7] = (unsigned char)104;
                        var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_0] [(_Bool)1] [i_0] [i_0 - 1] [i_0 - 1])) ? (((((((/* implicit */int) (unsigned char)74)) >= (((/* implicit */int) (signed char)(-127 - 1))))) ? (15953608231622903173ULL) : (min((10694288532007781861ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_16))) ? (((/* implicit */int) arr_12 [(unsigned char)0] [i_2] [i_0 - 1] [i_7 - 1] [i_2] [i_2 - 2])) : (((/* implicit */int) arr_7 [i_7 - 1] [i_0 - 1] [(signed char)17])))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 15953608231622903173ULL)) ? (756260534U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20)))))));
}
