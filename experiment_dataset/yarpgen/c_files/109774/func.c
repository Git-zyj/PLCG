/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109774
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
    var_12 += ((/* implicit */short) ((-3755523649565615818LL) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) var_1);
        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
        var_15 += ((/* implicit */long long int) ((((/* implicit */int) (short)22351)) * (((/* implicit */int) (signed char)-53))));
    }
    for (long long int i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_3)))) && (((/* implicit */_Bool) arr_3 [i_1 + 1]))));
        arr_5 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_1 + 1])), (var_7)))) ? ((+(min((((/* implicit */unsigned long long int) var_4)), (8581038588567453517ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)15519))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                {
                    var_17 |= ((/* implicit */unsigned int) (+(((((/* implicit */int) ((unsigned char) (unsigned short)62110))) + (((/* implicit */int) (unsigned short)56997))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) (unsigned short)65533)))));
                                arr_16 [i_1] [(unsigned char)10] |= ((/* implicit */unsigned short) ((17563315732012539215ULL) - (10471786518918580512ULL)));
                                arr_17 [i_1] [i_2 - 2] [(unsigned char)0] [i_4 + 1] [i_5] &= ((/* implicit */unsigned short) (short)-22347);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 21; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(2530845947U)))) ? (((((/* implicit */_Bool) min((arr_20 [i_1] [i_2 - 2] [i_3] [i_6 - 2] [i_7 + 1]), (((/* implicit */unsigned short) (short)22318))))) ? (((unsigned long long int) arr_7 [i_7] [i_7])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6 + 1] [i_6] [i_6 - 1] [i_6] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22359)))));
                                var_20 = max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)80)));
                            }
                        } 
                    } 
                    arr_22 [0ULL] [0ULL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_10)), ((short)-22318)))) ? (((((/* implicit */_Bool) arr_21 [0U])) ? (arr_18 [i_1 - 2] [i_1] [i_1] [i_1] [(unsigned short)22] [14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (unsigned short)15516)) : (((/* implicit */int) (short)22346)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((var_5) - (199125758)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)77)) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (unsigned short)8525)))) : (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (short)22346)) : (((/* implicit */int) (unsigned short)56874))))));
                }
            } 
        } 
        arr_23 [i_1] = ((/* implicit */_Bool) (short)22346);
    }
    var_21 = ((/* implicit */unsigned char) min((10471786518918580500ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28677)) >= (((/* implicit */int) (unsigned char)91)))))));
}
