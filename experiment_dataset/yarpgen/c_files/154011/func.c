/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154011
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
    var_13 = ((/* implicit */unsigned short) var_8);
    var_14 -= ((/* implicit */short) (~(11435012480132658769ULL)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [22] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7011731593576892859ULL)) ? (arr_1 [(short)22]) : (11952811616576393625ULL)))) ? (7011731593576892843ULL) : (max((7011731593576892853ULL), (((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [24]))))));
                var_15 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_3 [18ULL] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) << (((((((/* implicit */_Bool) (short)16383)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21068))))) - (1910011941U))))) + (((/* implicit */int) ((signed char) max((((/* implicit */int) (_Bool)1)), (2055315199)))))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((((/* implicit */_Bool) arr_1 [2LL])) ? (arr_1 [(unsigned char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))))) - (((((/* implicit */_Bool) arr_1 [16U])) ? (((/* implicit */unsigned long long int) 1617114373)) : (arr_1 [(unsigned short)12])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((min(((+(((/* implicit */int) (unsigned short)50528)))), (((/* implicit */int) (unsigned short)25140)))) == (((((/* implicit */int) (unsigned short)8928)) << (((11435012480132658757ULL) - (11435012480132658755ULL))))))))));
                            arr_17 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7011731593576892849ULL)) ? (4294967289U) : (((/* implicit */unsigned int) 65535))))) : (((arr_10 [i_2] [i_3] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2]))))))) << (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8913)) & (((/* implicit */int) (unsigned short)13955))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)44489)) == (((/* implicit */int) arr_4 [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2] [i_2]))))))));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned char)153)) ? (9988191084365219304ULL) : (18310925148554083683ULL)))));
            }
        } 
    } 
}
