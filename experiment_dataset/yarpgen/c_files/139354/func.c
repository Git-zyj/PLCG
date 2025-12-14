/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139354
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((16806046739155162082ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4208)))))) ^ (((/* implicit */int) (_Bool)0))));
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-16035)), (((((/* implicit */int) (short)-16041)) + (((/* implicit */int) (short)-16035))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)34179))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18936)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)0))))) && (((/* implicit */_Bool) (short)26054))));
        var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)23] [i_0]))) ^ (arr_1 [i_0] [23LL]));
        var_18 = arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) 905259782U);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 23; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)-113)), ((short)20850)));
                        arr_16 [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((3389707510U) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [20ULL] [i_1] [20ULL])) > (((/* implicit */int) (unsigned short)33522)))))))))) <= (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-6982)), ((unsigned short)24614)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)18935)) != (((/* implicit */int) (short)26040)))))) : (min((2918808830444240128ULL), (((/* implicit */unsigned long long int) (signed char)112))))))));
        arr_17 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 3389707524U)) || (((/* implicit */_Bool) 905259769U))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_0 [i_1] [i_1]))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) 95144030);
        arr_21 [i_5] [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 905259782U)) ? (((/* implicit */int) (unsigned char)76)) : (arr_7 [i_5] [i_5] [i_5])))))))) == (((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? (((((/* implicit */unsigned long long int) arr_7 [(unsigned char)15] [(unsigned char)15] [i_5])) * (1709538249539217925ULL))) : (((/* implicit */unsigned long long int) arr_7 [i_5] [i_5] [i_5])))));
        arr_22 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) min((arr_15 [i_5] [i_5]), (((/* implicit */short) arr_5 [i_5]))))) + (28281)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32756))) : ((+(((905259769U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [(unsigned short)24] [i_5] [8])))))))));
        var_23 = 3466421227792989033LL;
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 18; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9357)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))) : (2918808830444240128ULL)))) ? (((/* implicit */int) min(((unsigned short)19929), (((/* implicit */unsigned short) (unsigned char)62))))) : (((((/* implicit */int) arr_15 [i_7 - 1] [i_7 + 2])) / (((/* implicit */int) (unsigned char)18))))));
                    arr_28 [i_7] = ((/* implicit */unsigned long long int) (unsigned char)188);
                }
            } 
        } 
    }
}
