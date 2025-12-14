/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117622
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 *= ((/* implicit */signed char) (short)29871);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((short) -1100300437));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1))));
        var_20 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 2312397885U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-21816))))));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-29872)) ? (((/* implicit */int) (short)-21816)) : (((((/* implicit */_Bool) (signed char)-126)) ? (((((/* implicit */int) (short)21837)) - (((/* implicit */int) (short)-21816)))) : (((/* implicit */int) (_Bool)1))))));
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-29872))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) (short)22818)) : ((~(((/* implicit */int) (short)-32765))))))), ((((_Bool)1) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) / (arr_0 [i_2] [i_2]))) : (max((2312397873U), (((/* implicit */unsigned int) (short)-21801))))))));
                    var_24 = ((/* implicit */unsigned char) arr_4 [i_2]);
                }
            } 
        } 
        arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) (short)21967)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) (short)9652)))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) (signed char)100))))))));
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */int) (_Bool)1);
        arr_25 [i_7] = ((/* implicit */signed char) (short)29885);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_25 = ((/* implicit */int) (((-(8LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2312397874U))))))));
                    var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)29867)) ? (10394591608115965180ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_7] [i_7])))));
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? (((arr_29 [i_7] [i_7] [i_7]) / (((/* implicit */long long int) 2312397882U)))) : (((/* implicit */long long int) ((-22) | (((/* implicit */int) var_7)))))));
        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((-2038545961) + (2147483647))) << (((((-2038545975) + (2038545990))) - (14)))))) ? (((/* implicit */unsigned long long int) (+((-2147483647 - 1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7] [i_7]))) | (10961993295499066717ULL)))));
    }
    var_29 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7))))) : (0ULL))), (((/* implicit */unsigned long long int) 1982569408U))));
    var_30 = ((/* implicit */signed char) (short)3);
    var_31 = ((/* implicit */int) (signed char)71);
    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((long long int) (unsigned short)19997)))));
}
