/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120871
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 11; i_2 += 1) 
            {
                {
                    var_10 ^= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)62)) && (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)26345)), (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2146435072)) ? (var_3) : (((/* implicit */unsigned long long int) var_5)))))))));
                    arr_10 [i_0] [i_0] [i_0] = ((unsigned int) -2146435078);
                    var_11 += ((/* implicit */unsigned long long int) max((max((var_1), (((/* implicit */unsigned int) 2146435071)))), (((/* implicit */unsigned int) (unsigned short)57083))));
                    var_12 = ((/* implicit */unsigned short) ((2146435082) < (((/* implicit */int) (signed char)-1))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        arr_14 [(short)4] &= ((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) (unsigned short)20029))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            arr_17 [i_3] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -2146435062)) | (18446744073709551605ULL))))));
            arr_18 [i_3] [10U] [(unsigned short)0] &= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)49700))));
            var_13 &= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))));
            arr_19 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2146435080)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3)));
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            for (unsigned int i_6 = 1; i_6 < 12; i_6 += 3) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                    var_15 ^= ((/* implicit */unsigned short) (~(2147483636)));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2146435070)) ? (3821481999U) : (((/* implicit */unsigned int) 2146435082))));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) 2146435072);
    }
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        var_18 = (+(((unsigned int) (~(((/* implicit */int) (unsigned short)20839))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)20809)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) : (((var_3) / (((/* implicit */unsigned long long int) var_5))))));
        var_20 |= ((/* implicit */unsigned short) max((((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned short)15830)) - (15819))))), (((/* implicit */int) (unsigned short)44696))));
    }
    var_21 = ((/* implicit */unsigned int) var_9);
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((min((2146435072), (2146435068))) / (((/* implicit */int) var_0))))) + (var_3)));
    var_23 = ((/* implicit */unsigned int) min((((min((120596610239516593ULL), (((/* implicit */unsigned long long int) -2146435079)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44697))) & (4294967295U))))));
}
