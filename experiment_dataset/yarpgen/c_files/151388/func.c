/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151388
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
    var_17 = (~(((((/* implicit */_Bool) ((14974233013859284175ULL) + (((/* implicit */unsigned long long int) 1061372328))))) ? ((~(var_11))) : (max((((/* implicit */long long int) 3124186347U)), (var_1))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -595591476)) ? ((~(((((/* implicit */unsigned long long int) arr_0 [i_0])) - (var_3))))) : (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */long long int) 2046334379U)))))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (12374942662192686384ULL))) < (((/* implicit */unsigned long long int) (~(arr_1 [6ULL] [6U]))))))) : (var_13)));
        var_20 = ((/* implicit */long long int) max((var_20), ((~(((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (max((arr_0 [i_0]), (var_1))) : (arr_1 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 2; i_1 < 7; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned int) 595591476)) & (2046334376U))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) 6907545571095716825LL);
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-6074282828400859970LL) : (((/* implicit */long long int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) > (3124186347U))))) : (var_3))))))));
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)212))))))) ? ((~((~(-6907545571095716816LL))))) : (var_4)));
                                var_25 = ((/* implicit */short) (~(var_0)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                {
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) -3832291809578613021LL)) : (2305843009213693951ULL))))));
                    var_27 = (~(((((/* implicit */_Bool) 803565425U)) ? (arr_17 [i_1 + 2]) : (arr_17 [i_1 + 3]))));
                }
            } 
        } 
        arr_19 [i_1] [i_1] = ((/* implicit */long long int) var_15);
        /* LoopSeq 2 */
        for (int i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_8 + 1] [i_1] [i_1])))), (arr_13 [10LL] [i_8] [i_8 - 2] [i_8 - 1] [10U])))));
            arr_22 [(_Bool)1] = ((/* implicit */int) min((((((/* implicit */_Bool) -2147483640)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_14)) : (arr_20 [i_1] [i_8 - 2]))) : (max((var_4), (((/* implicit */long long int) var_8)))))), ((~(var_0)))));
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) 6907545571095716820LL))));
        }
        for (int i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
        {
            arr_26 [i_1 + 4] [i_1] = (~(((((((/* implicit */_Bool) var_14)) ? (arr_6 [i_1] [i_1] [i_9] [(signed char)3]) : (6907545571095716830LL))) % (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))));
            var_30 = ((/* implicit */long long int) min((var_30), ((~(((((-6907545571095716825LL) != (-6907545571095716851LL))) ? (max((arr_16 [i_1] [9] [0]), (((/* implicit */long long int) (short)5072)))) : (arr_16 [i_9 + 1] [i_9 - 2] [i_1 + 2])))))));
        }
    }
    var_31 += ((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_10))) ^ (((var_5) % (((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) : (3124186321U)))))));
    var_32 = min((((((/* implicit */unsigned long long int) var_1)) % ((~(12374942662192686399ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2743496291987826825LL)) || (((/* implicit */_Bool) var_3))))), (var_14)))));
}
